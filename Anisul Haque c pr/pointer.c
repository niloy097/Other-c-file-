/*#include<stdio.h>
int main()
{
  int x;
  x = 5;
  int *ptr;
  ptr = &x;

  printf("The value of x: %d\n", x);  //rslt = 5
  printf("The address of x: %d\n", &x); //in decimal number// rslt = something in decimal
  printf("The address of x using pointer: %d\n", ptr); //in decimal number rslt = something in decimal
  printf("The value of x using pointer: %d\n", *ptr); // rslt = 5
  printf("The address of pointer: %d\n", &ptr); //rslt = something in decimal
}*/

//Pointer pointing to different variabel----->
/*#include<stdio.h>
int main()
{
  int x = 10, y = 30, z = 78;

  int *ptr;

  ptr = &x;
  printf("The value of x using pointer: %d\n", *ptr);

  ptr = &y;
  printf("The value of y using pointer: %d\n", *ptr);

  ptr = &z;
  printf("The value of z using pointer: %d\n", *ptr);

  return 0;
}
*/

/*
//Adding two value with pointer--->
#include<stdio.h>
int main()
{
  int x = 20;
  int y = 40;

  int *ptr1, *ptr2;

  ptr1 = &x;
  ptr2 = &y;

  int sum = *ptr1 + *ptr2;

  printf("The sum is: %d\n", sum);
}

*/

/*
//Swapping two number with 2 numbers--->
#include<stdio.h>
int main()
{
  int x = 10;
  int y = 30;
  int temp;

  int *ptr1, *ptr2;

  ptr1 = &x;
  ptr2 = &y;

  //Before swapping--->
  printf("Before Swapping: \n\n");
  printf("X: %d\n", *ptr1);
  printf("Y: %d\n", *ptr2);
  
  //Swapping
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
 //After swapping---->
  printf("\n\nAfter Swapping: \n\n");
  printf("X: %d\n", *ptr1);
  printf("Y: %d\n", *ptr2);

}
*/


/*
//Using pointer and function for swapping two numbers-->

#include<stdio.h>
void swapp(int *ptr1, int *ptr2)
{
   
   int temp;

   temp = *ptr1;
   *ptr1 = *ptr2;
   *ptr2 = temp;

   

}

int main()
{
  int x = 10, y = 50;
  printf("Befor swapping: X = %d,   Y = %d\n", x, y);
  swapp(&x, &y);

  printf("The swapped numbers are: X = %d,  Y = %d\n", x, y);
}
*/


#include<stdio.h>


void summation(int a, int b, int *add) //making a value with out returning in fucntion
{
    *add = a + b;
}

int main()

{



    int x, y;
    x = 9;
    y = 7;
    int sum;
    summation(x, y, &sum);

    printf("The sum is: %d", sum);

   /* int i = 8, j = 7;
    int sum;
    float avg;
    sumAvg()

    return 0;*/
}



//pointer to pointer--->
#include<stdio.h>

int main()

{

  
  
  
   int a =9;
   int *ptr;
    int **ptr_ptr;
    ptr = &a;
    ptr_ptr = &ptr;
    printf("The value of a is: %d\n", a);
    printf("The value of a is: %d\n", *ptr);
    printf("The value of a is: %d\n", **ptr_ptr);
    return 0;
    
}




#include<stdio.h>

void Update(int *x, int *y)
{
   *x = 7;
    *y = 8;
}

int main()

{

    int a = 5, b = 6;
    Update(&a, &b);  //Calling by reference not valuea
    printf("The value after update: a =  %d and b = %d", a, b);

    return 0;
}



#include<stdio.h>

int main()

{

    int i = 8;
    int *ptr = &i;
    printf("The addres: %d\n", ptr);
    ptr = ptr + 2;
    printf("The addres: %d\n", ptr);

    //address of meory

    return 0;
}