#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char* s1 = malloc(sizeof(char)*10);//char ĭ 10�� ĭ ����
	printf("���ڿ��� �Է��Ͻÿ�: \n");
	scanf("%s", s1);
	printf("%s\n", s1);
	free(s1);
	return 0;
}
/*
* //���ڿ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char s1[10];
	scanf("%s", &s1);
	printf("%s\n", s1);

	return 0;
}
//���� ���� ���ڿ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char s1[30];
	printf("���ڿ��� �Է��Ͻÿ�: \n");
	scanf("%[^\n]s", s1);
	printf("%s\n", s1);
	return 0;
}
*/