#include<stdio.h>
int squre_sum(int x);
int main()

{
    int n;
    scanf("%d", &n);
    int ss = squre_sum(n);
    printf("%d\n", ss);

    return 0;
}

int squre_sum(int x)
{
    int sum = 0;
    for(int i = 2; i<=x; i+=2)
    {
        sum = sum + (i * i * i);
    }
    return sum;
}