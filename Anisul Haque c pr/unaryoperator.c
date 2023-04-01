/*
#include<stdio.h>
int main()
{
  int number;
  printf("Enter integer number: ");
  scanf("%d", &number);

  int result = -number;  //This will show the opposite value-->

  printf("The final result is: %d", result);
}

*/

/*
#include<stdio.h>
int main()
{
  int number;
  printf("Enter integer number: ");
  scanf("%d", &number);

  int result = +number;  //This will show the opposite value-->

  printf("The final result is: %d", result);
}
*/

//Increment and Decrement Operator---->
/*

++x;       //increments x by one ---> BEFORE it is used
x++;       //increments x by one ---> AFTER it is used

++x;       //decrements x by one ---> BEFORE it is used
x++;       //decrements x by one ---> AFTER it is used



*/
/*
#include<stdio.h>
int main()
{
  int x = 20;

  int y = x++; //Here y == 20;
  printf("x = %d\n", x);  //Now here x = 21 for post
                            //increment
  printf("y = %d\n", y);

  return 0;
}
*/
/*
#include<stdio.h>
int main()
{
  //pr-increment

  int x = 20;

  int y = ++x;  // Here y = 21

  printf("%d\n", x); //x = 21
  printf("%d\n", y); // y = 21

}
*/
/*
#include<stdio.h>
int main()
{
  int x = 10;
 //Post-increment;
  int y = x--; // y = 10

  printf("%d\n", x); // Here, x = 9
  printf("%d\n", y); // y = 10;
}
*/
/*
#include<stdio.h>
int main()
{
  int x = 10;
 //Pre-increment
  int y = --x; // y = 9

  printf("%d\n", x); // x = 9
  printf("%d\n", y); // y = 9
}
*/
//ALL IN ONE ------>
#include<stdio.h>
int main()
{
  int x = 10;
  printf("%d\n", x++);  //x = 10
  printf("%d\n", x);   /* x++ or x-- thekle x er result first 
  a barbe or kombe nah!. Kintu porobortite jodi kono same x pay 
  tahole x er mann 1 barbe or kombe!. So, here x = 11*/
  printf("%d\n", ++x); // x = 12
  printf("%d\n", x); // x = 12
  printf("%d\n", x--); // x = 12
  printf("%d\n", --x); // x = 10(ek bar x pelo and tarpor abr pre drecrement. so, x = 10)
}