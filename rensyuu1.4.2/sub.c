#include <stdio.h>

int main (void)
{
    float num;
    float f;

    printf("小数を入力してください");
    scanf("%f", &num);

    printf("２つ目の少数を入力してください");
    scanf("%f", &f);

    printf("２つの合計は%f", num + f);

    return 0;
}