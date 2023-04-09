#include<stdio.h>
float area_circle(int r);

int main()

{

    int r;
    scanf("%d", &r);
    float area = area_circle(r);
    printf("%.2f\n", area);

    return 0;
}

float area_circle(int r)
{
    return (3.14 * r * r);
}