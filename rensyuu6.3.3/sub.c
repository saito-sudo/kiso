#include <stdio.h>
int main(void)
{
    char str[80],*p;

    printf("文字列を入力してください。");
    fgets(str, sizeof(str), stdin);

    p=str;

    while(*p && *p!=' ')p++;
    printf("スペース以降は：%s\n", p);;

    return 0;
}