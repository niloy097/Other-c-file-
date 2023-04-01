/*
#include<stdio.h>
int main()
{
  char lower;
  printf("Enter any lowercase letter: ");
  scanf("%c", &lower);
  printf("The uppercase letter : %c", lower - 32);  //32 different between a and A.... so on

}
*/

/*
#include<stdio.h>
int main()
{
  char Upper;
  printf("Enter any uppercase letter: ");
  scanf("%c", &Upper);
  printf("The lowercase letter : %c", Upper + 32);
}
*/

//Upercase to lower and lower to upper using library function:


#include<stdio.h>
int main()
{
  char lower, upper;
  printf("Enter any lower case letter: ");
  scanf("%c", &lower);

  upper = toupper(lower);

  printf("The upper case letter: %c", upper);

}