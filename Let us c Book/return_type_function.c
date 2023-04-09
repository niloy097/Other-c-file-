#include<stdio.h>

float squre(float);

int main()

{
    float a, b;
    printf("Enter any number: ");
    scanf("%f", &a);
    b = squre(a);
    printf("The squre of %f is %f\n", a, b);

    

    return 0;
}

float squre(float x)
{
    float y;
    y = x * x;
    return y;
}