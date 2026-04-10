#include <stdio.h>
int main(void)

{
    int a=0;
    
    do{printf("住所録メニューを選択してください。\n");
        printf("1.住所を入力する。\n2.住所を削除する。\n3.リストを検索する。\n4.リストを印刷する。\n5.終了する。\n");
        printf("数字を入力してください。\n");

        scanf("%d", &a);

        if(a==1){printf("1.住所を入力する。\n");}
        else if(a==2){printf("2.住所を削除する。\n");}
        else if(a==3){printf("3.リストを検索する。\n");}
        else if(a==4){printf("4.リストを印刷する。\n");}
        else if(a==5){printf("5.終了する。\n");}
        else{printf("1～5以外が入力されたため、プログラムを終了します。\n");
        break;}

    } while(a!=5);

        return 0;
}