#include <stdio.h>
int main(void)
{
    int i[10],j,k,match;

    printf("10個の整数を入力してください。");
    for(j=0; j<10; j++)
    scanf("%d", &i[j]);

    for(j=0; j<10; j++){
        match=i[j];
        for(k=j+1;k<10;k++)
        if(match==i[k])
        printf("%dが重複しています\n", match);
        break;
    }
    return 0;
}