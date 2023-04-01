/*
//P-4(Ponter Array Relation)
#include<stdio.h>
int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  int i;
  for(i=0; i<5; i++)
  {
    printf("%u\n", &a[i]); //the memory address of array value.
  }                                 //Placeholder is %u or %x etc.
  printf("Address of a: %u", a); //a = array first block address
}
*/
//P-5(Pointer Array Relation);
/*

#include<stdio.h>
int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  int i, sum = 0;
  for(i=0; i<5; i++)
  {
    printf("%d ", *(a+i));  //The mechanism
   sum = sum + *(a+i);      //Sum proccess.
  }
  printf("SUM: %d\n", sum);
}
*/
/*
#include<Stdio.h>
int main()
{
  int a[5] = {1,2,3,4,5};
  int *ptr = &a[3];
  printf("%d\n", *ptr);
  printf("%d", *(ptr+1));
}
*/
//P-8(Value swapping with pointer and fucntions)
/*
#include<stdio.h>
void swap(int *n1, int *n2)
{
   
}
int main{
  int num1 = 5, num2 = 10;
  printf("num1 = %d ; num2 = %d\n", num1, num2);

  swap(&num1, &num2);
  printf("num1 = %d ; num2 = %d\n", num1, num2);
}
*/

//Pointer practice:
//Working with value address in memory:
/*
ex: 
Variable name        : x       y
Value                : 5      10
Variable address(let):100     104
*/

//Finding address of variable: 
/*
#include<stdio.h>
int main()
{
  int x, y, i;
  x  = 10;
  y = 30;
  i = 12;
  printf("The adrress is: %d\n", &x);
   printf("The adrress is: %d\n", &y);
    printf("The adrress is: %d\n", &i);

}
*/
/*
Definiton of pointers: "Pointer is a variable that stores/points the
address of another variable"
*/

/*
Declaration of pointer
-----------------------------
data_type *var_name;

Example: int *p;
char *p;

---> 2 symbol
-------------------
'&' symbol is used to get the address of the variable.

'*' symbol is used tp get the value of the variable the the
pointers is pointing to.

*/

/*
#include<stdio.h>
int main()
{
  int x = 5;
  printf("Value of x = %d\n", x);  //Value
  printf("Address of x = %d\n", &x); //adddress
}
*/
/*
#include<stdio.h>
int main()
{
  int x = 5;
  int *ptr;
  ptr = &x;

  printf("%d\n", x);   //Value
  printf("%d\n",&x);  //address
  printf("%d\n", ptr); //address
  printf("%d\n", *ptr); // value
}
*/
// Multiple ponters.
/*
#include<stdio.h>
int main()
{
  int x, y, z;
  x = 10, y= 20, z= 50;
  int *ptr;

  ptr = &x;
  printf("x = %d\n", *ptr);
  ptr = &y;
  printf("Y  = %d\n", *ptr);
  ptr = &z;
  printf("Z = %d\n", *ptr);

  return 0;
}
*/

//Adding Two values using pointer--->
/*
#include<stdio.h>
int main()
{
   int x = 10, y = 20, sum;
   int *ptr1, *ptr2;
   ptr1  = &x;
   ptr2 = &y;

    sum = *ptr1 + *ptr2;
    printf("The sum is: %d", sum);
    return 0;

}
*/
//Swapping two numbers:

/*
#include<stdio.h>
int main()

{
  int x = 23, y= 12, temp;

  int *ptr1, *ptr2;

  ptr1 = &x;
  ptr2 = &y;

  //swapping

  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;

  printf("X  = %d\n", x);
  printf("Y = %d", y);

}

*/

//Swapping 2 numbers using function and pointers

/*
#include<stdio.h>
void  swaping(int *ptr1, int *ptr2)
{
  int temp;

  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}
int main()
{
  int x = 110, y = 23;
  printf("Before swapping: x = %d, y=%d\n", x, y);
  swaping(&x,&y);

  printf("After swapping: x = %d, y=%d\n", x, y);
  

}

*/