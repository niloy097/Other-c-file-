/*Write a function that receives 5 integers and returns the sum and average of these numbers. Call this function 
from main() and print the result in main()*/

#include<stdio.h>
void calc(int *sum, float *avg);
int main()

{

    int sum;
    float avg;
    calc(&sum, &avg);
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);

    return 0;
}
void calc(int *sum, float *avg)
{
    int n1, n2, n3, n4, n5;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    *sum = n1 + n2 + n3 + n4 + n5;
    *avg = (*sum)/5.0;
}