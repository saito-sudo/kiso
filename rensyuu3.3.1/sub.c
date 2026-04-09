#include <stdio.h>
int main(void)
{
    int a;
    double b;
    int n;
    int i;

    printf("何回計算しますか？");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        printf("距離と平均速度を入力してください");
        scanf("%d%lf", &a,&b);
        printf("所要時間は%.lf時間です\n",a/b);
    }
    printf("計算は終了しました。");
    
    return 0;
}