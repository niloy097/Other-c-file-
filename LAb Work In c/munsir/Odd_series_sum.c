#include<stdio.h>
int sum_odd_series(int x);
int main()

{

    int n;
    scanf("%d", &n);
    int s = sum_odd_series(n);
    printf("%d\n", s);


    return 0;
}

int sum_odd_series(int x)
{
    int sum = 0;
    for(int i = 1; i<=x; i = i + 2)
    {
        sum = sum + i;
    }
    return sum;
}