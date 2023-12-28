//39.6연습문제
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30] = "The Little Prince";
	char* ptr = strrchr(s1, 'i');
		printf("%s\n", ptr);
		return 0;
}
/*
//ctrchr(대상문자열, 검색할 문자)
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30] = "A Garden Diary";
	char* ptr = strchr(s1, 'a');

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'a');
	}
	return 0;
}
//strrchr(대상문자열, 검색할 문자)
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30] = "A Gardeb Duary";
	char* ptr = strrchr(s1, 'a');
	printf("%s\n", ptr);
	return 0;
}
//strstr(대상문자열, 검색할 문자열)
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30] = "A Garden Diary";
	char* ptr = strstr(s1, "den");
	printf("%s\n", ptr);
	return 0;
}
//strstr(대상문자열, 검색할 문자열)
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";
	char* ptr = strstr(s1, "den");
	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strstr(ptr + 1, "den");
	}
	return 0;
}
//39.5연습문제
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30] = "Alice in Wonderland";
	char* ptr = strchr(s1, 'n');
	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'n');
	}
	return 0;
}
*/
