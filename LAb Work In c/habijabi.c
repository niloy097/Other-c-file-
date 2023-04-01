/* Write
a C program to check whether a number is negative, positive or zero.
*/

/*#include<stdio.h>

int main()

{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("%d is a positive number\n", num);
    }
    else if(num<0)
    {
        printf("%d is a negative number\n", num);
    }
    else
    {
        printf("This is zero");
    }
    return 0;
}*/

/*2)      Write
a C program to check whether a number is divisible by 5 and 11 or not.
*/

/*#include<stdio.h>

int main()

{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 5 == 0 || num % 11 == 0)
    {
        printf("This num is divisible by 5 or 11\n");
    }
    else
    {
        printf("This number is not divisible by 5 or 11\n");
    }

    return 0;
}*/

/* Write
a C program to count total number of notes (money) in given amount.
*/

/*#include<stdio.h>

int main()

{

    int money; // 350
    int m100, m50, m10, m5, m2, m1;
    printf("Enter amount: ");
    scanf("%d", &money);
    m100 = money / 100;
    money = money%100;
    m50 = money / 50;
    money = money % 50;
    m10 = money / 10;
    money = money % 10;
    m5 = money / 5;
    money = money % 5;
    m2 = money / 2;
    money = money % 2;
    m1 = money / 1;
    money = money % 1;


    printf("The nmber of notes: \n");
    printf("Note 100: %d\n", m100);
    printf("Note 50: %d\n", m50);
    printf("Note 10: %d\n", m10);
    printf("Note 5: %d\n", m5);
    printf("Note 2: %d\n", m2);
    printf("Note 1: %d\n", m1);

    printf("Total notes: ");
    int totaln = m100 + m50 + m10 + m5 + m2 + m1;
    printf("%d", totaln);
    return 0;
}*/

/*4)      Write
a C program to check whether a character is alphabet or not.*/

/*#include<stdio.h>

int main()

{

    char ch;
    printf("Enter any character here: ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("This character is Alphabet\n");
    }
    else
    {
        printf("This character is not Alphabet\n");
    }


    return 0;
}*/


/*Write
a C program to input any character and check whether it is alphabet, digit or
special character.*/

/*#include<stdio.h>

int main()

{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
    {
        printf("%c is Alphabet\n", ch);
    }
    else if(ch>= '0' && ch<= '9')
    {
        printf("%c is digit\n", ch);

    }
    else
    {
        printf("This is a special character");
    }
    

    return 0;
}*/

/*8)      Write
a C program to input week number and print week day.*/

/*#include<stdio.h>

int main()

{
   int week_number;
   printf("Entrer any week number: ");
   scanf("%d", &week_number);
   switch(week_number)
   {
    case 1:
    {
        printf("Saturday\n");
        break;
    }

    case 2:
    {
        printf("Sunday\n");
        break;
    }

    case 3:
    {
        printf("Monday\n");
        break;
    }

    case 4:
    {
        printf("Tuesday\n");
        break;
    }

    case 5:
    {
        printf("Wednesday\n");
        break;
    }

    case 6:
    {
        printf("Thursday\n");
        break;
    }

    case 7:
    {
        printf("Friday\n");
        break;
    }

    default :
    {
        printf("Wrong input\n");
    }

   }
    

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int month;

     Input month number from user 
    printf("Enter month number (1-12): ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("31 days");
    }
    else if(month == 2)
    {
        printf("28 or 29 days");
    }
    else if(month == 3)
    {
        printf("31 days");
    }
    else if(month == 4)
    {
        printf("30 days");
    }
    else if(month == 5)
    {
        printf("31 days");
    }
    else if(month == 6)
    {
        printf("30 days");
    }
    else if(month == 7)
    {
        printf("31 days");
    }
    else if(month == 8)
    {
        printf("31 days");
    }
    else if(month == 9)
    {
        printf("30 days");
    }
    else if(month == 10)
    {
        printf("31 days");
    }
    else if(month == 11)
    {
        printf("30 days");
    }
    else if(month == 12)
    {
        printf("31 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }

    return 0;

}*/

/*Write
a C program to input angles of a triangle and check whether triangle is valid
or not.*/

/*#include<stdio.h>

int main()

{

    int a1, a2, a3;
    printf("Enter angle-1: ");
    scanf("%d", &a1);

    printf("Enter angle-2: ");
    scanf("%d", &a2);

    printf("Enter angle-3: ");
    scanf("%d", &a3);

    if((a1 + a2 + a3) == 180 && a1>0 && a2>0 && a3>0)
    {
        printf("This is a valid triagle\n");

    }
    else
    {
        printf("This is invalid triangle\n");
    }

    return 0;
}*/

/* Write
a C program to input all sides of a triangle and check whether triangle is
valid or not.*/

/*#include<stdio.h>

int main()

{

    int arm1, arm2, arm3;
    printf("Enter arm1: ");
    scanf("%d", &arm1);

    printf("Enter arm2: ");
    scanf("%d", &arm2);

    printf("Enter arm3: ");
    scanf("%d", &arm3);

  if((arm1 + arm2) > arm3 && (arm2 + arm3) > arm1 && (arm3 + arm1) > arm2)
  {
    printf("This is valid triangle\n");
  }
  else
  {
    printf("This is unvalid triangle\n");
  }


    return 0;
}*/

/* Write
a C program to check whether the triangle is equilateral, isosceles or scalene
triangle.*/

/*#include<stdio.h>

int main()

{  
    //You can check the validity of triangle if the solution is required like that

    int a, b, c;
    printf("Enter arm-1: ");
    scanf("%d", &a);

    printf("Enter arm-2: ");
    scanf("%d", &b);

    printf("Enter arm-3: ");
    scanf("%d", &c);

    if(a == b == c)
    {
        printf("This triangle is equilateral\n");
    }
    else if(a == b || b == c || c == a)
    {
        printf("This triangle is isosceles\n");
    }
    else
    {
        printf("This triangle is scalene\n");
        
    }

    return 0;
}*/

/*
 Write
a C program to find all roots of a quadratic equation
*/


/*#include<stdio.h>
#include<math.h>

int main()

{
   float a, b, c, d;
   float x1, x2;
   printf("Enter a, b, c: ");
   scanf("%f %f %f", &a, &b, &c);
   d = (b*b) - (4 * a * c);

   if(d > 0)
   {
    printf("The roots are real!\n");
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);

    printf("The real roots are---->\n");
    printf("x1 = %.2f  x2 = %.2f", x1, x2);
   }
    
    else if(d == 0)
    {
        printf("The roots are equal!\n");
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);

        printf("The equal roots are---->\n");
        printf("x1 = %.2f  x2 = %.2f", x1, x2);

    }
    else
    {
        printf("The roots are imaginary\n");
    }

    return 0;
}*/

/*Write
a C program to calculate profit or loss.*/
/*#include<stdio.h>

int main()

{

    int buy, sell;
    printf("Enter the buying price: ");
    scanf("%d", &buy);
    printf("Enter the selling price: ");
    scanf("%d", &sell);

    if(sell > buy)
    {
        printf("Profit\n");
        int profit = sell -  buy;
        printf("The profit is: %d\n", profit);
    }

    else if(sell < buy)
    {
        printf("Loss!\n");
        int loss = buy - sell;
        printf("The loss is: %d\n", loss);
    }
    else
    {
        printf("No profit!\n");
    }
    return 0;
}*/

/*15 number problem of google classroom sadiya mam*/

/*
#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp; 
    float per; 

    
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);


 
    per = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %.2f\n", per);


    
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
*/



/* Write
a C program to convert days into years, weeks and days.*/

/*#include<stdio.h>

int main()

{

    int input_days; // 390 - 365 - 25/7 = 3
    int years, weeks, days;
    printf("Enter Days: ");
    scanf("%d", &input_days);
     years = input_days / 365;
     weeks = (input_days - (years * 365))/7;
     days = (input_days - ((years * 365) + (weeks * 7)));
     printf("%d days = %d years, %d weeks, %d days", input_days, years, weeks, days);

    return 0;
}*/

/* Write
a C program to find power of any number (x^y).
*/
//Using library fucntion-->
/*#include<stdio.h>
#include<math.h>

int main()

{
   int x, y;
   printf("Enter the base and power: ");
   scanf("%d %d", &x, &y);
   int rst = pow(x, y);
   printf("The rslt is: %d", rst);
    

    return 0;
}*/

//without using library function-->
/*#include<stdio.h>

int main()

{

    int x, y;
    int rst = 1;
    printf("Enter the base and power: ");
    scanf("%d %d", &x, &y);
    for(int i = 1; i<=y; i++)
    {
        rst = rst * x;
    }
    printf("The pow of %d^%d is %d", x, y, rst);


    return 0;
}*/

/* Write
a C program to enter any number and calculate its square root.
*/

/*#include<stdio.h>
#include<math.h>

int main()

{

    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    float sroot = sqrt(num);
    printf("The squre root of %d is %.2f\n", num, sroot);

    return 0;
}*/


/*Write
a C program to enter two angles of a triangle and find the third angle.*/

/*#include<stdio.h>
#include<math.h>

int main()

{

    int a1, a2, a3;
    printf("Enter the two angle: ");
    scanf("%d %d", &a1, &a2);
    a3 = 180 - (a1 + a2);
     printf("The third angle is: %d", a3);

    return 0;
}*/

/* Write
a C program to calculate area of an equilateral triangle.*/

/*#include<stdio.h>
#include<math.h>

int main()

{

    int a;
    printf("Enter the 3 equal arm of equilateral triangle: ");
    scanf("%d", &a);
    float d = sqrt(3)/4;
    float area = d*(a * a);
    printf("The area of triangle is: %.2f", area);

    return 0;
}*/