#include <stdio.h>
int main(void)
{
    double a,b;
    char ch;

    printf("次のどの面積を計算したいですか\n");
    printf("円(A),長方形(B),三角形(C)アルファベットの1文字を入力してください");
    ch = getchar();
    printf("\n");

        if(ch=='A') 
        {printf("半径を入力してください");
        scanf("%lf", &a);
        printf("面積は%.2f", a*a*3.14);}

            else if(ch=='B')
            {printf("縦と横の長さを入力してください");
            scanf("%lf%lf", &a,&b);
            printf("面積は%f", a*b);}

                else if(ch=='C') 
                {printf("底辺と高さを入力してください");
                scanf("%lf%lf", &a,&b);
                printf("面積は%.1f",(a*b)/2);}
return 0;
}

