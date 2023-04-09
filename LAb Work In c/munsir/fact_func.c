#include<stdio.h>
int fact(int x);
int main()

{

    int num;
    scanf("%d", &num);
    int factorial = fact(num);
    printf("%d\n", factorial);
 
    return 0;
}

int fact(int x)
{
    int f = 1;
    for(int i = 1; i<=x; i++)
    {
        f = f * i;
    }
    return f;
}