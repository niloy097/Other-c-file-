// 1/1! + 2/2! + 3/3! + ... uptto 7'th terms-->
#include<stdio.h>

int main()

{

    int i = 1, j;
    float fact, sum = 0.0;
    for(i = 1; i<=7; i++)
    {
        fact = 1.0;
       for(j = 1; j<=i; j++)
       
           fact = fact * j;
       
       sum = sum +(i/fact);
    }
 printf("The sum of the series is: %f", sum);
    return 0;
}