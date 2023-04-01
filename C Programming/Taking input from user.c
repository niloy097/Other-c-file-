/*
#include<stdio.h>
void main()
{
    int x, y, z;
    scanf("%d%d%d", &x,&y,&z);
    float average = (x+y+z)/3.0;
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);

    printf("Value of z: %d\n", z);
    printf("Average  of a, b, and c: %.2f\n", average);
    return 0;




}
*/
#include<stdio.h>
void main()
{
    float a,b,c,sum;
    float avg;
    printf("Enter first value:");
    scanf("%f",&a);
    printf("Enter second value:");
    scanf("%f",&b);
    printf("Enter third value:");
    scanf("%f",&c);
    sum=a+b+c;
    avg=sum/3;
    printf("\nSum =%.2f",sum);
    printf("\nAverage =%.2f",avg);
}
