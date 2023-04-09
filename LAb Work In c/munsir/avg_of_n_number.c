#include<stdio.h>
float natural_series_avg(int x);
int main()

{

    //Sum of the N'th term of natural number series is = n*(n+1)/2;

    int n;
    scanf("%d", &n);
    float average = natural_series_avg(n);
    printf("%.2f\n", average);

 
    return 0;
}

float natural_series_avg(int x)
{
    /*int sum = 0;
    for(int i  = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    return sum;
    */

   int sum = (x * (x + 1)/2);
   float avg = sum*(1.0)/x;
   return avg;
}