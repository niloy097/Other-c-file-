/*Write a programe the defines a function that calculates power of  one number raised to another and factorial
value of a number in one call*/
#include<stdio.h>
void cal_power_fact(int a, int b, int c, int *pow, int *fact);
int main()

{
    int a, b;
    int c;
    int power, factorial;
    printf("Enter a and b for calculating a raised to b: ");
    scanf("%d %d", &a, &b);
    printf("Enter number whose factorial is to be calculated: ");
    scanf("%d", &c);
    cal_power_fact(a, b, c, &power, &factorial);
    printf("The power of %d^%d is: %d\n",a, b, power);
    printf("The fact of %d! is: %d\n", c, factorial);
    

    return 0;
}

void cal_power_fact(int a, int b, int c, int *pow, int *fact)
{
    *pow = 1;
    for(int i = 1; i <= b; i++)
    {
        *pow = *pow * a;

    }
    *fact = 1;
    for(int i = 1; i <= c; i++)
    {
        *fact = *fact * i;

    }
}