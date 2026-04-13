#include <stdio.h>
int main(void)

{
    int a = 100;

    printf("100から1までカウントダウンします。\n");
    for(a=100; a>=1; a--)
    printf("%d", a);
    printf("\n");
    return 0;
}