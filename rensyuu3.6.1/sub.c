#include <stdio.h>

int main(void)
{
    int a=0;
    int i=0;
    int is_prime=0

    printf("1～1000の範囲のすべての素数を出します。\n");

    
    for (a = 2; a <= 1000; a++) {
        is_prime = 1;

        
        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                is_prime = 0; 
                break; 
            }
        }

        
        if (is_prime == 1) {
            printf("%d ", a);
        }
    }

    printf("\n終了しました。\n");
    return 0;
}