//Most important keyword for switch statement--->(its a parts of conditional controll statement)

/*

1. switch
2. case
3. break
4. default

*/

/*
#include<stdio.h>
int main()
{
  int digit;
  printf("Enter a digit: ");
  scanf("%d", &digit);

  switch (digit)
  {
    case 0:
         printf("Zero\n");
         break;

         case 1:
         printf("One\n");
         break;

         case 2:
         printf("Two\n");
         break;

         case 3:
         printf("Three\n");
         break;

         case 4:
         printf("Four\n");
         break;

         case 5:
         printf("Five\n");
         break;

         case 6:
         printf("Six\n");
         break;

         case 7:
         printf("Seven\n");
         break;

         case 8:
         printf("Eight\n");
         break;

         case 9:
         printf("Nine\n");
         break;

         default:
              printf("Not a valid digit.\n");
        
         
         
  
  }

}
*/
//practice--->
/*
#include<stdio.h>
int main()
{
  int digit;
  printf("Enter any digit.\n");
  scanf("%d", &digit);

  switch (digit)
  {
    case 0:
    printf("Zero\n");
    break;

    case 1 :
    printf("One\n");
    break;

    case 2:
    printf("Two\n");
    break;

    case 3:
    printf("Three\n");
    break;

    case 4:
    printf("Four\n");
    break;

    default :
    printf("Error!\n");

  }
}
*/
//Vowel consonant using switch--->
/*
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter any latter: ");
  scanf("%c", &ch);

  switch (ch)
  {
  case 'a':
    printf("Vowel\n");
    break;

    case 'e':
    printf("Vowel\n");
    break;

    case 'i':
    printf("Vowel\n");
    break;

    case 'o':
    printf("Vowel\n");
    break;

    case 'u':
    printf("Vowel\n");
    break;
  
  default:
    printf("Consonant");
    
  }
}
*/
/*
#include<stdio.h>
int main()
{
  int choice;
  float temp, conv_temp;
  printf("Temperature conversion menu\n");
  printf("1. Fahrenheit to Celsius\n");
  printf("2. Celsius to Fahrenheit\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);


  switch (choice)
  {
  case 1:

  {
    printf("Enter the Fahrenheit temperature: ");
    scanf("%f", &temp);

    conv_temp = (temp - 32)/1.8;

    printf("The temperature in celsius is: %.2f\n", conv_temp);

    break;
  }

  case 2 :
  {
    printf("Enter the Celsius temperature: ");
    scanf("%f", &temp);

    conv_temp = (1.8+temp)+32;

    printf("The temperature in Fahrenheit is: %.2f\n", conv_temp);
   break;
  }
  default :
  {
    printf("Not a correct choice!");
  }
    
    
  }
  return 0;
}
*/


//Practice--->

#include<stdio.h>
int main()
{
  int choice;
  float temp, conv_temp;
  printf("Temperature Conversion Menue: \n\n");
  printf("1. Celsius to Fahrenheit.\n");
  printf("2. Celsius to Kelvin.\n");
  printf("3. Kelvin to Celsius.\n");
  printf("4. Fahrenheit to Celsius.\n\n\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice)
  {
      case 1:
      { //C--->F
        printf("Enter Temperature in Celsius: ");
        scanf("%f", &temp); //temp = Celcius

        conv_temp =  (1.8*temp)+32; //conv_temp = Fahrenheit
        
          printf("Temperature in Fahrenheit is: %.2f", conv_temp);
          break;      

      }

      case 2:
      {
        //C--->K

        printf("Enter Temperature in Celsius: ");
        scanf("%f", &temp); //temp = Celcius

        conv_temp =  temp+273; //conv_temp = Kelvin
        
          printf("Temperature in Kelvin is: %.2f", conv_temp);
          break;    
      }

      case 3:
      {
        //K--->C

        printf("Enter Temperature in Kelvin: ");
        scanf("%f", &temp); //temp = Kelvin

        conv_temp =  temp-273; //conv_temp = Celsius
        
          printf("Temperature in Celsius is: %.2f", conv_temp);
          break;    
      }

      case 4:

      {
        //F--->C 

        printf("Enter Temperature in Fahrenheit: ");
        scanf("%f", &temp); //temp = Fahrenheit

        conv_temp =  (0.57*temp)-32; //conv_temp = Celsius
        
          printf("Temperature in Celsius is: %.2f", conv_temp);
          break;    
      }

      default :
      {
        printf("Wrong choice.!!\n");
      }
  }
  return 0;
}
