#include <stdio.h>
int main(void)
{
    int a;
    printf("１～１０の整数値を表示します。１行目に整数値、２行目に２乗、3行目に３乗");
    for(a=1; a<11; a++)
    {
        printf("%d\n",a);
        printf("%d\n",a*a);
        printf("%d\n",a*a*a);
        printf("%d | 2乗は %d | 3乗は %d\n", a, a*a, a*a*a);
    }
    return 0;

}