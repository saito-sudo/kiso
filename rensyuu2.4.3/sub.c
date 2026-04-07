#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("整数を入力してください");
    scanf("%d",&a);
    printf("約数は以下の通りです。\n");

    for(b=1; b<=a; b++){
        if(a%b == 0)printf("%d\n", b);

    }
    
    return 0;

}