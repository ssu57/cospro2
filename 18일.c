/*4*4ũ�� ���� ��� ������ ���������� ����� �˰� �ͽ��ϴ�.
���������̶� �������� ������ ������ ��� �ش� �������� ���� �����Դϴ�.
���� ��� ���� ���̰� �Ʒ��� ���ٸ�
3! 6  2! 8
7  3! 4  2!
8  6  7  3
5  3  2! 9
���� ������ ������ ������ ��� �ش� �������� ���� ���������Դϴ�.
������ ���̰� ��� 2���� �迭 height, height_len�� solution �Լ��� �Ű������� �־��� ��,
���������� �� ������ return �ϵ��� solution �Լ� �ϼ�*/
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
	printf("solution �Լ��� ��ȯ ���� %d�Դϴ�\n", ret);
}