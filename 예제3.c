#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>   //#include<memory.h>
int solution(int papers[], int papers_len, int k)
{
	int length = 0;//length=0이랑 length=papers_len의 차이점 물어보기
	int* peo = (int*)malloc(sizeof(int) * papers_len);
	for (int i = 0; i < papers_len; i++) {
		peo[i] = papers[i];
	}
	//k=k-papers[]이용 k가 0보다 크면 반복,k가 0보다 작으면 정지
	for (int i = 0; i < papers_len; i++) {
		k -= peo[i];
		if (k>0) {
			length++;
		}
	
	}
	free(peo);
	return length;
}

int main()
{
	int papers1[] = { 2,4,3,2,1 };
	int papers_len1 = 5;
	int k1 = 10;
	int ret1 = solution(papers1, papers_len1, k1);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret1);//3

	int papers2[] = { 2,4,3,2,1 };
	int papers_len2 = 5;
	int k2 = 14;
	int ret2 = solution(papers2, papers_len2, k2);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret2);//5

	return 0;
}