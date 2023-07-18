#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int socks[], int socks_len)
{
    int answer = 0;
    //num¿∫ socks¿«πÃ
    int* num = (int*)malloc(sizeof(int)*socks_len);
    int color[3]={0, };
    for(int i=0; i<socks_len; i++){
        num[i]=socks[i];
     }
    for(int i=0; i<socks_len; i++){
        color[num[i]-1]++;
     }
    answer = color[0] / 2 + color[1] / 2 + color[2]/2;
    return answer;
}

int main()
{
    int socks[] = { 1, 2, 1, 3, 2, 1 };
    int socks_len = 6;
    int ret = solution(socks, socks_len);
    printf("solution %d\n", ret);

    return 0;
}
