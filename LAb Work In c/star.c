#include<stdio.h>
int main()
{
  int row, col, n;
  printf("Enter value for n: ");
  scanf("%d", &n);

  for(row = n; row >= 1; row--)
  {
    for(col = 1; col <= n - row; col++)

    {
      printf(" ");
    }

    for(col = 1; col <= row; col++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}