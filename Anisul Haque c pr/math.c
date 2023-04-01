/*

/*Arithmetic operations */
/*#include<stdio.h>

int main()

{

   int k = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;
  
   printf("%d", k);
    return 0;
}*/

 /*
   k = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;   (*)
   k = 6 / 4 + 4 / 4 + 8 - 2 + 5 / 8;       (/)
   k = 1 + 1 + 8 - 2 + 0;                   (+)
   k = 10 - 2;                              (-)
   k = 8;                                   (=)
    
   
   
   */

  #include<stdio.h>

int main()

{

   int k = 3 / 2 * 4 + 3 / 8;
  
   printf("%d", k);
    return 0;
}
/*
k = 3 / 2 * 4 + 3 / 8;    (/)
k = 1 * 4 + 0;            (*)
k = 4 + 0;                (+) (=)


*/




*/



//centigrade to farenheiht[wrong spelling lol]

/*
#include<stdio.h>
int main()
{
  float c, f;
   
   printf("Enter celcius temparature: ");
   scanf("%f", &c);
   f = (1.8 * c) + 32;
   printf("Tempareture in farenheigt is: %.2f", f);

   return 0;
}
*/
/*
//Quadratic equation 

//formulla  x1 = -b+sqrt(b*b-4*a*c)/(2*a)
//          x2 = -b-sqrt(b*b-4*a*c)/(2*a)

#include<stdio.h>
#include<math.h>
int main()
{
  double a, b, c, d, x1, x2;

  printf("Enter a b c: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  d = sqrt(b*b-4*a*c);

  x1 = (-b+d)/(2*a);
  x2 = (-b-d)/(2*a);

  printf("x1 = %lf \n x2 = %lf", x1, x2);

  return 0;
}
*/

/*

//abs value
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
  int number;
  printf("Enter any number: ");
  scanf("%d", &number);

  int filter = abs(number);

  printf("The result is: %d", filter);
}
*/
/*
//Finding squre root value:--->
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
  double number;
  printf("Enter any number: ");
  scanf("%lf", &number);

  double result = sqrt(number);

  printf("The result is: %.2lf", result);

  return 0;
}
*/

//Power x^y type---->
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
   int x, y;

   printf("The base value: ");
   scanf("%d", &x);
   printf("The power value: ");
   scanf("%d", &y);

   int result = pow(x, y);

   printf("The result of %d^%d is: %d",x, y, result);

   return 0;
}

*/
// some others function--->
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
   double x = 5.98;

   double r = round(x);   //Round fig

   printf("%lf", r);

}
*/

/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
  double x;
  printf("Enter any value: ");
  scanf("%lf", &x);

  double y = trunc(x);   //This function removes the floating point!!1

  printf("The final result is: %lf", y);

  return 0;
}

*/

/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
  double x;
  printf("Enter any value: ");
  scanf("%lf", &x);

  double y = floor(x);   //Tis function gives upper integer number.

  printf("The final result is: %lf", y);

  return 0;
}

*/

/*
#include<stdio.h>
int main()
{
  int w;
  printf("Enter watermelon weight: ");
  scanf("%d", &w);
  if(w % 2 == 0 && w>2)
  {
    printf("Yes\n");

  }

  else
  {
    printf("No\n");
  }
  return 0;
}

*/

#include<stdio.h>
int main()
{
  int num1, num2, n1, n2, rem, gcd, lcm;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  n1 = num1;
  n2 = num2;

  while (n2  != 0)
  {
    rem = n1 % n2;
    n1 = n2;
    n2 = rem;
  }


  gcd = n1;
  lcm = (num1 * num2)/gcd;

  printf("GCD: %d\n", gcd);
  printf("LCM: %d\n", lcm);

  return 0;
  
}
//X^Y
#include<stdio.h>
int main()
{
  int base, exp, i;
  printf("Enter base and exponetial: ");
  scanf("%d %d", &base, &exp);

  int result = 1;

  for(i=1; i<=exp; i++)
  {
    result = result * base;
  }

  printf("The result is: %d", result);
}