#include <stdio.h>
int main(void)
{
    int num;

    for(num=1; num<101; num=num+1) printf("%d", num);
    printf("終わり\n");

    return 0;
}