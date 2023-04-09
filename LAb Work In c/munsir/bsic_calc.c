/*Write Function Find the Summation/Difference/Product/Quotient/Reminder of two numbers.*/

#include<stdio.h>
int Summation(int x, int y);
int Difference(int x, int y);
int product(int x, int y);
int Quotient(int x, int y);
int Reminder(int x, int y);
int main()

{

    int a, b;
    scanf("%d %d", &a, &b);
    int sum = Summation(a, b);
    printf("%d\n", sum);

    int min = Difference(a, b);
    printf("%d\n", min);


    int mul = product(a, b);
    printf("%d\n", mul);

    int quo = Quotient(a, b);
    printf("%d\n", quo);

    int rem = Reminder(a, b);
    printf("%d\n", rem);

    return 0;
}
int Summation(int x, int y)
{
    return x + y;
}

int Difference(int x, int y)
{
   
    return x - y;
    
    
}

int product(int x, int y)
{
    return x * y;
}

int Quotient(int x, int y)
{
    
    return x / y;
    
    
}

int Reminder(int x, int y)
{
    return x % y;
}