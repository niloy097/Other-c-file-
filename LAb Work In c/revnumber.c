/*IF five digit number is input through the keyboard, write a progtame to reverse the number*/
#include<stdio.h>

int main()

{

    int number = 34554 ; //Let the input number is 
    int a, b, c, d, e ;
    a = number % 10;
    number = number / 10;
    
    b = number % 10;
    number = number / 10;
    
    c = number % 10;
    number = number / 10;
    
    d = number % 10;
    number = number / 10;
    
    e = number % 10;
    number = number / 10;

   

    printf("Indentified numbers are: \n%d\n%d\n%d\n%d\n%d\n", a,b,c,d,e);
    int rev = a * 10000 + b * 1000 + c * 100 + d * 10 + e * 1;
    printf("The rev number is: %d", rev);
    
    

    return 0;
}