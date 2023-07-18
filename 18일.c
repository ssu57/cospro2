/*4*4크기 격자 모양 지형에 위험지역이 몇개인지 알고 싶습니다.
위험지역이란 동서남북 인정한 지역이 모두 해당 지역보다 높은 지역입니다.
예를 들어 지역 높이가 아래와 같다면
3! 6  2! 8
7  3! 4  2!
8  6  7  3
5  3  2! 9
빨간 영역은 인접한 지역이 모두 해당 지역보다 높은 위험지역입니다.
지역별 높이가 담긴 2차원 배열 height, height_len이 solution 함수의 매개변수로 주어질 때,
위험지역이 몇 개인지 return 하도록 solution 함수 완성*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int height[][4], int height_len) {
	int count = 0;
	int cnt = 0;
	int** num = (int*)malloc(sizeof(int) * height_len);
	for (int i = 0; i < height_len; i++) {
		num[i] = (int*)malloc(sizeof(int) * 4);
	}
	for (int i = 0; i < height_len; i++) {
		for (int j = 0; j < 4; j++) {
			num[i][j] = height[i][j];
		}
	}
	for (int i = 0; i < height_len; i++) {
		for (int j = 0; j < 4; j++) {
			if (i != 0) {
				if (num[i - 1][j] > num[i][j]) {
					cnt++;
				}
			}
			else {
				cnt++;
			}
			if (i != height_len-1) {
				if (num[i + 1][j] > num[i][j]) {
					cnt++;
				}
			}
			else {
				cnt++;
			}

			if (j != 0) {
				if (num[i][j - 1] > num[i][j]) {
					cnt++;
				}
			}
			else {
				cnt++;
			}

			if (j != 3) {
				if (num[i][j + 1] > num[i][j]) {
					cnt++;
				}
			}
			else {
				cnt++;
			}

			if (cnt == 4) {
				count++;
			}
			cnt = 0;
		}
	}
	return count;
}
int main() {
	int height[4][4] = { {3,6,2,8},{7,3,4,2},{8,6,7,3},{5,3,2,9} };
	int height_len = 4;
	int ret = solution(height, height_len=4);
	printf("solution 함수의 반환 값은 %d입니다\n", ret);
}