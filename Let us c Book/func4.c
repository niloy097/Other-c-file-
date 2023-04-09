#include<stdio.h>
int fun(int n)
{
  if(n <= 10)
  {
    return (n * n);
  }
  else
  {
    return (n * n * n);
  }
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int d = fun(num);
    printf("Result: %d", d);
}