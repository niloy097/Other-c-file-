/*#include<stdio.h>

int main()

{

    char ch;
    printf("Enter the char: ");
    scanf("%ch", &ch);
   int  y = (ch>=65 && ch<=90?1:0);

    printf("The val of y is: %d", y);

    return 0;
}*/
/*#include<stdio.h>

int main()

{

    int i;
    scanf("%d", &i);
    (i == 1)? printf("Ok"):printf("NO");

    return 0;
}*/
/*#include<stdio.h>

int main()

{

    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    printf("%c",(a>='a'?a:'!'));

    return 0;
}*/
//Comparisn in three numbers-->
# include <stdio.h>
 
void main()
{
    int a, b, c, big ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    big = (a>b)?(a>c?a:c):(b>c)?b:c;
 
    printf("\nThe biggest number is : %d", big) ;
}

/*
#include<stdio.h>

int main()

{

    int x, y;
    int big;
    scanf("%d%d",&x, &y);
    (x>y)?big=x:(big=y);
    printf("The big number is: %d", big);

    return 0;
}*/

/*Leap year or not*/
/*#include<stdio.h>

int main()

{

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    (year % 400 == 0) ? printf("Leap year") : ((year % 100 != 0) ?((year % 4 == 0)? printf("Leap year"):printf("Not leap year")) : printf("Not leap year")); 

    return 0;
}*/