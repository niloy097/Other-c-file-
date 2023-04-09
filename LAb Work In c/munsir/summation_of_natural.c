#include<stdio.h>
int natural_series_sum(int x);
int main()

{

    //Sum of the N'th term of natural number series is = n*(n+1)/2;

    int n;
    scanf("%d", &n);
    int s = natural_series_sum(n);
    printf("%d\n", s);

 
    return 0;
}

int natural_series_sum(int x)
{
    /*int sum = 0;
    for(int i  = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    return sum;
    */

   int sum = (x * (x + 1)/2);
   return sum;
}