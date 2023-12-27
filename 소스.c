#include<stdio.h>
int main() {
	char* s1 = "hello";
	s1[0] = 'A';
	printf("%c\n", s1[0]);//실행에러

	return 0;
}
/*#include<stdio.h>
int main() {
	char c1 = 'a';
	char* s1 = "hello";

	printf("%c\n", c1);
	printf("%s\n", s1);
	return 0;
}
#include<stdio.h>
int main() {
	char s1 = "hello";
	printf("%s", s1);//실행오류
	return 0;
}
#include<stdio.h>
int main() {
	char* s1 = "hello";
	printf("%c\n", s1[1]);
	printf("%c\n", s1[4]);
	printf("%c\n", s1[5]);

	return 0;
}
*/