#include <stdio.h>
int main(void)
{
    int choice;
    int a;
    int b;

    printf("1:加算する 2:減算する\n");
    printf("選択してください\n");
    scanf("%d", &choice);
    if(choice == 1){
    printf("1つ目の整数を入力してください\n");
    scanf("%d", &a);
    printf("2つ目の整数を入力してください\n");
    scanf("%d", &b);
    printf("答えは%d", a+b);
    }
    if(choice == 2){
    printf("１つ目の整数を入力してください\n");
    scanf("%d", &a);
    printf("２つ目の整数を入力してください\n");
    scanf("%d", &b);
    printf("答えは%d\n", a-b);
    }

    return 0;
}