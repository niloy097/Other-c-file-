#include<stdio.h>
int even_sum(int x);
int main()

{

    int n = 7;
    printf("%d\n", even_sum(n));

    return 0;
}

int even_sum(int x)
{
    if(x == 0)
    {
        return 0;
    }
    else
    {
        return x + even_sum(x - 2);
    }
}