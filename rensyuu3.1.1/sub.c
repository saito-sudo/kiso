#include <stdio.h>
#include <conio.h>

int main (void)
{
    int i;
    char ch, small;
    printf("10文字入力してください");

    small = 'z'; /*一番大きい文字からはじめる*/
    for(i=0; i<10; i++){
        ch=getche();
        if(ch <small) small = ch;
    }
    printf("\n一番小さな文字は%cです", small);
    return 0;
}

学び、この#include <conio.h>は古くて動かない。