/*���� ���� ������ ���� ���� ������ ���Խ��ϴ�.
�̶� ��, ����, ���� ������ ����� 70�� �̻��̷��� ���� ���� ������ �ּ� �� ���̾�� �ϴ��� �˰� �ͽ��ϴ�.
���� ���� korean�� ���� ���� english�� �Ű������� �־��� ��,
��� ������ 70�� �̻� �ޱ� ���� �޾ƾ� �ϴ� ���������� �ּڰ��� return�ϵ��� solution�Լ��� �ۼ��߽��ϴ�.*/
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
	printf("solution �Լ��� ��ȯ ���� %d�Դϴ�\n", ret);
}