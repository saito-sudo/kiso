#include <stdio.h>

int main(void)
{
    // 文字列の配列（0番目〜9番目）
    // [10]は単語の数、[10]は1単語の最大文字数
    char words[10][10] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    int num=0; // 入力された数字を入れる変数

    printf("0〜9の数字を入力してください: ");
    
    // 数字を入力してもらう（%d を使う）
    if (scanf("%d", &num) != 1) {
        printf("数字を入力してください。\n");
        return 1;
    }

    // 入力された数字が 0〜9 の範囲内かチェック
    if (num >= 0 && num <= 9) {
        // num番目の英単語を表示
        printf("英語では: %s\n", words[num]);
    } else {
        printf("0から9の間で入力してください。\n");
    }

    return 0;
}
