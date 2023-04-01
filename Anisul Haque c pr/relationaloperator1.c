/*
> ----> greatter then.
>= ---> greater or equal then.
< ----> less than.
<= ---> less tha or equal than.
== ---> equal to.
!= ---> Not equal to.


*/
/*
#include<stdio.h>
int main()
{
  int number;
  printf("Enter any integer number: ");
  scanf("%d", &number);
   if (number % 2 == 0)
   {
    printf("This number is EVEN!\n");
   }
   else
   {
    printf("This number is ODD!\n");
   }
   
   return 0;
}
*/

/*
#include<stdio.h>
int main()
{
  int num1, num2;
  printf("Enter first number: ");
  scanf("%d", &num1);
   printf("Enter second number: ");
  scanf("%d", &num2);

  if(num1>num2)
  {
    printf("The largest number is: %d\n", num1);
  }
  else if (num2>num1)
  {
     printf("The largest number is: %d\n", num2);
  }
    
  else
  {
    printf("The numbers are equal!\n");
  }
  return 0;
}
*/
//Letter GRade--->
#include<stdio.h>

int main()
{
   float marks;
   printf("Enter Your marks: ");
   scanf("%f", &marks);

   if(marks>=80)
   {
    printf("A+\n");
   }
   else if (marks>=70)
   {
    printf("A\n");
   }
   else if(marks>=60)
   {
    printf("A-\n");
   }
   else if(marks>=50)
   {
    printf("B+\n");
   }
   else if (marks>=33)
   {
      printf("D\n");
   }
   else {
    printf("Fail\n");
   }
   return 0;
}
