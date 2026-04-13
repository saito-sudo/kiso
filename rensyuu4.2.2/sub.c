#include <stdio.h>
void soundspeed(double distance);
int main(void)
{
    double distance;
    printf("距離をフィート単位で入力してください:");
    scanf("%lf", &distance);
    soundspeed(distance);

    return 0;
}

void soundspeed(double distance)
{
    printf("所要秒数:%f", distance/1129);
}