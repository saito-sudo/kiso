#include <stdio.h>
int main(void)
{
    int num;
    int answer;

    printf("整数を入力してください");
    scanf("%d", &num);
    answer = num%2;
    if(answer == 0) printf("この数字は偶数です\n");
    if(answer == 1) printf("この数字は奇数です\n");

    return 0;
}