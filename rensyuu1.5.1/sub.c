#include <stdio.h>
int main(void)
{
    int a;
    int b;
    int c;

    printf("辺の寸法を入力してください");
    scanf("%d", &a);
    printf("辺の寸法を入力してください");
    scanf("%d", &b);
    printf("辺の寸法を入力してください");
    scanf("%d", &c);

    printf("立方体の体積は%d\n", a*b*c);

    return 0;
}