/*
#include<stdio.h>

int get_sum (int x, int y)
{
    int sum = x + y;
    return sum;
}
void say_hi()
{
    printf("Hi!\n");
}

int main()  //Main function
{
    printf("Main start!\n");
    say_hi();
    int sum = get_sum(10, 20);
    printf("%d", sum);


return 0;
}
*/
// Problem-1:(calling function)
/*
#include<stdio.h>
void print_massage()
{
    printf("Hello! I'm from inside a function.\n");
}
int main()

{
    print_massage();
    return 0;
}
*/
/*
#include<stdio.h>
void even_odd(int x)
{
    if(x % 2 == 0)
    {
        printf("Even.\n");
    }
    else
    {
        printf("ODD.\n");
    }
}
int main()
{
    even_odd(67);
    return 0;
}
*/
/*
#include<stdio.h>
void print_divisors(int x)
{
    int i;
    for(i=1; i<=x; i++)
    {
        if(x % i == 0)
        {
            printf("%d\n", i);
        }
    }
}
int main()
{
    print_divisors(30);
    return 0;
}

*/
//Problem: Making a simple calculator-
/*
#include<stdio.h>
float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float a, b;
    printf("Enter the value of a and b : \n");
    scanf("%f%f", &a, &b);
    float add_result = add(a, b);
    float subtract_result = subtract(a, b);
    float multiply_result = multiply(a, b);
    float divide_result = divide(a, b);

    printf("ADD: %.2f, Subtract: %.2f, Multiply: %.2f, Divide: %.2f\n", add_result, subtract_result, multiply_result, divide_result);
    return 0;
}
*/


//Function writing system---->
// Return_type function_name (arguments)
#include<stdio.h>
int sum (int a, int b)
{
    return a+b;
}

int main()
{
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("The sum is: %d\n", sum(num1, num2));
}


