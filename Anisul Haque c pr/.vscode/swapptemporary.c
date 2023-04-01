/*
#include<stdio.h>
int main()
{
  int num1 = 10, num2  = 20;
  int temp;

  printf("Before swapping: x = %d  y = %d\n", num1, num2);

  //swapping---->(With temporary variables)


  temp = num1;
  num1 = num2;
  num2 = temp;


  printf("After swapping: x = %d  y = %d", num1, num2);

  return 0;
}

*/

/*
#include<stdio.h>
int main()
{
  int num1 = 2;
  int num2 = 3;

  printf("Before swapping: num1 = %d  num2 = %d\n", num1, num2);

  //Swapping---->{without temporary variable}
  num1 = num1 - num2; // 2 - 3 = -1
  num2 = num1 + num2; //-1 + 3 =  2
  num1 = num2 - num1; // 2 -(-1)= 3

  printf("After swapping: num1 = %d  num2 = %d", num1, num2);

  return 0;
}
*/