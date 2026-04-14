#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[80];
    int a;

    printf("文字列を入力してください。");
    
    // ここを修正！
    fgets(str, sizeof(str), stdin);

    // 文字列の末尾から逆順に表示
    for(a = strlen(str) - 1; a >= 0; a--) {
        printf("%c", str[a]);
    }
    printf("\n");
    return 0;
}