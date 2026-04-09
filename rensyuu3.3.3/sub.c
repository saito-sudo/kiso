#include <stdio.h>
int main(void)
{
    int a;
    int b=1;

    printf("値を１から１０００まで増やします。\n");

    for(a=1;a<1000;a*=2)
    {
        printf("%2d回目の値はは%4dです。\n",b,a);
        b++;
    }

    printf("１０００を超えたので、終了とします。");

return 0;
}