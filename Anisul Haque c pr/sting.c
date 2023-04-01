/* #include<stdio.h>
int main()
{
  char s1[6];   //string length should be add more before it was
  s1[0] = 'N';  //Otherwise it will give a garbage value
  s1[1] = 'i';
  s1[2] = 'l';
  s1[3] = 'o';
  s1[4] = 'y';
  printf("S1 = %s\n", s1);
  
 // Every string has one null character
  '\0' = null character
}
*/
//String declaration in 2nd baracket with single character-->
/*#include<stdio.h>
int main()
{
  char str[6] = {'N', 'i', 'l', 'o', 'y', '\0'};
  printf("Str = %s", str);
}
*/

//String declaration in general way-->
/*#include<stdio.h>
int main()
{
  char str[] = "Niloy";  //without mentioning the array size
  printf("%s", str);
}*/

//Inputting ans displaying a string-->
//code with an error---?
/*#include<stdio.h>
int main()
{
  char s1[30];
  printf("Enter your name: ");
  scanf("%s", &s1);
  printf("Your full name is: %s", s1);
  return 0;

}

//Code without any error----!>

#include<stdio.h>
int main()
{
  char s1[30];
  printf("Enter your name: ");
  gets(s1);
  printf("Your full name is: %s", s1);
  return 0;

}
*/
//Displaying a string with chracter wise--->
/*#include<stdio.h>
int main()
{
  char s1[] = "Niloy";
  int i = 0;
  while(s1[i] != '\0')
  {
    printf("%c\n", s1[i]);
    i++;
  }
  return 0;
}*/
//Finding string length without library function--->
/*#include<stdio.h>
#include<string.h>
int main()
{
  char s1[1000];
  printf("Enter your full name: ");
  gets(s1);
  int i = 0, len = 0;
  while(s1[i] != '\0')
  {
    i++;
    len++;
  }
  printf("String length: %d", i);
}*/
//Copying a string and putting it in to another string-->
//with library function!
/*#include<stdio.h>
#include<string.h>
int main()
{
  char source[] = "Naeem Biswass Niloy";
  char target[20];
  strcpy(target, source);
  printf("Source string: %s\n", source);
  printf("Target string: %s\n", target);

}
*/

//String concatination--->
//actually adding a string with another string--->
/*#include<stdio.h>
#include<string.h>
int main()
{
  char str[] = "My name is ";
  char str1[] = "Naeem Biswass Niloy";
  printf("String before add(str): %s", str);
  printf("\n");
  printf("String before add(str1): %s\n", str1);
  strcat(str, str1);
  printf("Full String after adding: %s", str);
  
}*/
//String concatination without libray function--->
/*#include<stdio.h>

int main()
{
  char str1[50] = "My name is ";
  char str2[] = "Niloy";

  int i=0, len = 0, j=0;
  while(str1[i] != '\0')
  {
    i++;
    len++;
  }

  while(str2[j] != '\0')
  {
    str1[len+j] = str2[j];
    j++;
  }

  printf("%s", str1);

}

/*#include<stdio.h>
#include<string.h>
int main()
{
  char str[1000], str1[1000];
  printf("Enter your first name: ");
  gets(str);
  printf("Enter your last name: ");
  gets(str1);

  int i=0, len=0, j=0;
  while(str[i] != '\0')
  {
    i++;
    len++;
  }

  while (str1[j] != '\0')
  {
    str[len+j] = str1[j];
    j++;
  }
  printf("Your full name is: ");
  for(int k=0; k<strlen(str); k++)
  {
     printf("%c", str[k]);
  }
}*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
  int str1[1000], str2[1000];
  printf("Enter Your first name: ");
  gets(str1);
  printf("Enter your last name: ");
  gets(str2);

  strcat(str1, str2);
  printf("Your full name is: %s", str1);
}
*/

//String compare------>
//With library function-->
/*
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[] = "Naeem Biswass";
  char str2[] = "Biswass";

  int d = strcmp(str1, str2);
  
  //String compare function (strcmp) returns 0 if the 
  strings are equal and reuturns 1 if the strings are not
  equal
  

 if(d == 0)
 {
  printf("Strings are equal");
 }
 else
 {
  printf("Strings are not equal");
 }

}*/



/*
//String compare without library function-->
#include<stdio.h>
int main()
{
  char str1[] = "Naeem Biswass Niloy";
  char str2[] = "Jadob Chandra Sarkar";

  int i;
  int j;
  int len1 = 0;
  int len2 = 0;
  
  i = 0;
  while(str1[i] != '\0')
  {
    i++;
    len1++;
  }

  j=0;
  while(j[str2] != '\0')
  {
    j++;
    len2++;
  }

  if(len1 == len2)
  {
    printf("Srings are equal!\n");
  }
  else
  {
    printf("Srings are not equal!\n");
  }

  printf("The length of string 1 is: %d\n", len1);
  printf("The length of string 2 is: %d\n", len2);
}
*/


/*
//String reverse--->
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[100], str2[100];
  printf("Enter text here: ");
  gets(str1);

  int i=0, len=0, j;
  while(str1[i] != '\0') 
  {
    i++;
    len++;
  }

  for(j=0, i=len-1; i>=0; i--, j++)
  {
    str2[j] = str1[i];
  }
  str2[j] = '\0';

  printf("Before revese string: %s\n", str1);
  printf("After revese string: %s", str2);
}
*/

//Checking a string is palindrome or not--->

/*
#include<stdio.h>
#include<string.h>
int main()
{
   char str1[30];
   char str2[30];

   printf("Enter here the string in size 30: ");
   gets(str1);

   int i=0, j, len=0;
   while(str1[i] != '\0')
   {
      i++;
      len++;
   }
   for(j=0, i=len-1; i>=0; i--, j++)
   {
      str2[j] = str1[i];
   }
   str2[j] = '\0';

   printf("Str1 = %s\n", str1);
   printf("Str2 = %s\n", str2);

   int d = strcmp(str1, str2);
   if(d == 0)
   {
      printf("Strings are Palindrome\n");
   }
   else{
      printf("Strings are not Palindrome\n");
   }
}
*/

//String swapping--->
/*
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[30], str2[30], temp[30];
  printf("Enter string-1: ");
  gets(str1);
  printf("Enter string-2: ");
  gets(str2);

  printf("Before swapping-----> \n");
  printf("String-1: %s\n", str1);
  printf("String-2: %s\n", str2);

  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);

  printf("After swapping----->\n");
  printf("String-1: %s\n", str1);
  printf("String-2: %s\n", str2);
}
*/

//string uppercase and lower case function-->
/*#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
  char str[30] = "NAEEM BISWASS NILOY";
  strlwr(str);
  printf("str-> %s\n", str);

  char str1[30] = "Frank Anaya";
  strupr(str1);
  printf("str1--> %s", str1);
}
*/

//Checking number of vowel, consonant, word, digits, and others character in a string--->

#include<stdio.h>
#include<string.h>
int main()
{
  char str[1000];

  int i, vowel=0, consonant=0, word=0, digits=0, others=0;
  printf("Enter a string here: ");
  gets(str);

  i=0;
  while(str[i] != '\0')
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
         str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')

         {
          vowel++;
         }
    else if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
    {
      consonant++;
    }
    else if (str[i]>= '0' && str[i]<= '9')
    {
      digits++;
    }
    else if(str[i] == ' ')
    {
      word++;
    }
    else
    {
      others++;
    }
    i++;
  }
  word++;

  printf("Vowel: %d\n", vowel);
  printf("Consonat: %d\n", consonant);
  printf("Digits: %d\n", digits);
  printf("Words: %d\n", word);
  printf("Oher character: %d\n", others);
}

//Simplest way to print a string--->
#include<stdio.h>
#include<string.h>


int main()

{

    char *str = "Niloy Khan Rony";
    printf("%s", str);


    return 0;
}


#include<stdio.h>

int main()

{

    char *str = "Ganja Bhai";
    str = "Tui ekta ganja";  //Re-initialization
    printf("%s", str);

    return 0;
}

//String and Character Encryption----->>>

/*#include<stdio.h>

int main()

{

    char ch = 'A';
    ch = ch + 1;
    printf("%c", ch);

    return 0;
}*/

//Write a function which encrypt a string by one character upper--->
/*#include<stdio.h>


void encryptStr(char *ptr)


{

    char *p = ptr;
    
    while(*p != '\0')
    {
        *p= *p+1;
        p++;
    }

    
}

int main()

{
   
    char str[] = "Niloy Khan";
    encryptStr(str);
    printf("The encrypted string is: %s", str);

    return 0;
}*/
