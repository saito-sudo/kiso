#include <stdio.h>

int main(void)
{
    // c[10001][0]に1乗、[1]に2乗、[2]に3乗を格納する
    int c[10001][3];
    int a, input_val;
    int found = 0;

    // 1. データを配列に準備する
    for(a = 0; a <= 10000; a++) {
        c[a][0] = a;           // 根 (1乗)
        c[a][1] = a * a;       // 2乗
        c[a][2] = a * a * a;   // 3乗
    }

    // 2. ユーザーから3乗値を入力してもらう
    printf("探したい3乗値を入力してください: ");
    scanf("%d", &input_val);

    // 3. 配列の中から一致する3乗値を探す
    for(a = 0; a <= 10000; a++) {
        if(c[a][2] == input_val) {
            printf("3乗根は: %d\n", c[a][0]);
            printf("その2乗は: %d\n", c[a][1]);
            found = 1;
            break; // 見つかったのでループを抜ける
        }
    }

    if(!found) {
        printf("入力された値は、0〜10000の整数の3乗ではありませんでした。\n");
    }

    return 0;
}