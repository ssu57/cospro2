//36.6
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char* s1 = malloc(sizeof(char) * 10);
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", s1);
	printf("%s\n", s1);

	free(s1);
	return 0;
}
/*
36.5
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char s1[10];
	printf("���ڿ��� �Է��ϼ���: \n");
	scanf("%s", s1);
	printf("%s\n", s1);
	return 0;
}
*/