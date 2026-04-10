#include <stdio.h>
int main(void)
{
    double a=0.0;
    int b=0;

    do{printf("ガロンからリットルに変換します。\n");
        printf("ガロンの数値を入力してください\n");
        scanf("%lf", &a);
        printf("リットルは%.4fです", a*3.7854);

        printf("もう一度計算しますか？(1:はい / 0:いいえ)");

        if(scanf("%d", &b)!=1)
        {printf("数字以外が打たれたため、プログラムを終了します。");
        break;}}

        while(b==1);

        return 0;}