#include <stdio.h>

int main(void)
{
    int a = 17;
    int b;

    printf("17から100の間で、%dで割り切れる数を表示します：\n", a);

    // b = 17 からスタートさせる
    for (b = 17; b <= 100; b++) {
        if (b % a == 0) {
            printf("%d ", b);
        }
    }

    printf("\n終わり\n");

    return 0;
}