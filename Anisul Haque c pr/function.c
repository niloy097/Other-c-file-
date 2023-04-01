//Function declaring structure--->

/*Return_type Function_name(arguments)*/
//Adding two numbers with function---->
/*
#include<stdio.h>
int summation(int x, int y)
{
 int sum = x + y;
  return sum;
}

int main()
{
  int n1, n2;
  printf("Enter two numbers: ");
  scanf("%d %d", &n1, &n2);

  int add = summation(n1, n2);
  printf("The summation is: %d", add);
}

//Adding squring--->
#include<stdio.h>
void func1 ()
{
   int x, y;
   printf("Enter two integer value: ");
   scanf("%d %d", &x, &y);

   int sum = x + y;

   printf("The sum is: %d", sum);
}

int main()
{
   int num1, squre;
   printf("Enter a value: ");
   scanf("%d", &num1);

   squre = num1 * num1;

   printf("The squre is: %d\n", squre);

   func1();
}

*/
// Summ and substract together---->
/*#include<stdio.h>
int summation(int x, int y)
{
   int sum = x + y;
   return sum;
}

int substraction (int x, int y)
{
   int minus = x - y;
   return minus;
}

int main()
{
   int p, q;
   printf("Enter two value: ");
   scanf("%d %d", &p, &q);
   int s = summation(p, q);

   int l, m;
   printf("Enter two value: ");
   scanf("%d %d", &l, &m);
   int o = substraction(l, m);

   int final_result;

   final_result = s + o;

   printf("The final result is: %d", final_result);
}*/

//Finding area of a triangle bye function--->
/*#include<stdio.h>
double area(double x, double y)
{
  return 0.5 * x * y;
}


int main()
{
  double base, height;
  printf("Enter two number: ");
  scanf("%lf %lf", &base, &height);

  double area_1 = area(base, height);

  printf("The are is: %.2lf", area_1);
}
*/

//x^y
/*
 #include<stdio.h>
int power(int b, int e)
{
   int rslt = 1;
   int i;
   for(i=1; i<=e; i++)
   {
    rslt = rslt * b;
   }

   return rslt;
}

int main()
{
  int base, exponetial;
  printf("Enter base and power(x^y): ");
  scanf("%d %d", &base, &exponetial);

  int x_to_the_power_y = power(base, exponetial);

  printf("The result is: %d", x_to_the_power_y);
}
*/


/*

#include<stdio.h>


int add(int *x, int *y)
{
    return *x + *y;
}

int main()

{

    int a, b;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    printf("The sum is: %d ", add(&a, &b));  //Function calling by reference

    

    return 0;
}



*/