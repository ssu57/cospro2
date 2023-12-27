#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char* s1 = malloc(sizeof(char)*10);//char 칸 10개 칸 만듦
	printf("문자열을 입력하시오: \n");
	scanf("%s", s1);
	printf("%s\n", s1);
	free(s1);
	return 0;
}
/*
* //문자열
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char s1[10];
	scanf("%s", &s1);
	printf("%s\n", s1);

	return 0;
}
//공백 포함 문자열
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char s1[30];
	printf("문자열을 입력하시오: \n");
	scanf("%[^\n]s", s1);
	printf("%s\n", s1);
	return 0;
}
*/