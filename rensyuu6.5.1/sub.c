#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p[3]={
    "はい","いいえ","わかりません。別の言い方で質問してください。"
};
char str[80];

printf("質問を入力してください。\n");
fgets(str, sizeof(str), stdin);

printf("%s\n", p[strlen(str) % 3]);

return 0;
}