//p1--->:1 + 2 + 3 + ...... +100

/*
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the last number of series: ");
  scanf("%d", &n);

  printf("1 + 2 + 3 + ...... +%d\n", n);

  int sum = 0;
  int i;

  for (i = 1; i<=n; i++)

  {
    sum = sum + i;
  }

  printf("The sum of the series is: %d", sum);
}
*/


//Solving with while loop--->
/*
#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the last digit of series: ");
    scanf("%d", &n);
    printf("1 + 3 + 5 +.......+%d\n", n);
    int i=1;
    while(i<=n)
    {
      sum = sum + i;
      i = i + 2;
    }

    printf("The sum of the series is: %d", sum);
}
*/

//1*2+2*3+3*4+4*5+...........+m*n = ?

/*
#include<stdio.h>
int main()
{
  int m, n, sum = 0, i, j;  //Here always- (m<n)
  printf("Enter two integer value: ");
  scanf("%d %d", &m, &n);
  printf("1*2+2*3+3*4+4*5+...........+%d*%d = ", m, n );

  i = 1;
  j = 2;
  while(i<=m && j<=n)
  {
    sum = sum + (i * j);
    i = i + 1;
    j = j + 1;
  }

  printf("%d", sum);
  return 0;
}
*/

// 1.5 + 2.5 + 3.5 + 4.5 +.........+N = ?
/*
#include<stdio.h>
int main()
{
  float n, sum = 0, i;
  printf("Enter an float number: ");
  scanf("%f", &n);
  printf("1.5 + 2.5 + 3.5 + 4.5 +.........+%.1f = ", n);
  i = 1;
  while (i<=n)
  {
    sum = sum + i;
    i++;
  }


  printf("%.1f", sum);
  
}
*/

// 1^2 + 2^2 + 3^2 +........+ n^2 = ?
/*
#include<stdio.h>
int main()
{
  int n, sum=0, i;
  printf("Enter value for n: ");
  scanf("%d", &n);

  printf("1^2 + 2^2 + 3^2 +........+ %d^2 = ", n);


  for(i=1; i<=n; i++)
  {
    sum = sum + (i*i);
  }
  printf("%d", sum);

  return 0;
}
*/

// 1-2+3-4+5-6+..........-n=?
//= (1+2+3+.....+n)-(2+4+6+......+n)

/*#include<stdio.h>
int main()
{
  int n, i, sum_odd=0, sum_even=0;

  printf("Enter the last term: ");
  scanf("%d", &n);
  printf("1-2+3-4+5-6+..........-%d\n", n);
  printf("= (1+2+3+.....+%d)-(2+4+6+......+%d)")

  //Stopped for now. There are some confusion on this series.
  //later i will fix this.
}*/

// 0 1 1 2 3 5 8 .............(fibonacci series)
/*
#include<stdio.h>
int main()
{
  int d1, d2, fibo, N, i;
  printf("Enter the number of terms: ");
  scanf("%d", &N);
  d1 = 0;

  d2 = 1;
  fibo =  d1 + d2;
  printf("Fibonacce series = %d, %d, ", d1, d2);

  for (i = 3; i<=N; i++)
  {
    printf("%d, ", fibo);
    d1 = d2;
    d2 = fibo;
    fibo = d1 + d2;
  }


}
*/
/*#include<stdio.h>
int main()

{
  int first = 0, second = 1, count = 0, fibo, n;
  printf("Enter Range: ");
  scanf("%d", &n);

  while (count<n)
  {
    if (count<=1)
    {
      fibo = count;
    }
    else
    {
      fibo = first + second;
      first = second;
      second = fibo;
    }
    printf("%d ", fibo);
    count+++
    }
    }


    */

   //The position of fibonacci number--->
/*#include<stdio.h>
int main()

{
  int first, second, fibo, f_n, i, count=0;
  printf("Enter the fibonacci number: ");
  scanf("%d", &f_n);
switch (f_n)
{
  case 0:

  {
    printf("Wrong input.");
    break;
  }

  case 1:
  {
    printf("Wrong input.");
    break;
  }

  default :

  {
  first = 0;
  second = 1;
  printf("The first position and second position of\nfibonacci number always 0 and 1.\n");
   for(i=3; i>1; i++)
   {
    fibo = first + second;
    first = second;
    second = fibo;
    if(fibo == f_n)
      break;
    
   }
   printf("And %d fubonacci number position is: %d'th", f_n, i);
  } 
 }
}*/



/*Print the odd number up to n'th terms*/

#include<stdio.h>

int main()

{

    int n;
    printf("Enter the terms: ");
    scanf("%d", &n);
    for(int i = 1; i<=(2*n - 1); i = i+2)
    {
        printf("%d ", i);
    }
    return 0;
}

// for odd number series-->
// 1 3 5 7 9.....
// nth term is An = first term + (term - 1) * common difference
//                = 1 + (n - 1) * 2
//                = 1 + 2n - 2
//                = 2n - 1


//for odd number series-->
// 2 4 6 8 10 .....
// nth term is An = first term + (term - 1) * common difference
//                = 2 + (n - 1) * 2
//                = 2 + 2n - 2
//                = 2n
