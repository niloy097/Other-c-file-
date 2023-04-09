/*Write a  Function Find the Average of three numbers.*/

#include<stdio.h>

float Average(int x, int y, int z);

int main()

{

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    float avg = Average(x, y, z);
    printf("%.2f\n", avg);

    return 0;
}

float Average(int x, int y, int z)
{
    return((x+y+z)*(1.0)/3);
}