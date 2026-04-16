#include <stdio.h>

int main(void)
{
    int a=0;      // 数値を格納する変数
    int *p=0;     // ポインタ変数の宣言

    p = &a;     // ポインタpに変数aのアドレスを格納（紐付け）

    printf("0から9までカウントします。\n");

    // ポインタ経由で値を操作する
    for(*p = 0; *p <= 9; (*p)++) {
        printf("%d ", *p);
    }
    
    return 0;
}