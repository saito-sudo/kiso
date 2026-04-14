#include <stdio.h>

int main(void)
{
    float item[100];
    float t;
    int a, b, count; // ループ変数は int にする

    printf("数値をいくつ入力しますか? ");
    scanf("%d", &count);

    // 入力
    for(a = 0; a < count; a++) {
        scanf("%f", &item[a]);
    }

    // バブルソート（並べ替え）
    for(a = 1; a < count; a++) { // 全体を count-1 回繰り返す
        for(b = count - 1; b >= a; b--) { // 後ろから順に比較
            if(item[b - 1] > item[b]) {
                // 入れ替え処理
                t = item[b - 1];
                item[b - 1] = item[b];
                item[b] = t;
            }
        }
    }

    // 結果表示（これがないと動いたか分からないので追加！）
    printf("並べ替え後:\n");
    for(a = 0; a < count; a++) {
        printf("%f ", item[a]);
    }
    printf("\n");

    return 0;
}