//Testing positive or nrgative---->
/*#include<stdio.h>
int main()
{
  int num;
  printf("Enter integer number: ");
  scanf("%d", &num);

  if(num>0)
  {
    printf("This is a positive number!\n");
  }
  else if(num<0)
  {
    printf("This is a negative number!\n");
  }

  else
  {
    printf("This is a newtrall number!\n");
  }
  return 0;
}
*/
//P-#-----> Some of digits

/*
#include<stdio.h>
int main()
{
  int num, temp, rem, sum= 0;
  printf("Enter some digit for sum: ");
  scanf("%d", &num);
  temp =  num;
  while (temp != 0)   // '!=' means, "Untill the things happen"
  {
     rem = temp % 10;
     sum =  sum + rem;
     temp = temp / 10;
  }

  printf("The sum is: %d", sum);

  return 0;
  
}
*/
//Palindrome number--->
/*
#include<stdio.h>
int main()
{
  int num, temp, rem, sumr=0;

  printf("Enter a number: ");
  scanf("%d", &num);

  temp = num;

  while (temp != 0)
  {
    rem = temp % 10;
    sumr = (sumr*10) + rem;
    temp = temp / 10;
  }

   printf("The reverse number is: %d.\n", sumr);
  if (sumr == num)
  {
    printf("And %d  is  a Palindrome number!!!. \n", sumr);
  }
  else
  {
    printf("And %d  is not  a Palindrome number!!!. \n", sumr);
  }
  
  return 0;
}
*/

//Counting number of a digit in an integer--->






// Strong numbeer=---?
#include<stdio.h>
int main()
{
  int num, temp, rem, sum = 0, i;

  printf("Enter a number: ");
  scanf("%d", &num);

  temp = num;

  // Making parts of number from here & summing them(special here is jsut factorial)

  while (temp != 0)
  {
    rem = temp % 10;

    int fact = 1;
    for(i = 1; i <= rem; i++)
    {
      fact = fact * i;
    }
    sum = sum + fact;
    temp = temp / 10;
  }

  printf("Sum of factorial: %d\n", sum);

  if(sum == num)
  {
    printf(" %d is a strong number.", num);
  }
  else
  {
     printf(" %d is not a strong number.", num);
  }

  return 0;

  
}