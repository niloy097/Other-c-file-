#include<stdio.h>
int evn_series_sum(int x);
int main()

{

    int n;
    scanf("%d",  &n);
    int r = evn_series_sum(n);
    printf("%d\n", r);


    return 0;
}

int evn_series_sum(int x)
{
    int sum = 0;
    for(int i = 2; i<=x; i+=2)
    {
        sum = sum + i;
    }
    return sum;

}