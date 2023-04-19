#include<stdio.h>

int factorial(int);

int main()

{

    int f;
    printf("Enter a number: ");
    scanf("%d", &f);
    int fact = factorial(f);
    printf("The factorial of %d is %d\n", f, fact);
    return 0;
}

int factorial(int x)
{
    int fa = 1;
    for(int i = 1; i<=x; i++)
    {
        fa = fa * i;
    }

    return fa;
}