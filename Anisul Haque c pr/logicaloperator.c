//Vowel and consonant==>
/*
#include<stdio.h>
int main()
{
  char ltr;
  printf("Enter any letter: ");
  scanf("%c", &ltr);

  if(ltr == 'a' || ltr == 'e' || ltr == 'i' || ltr == 'o' || ltr == 'u' || ltr == 'A' ||
      ltr == 'E' || ltr == 'I' || ltr == 'O' || ltr == 'U')
      {
        printf("This is a VOWEL!\n");
      }

      else{
        printf("This is a CONSONANT!\n");
      }
      return 0;
}
*/

#include<stdio.h>
int main()
{
  int year;
  printf("Enter any year: ");
  scanf("%d", &year);

  if(year % 400 == 0)
  {
    printf("This is leap year!\n");
  }
  else if (year % 4 == 0 && year % 100 != 0)
  {
    printf("This is leap year!\n");
  }
  else
  {
    printf("This is not leap year!");
  }
   return 0;
}