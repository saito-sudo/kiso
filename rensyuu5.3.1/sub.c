#include <stdio.h>

int main(void)
{
    int a[3][3][3];
    int b=0;
    int c=0;
    int d=0;

    for(b=0;b<=2;b++)
    for(c=0;c<=2;c++)
    for(d=0;d<=2;d++)
    a[b][c][d]=b*c*d;

    for(b=0;b<=2;b++)
    for(c=0;c<=2;c++)
    for(d=0;d<=2;d++)
    printf("%d", a[b][c][d]);
printf("\n");

return 0;
}