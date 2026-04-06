#include <stdio.h>
int main(void)
{
    int day;
    int hour;
    int min;
    int sec;

    day = 365;
    hour = 24;
    min = 60;
    sec = 60;

    printf("１年の秒数は%d\n", day*hour*min*sec);

    return 0;
}