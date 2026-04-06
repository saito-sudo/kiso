#include <stdio.h>
int convert(void);

int main(void)
{
    printf("%d\n", convert());

    return 0;
}
int convert(void)
{
    int dol;

    printf("何ドルか入力してください:");
    scanf("%d", &dol);
    return dol / 2;
}