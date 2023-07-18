/*국어 시험 점수와 영어 시험 점수가 나왔습니다.
이때 국, 영어, 수학 시험의 평균이 70점 이상이려면 수학 시험 점수가 최소 몇 점이어야 하는지 알고 싶습니다.
국어 점수 korean과 영어 점수 english가 매개변수로 주어질 때,
평균 점수를 70점 이상 받기 위해 받아야 하는 수학점수의 최솟값을 return하도록 solution함수를 작성했습니다.*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int korean, int english) {
	return 70 * 3 - korean - english;
}
int main() {
	int korean = 70;
	int english = 60;
	int ret = solution(korean, english);
	printf("solution 함수의 반환 값은 %d입니다\n", ret);
}