#include <stdio.h>
int main(void)
{
    int a;
    printf("整数値を入力してください");
    scanf("%d",&a);
    for(a;a>=0; a--)
{   printf("%d",a);
    if(a==0){
        printf("\a\n");
    }
}
    return 0;
}