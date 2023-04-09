#include<stdio.h>
int squre_sum(int x);
int main()

{

    int ss = squre_sum(101);
    printf("%d\n", ss);

    return 0;
}

int squre_sum(int x)
{
    int sum = 0;
    for(int i = 1; i<=x; i+=2)
    {
        sum = sum + (i * i);
    }
    return sum;
}