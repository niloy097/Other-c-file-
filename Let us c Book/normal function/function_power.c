#include<stdio.h>
float power(float, float);

int main()

{

    /*Write a function  power (a, b) to calculate the value of a raised to b;*/

    float x, y, pow;
    printf("Enter base and power: ");
    scanf("%f%f", &x, &y);
    pow = power(x, y);
    printf("The result is: %f\n", pow);

    return 0;
}

float power(float a, float b)
{
    float p;
    p = 1;
    for(int i= 1; i<=b; i++)
    {
        p = p * a;
    }

    return p;
}