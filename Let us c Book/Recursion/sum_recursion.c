#include<stdio.h>
int sum_N_numbers(int x);
int main()
{
    int n = 10;
    printf("%d\n", sum_N_numbers(n));

    return 0;
}

int sum_N_numbers(int x)
{
    if(x == 0)
    {
        return 0;
    }

    else
    {
        return x + sum_N_numbers(x - 1);
    }
}