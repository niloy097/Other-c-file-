#include<stdio.h>

int main()

{

    /*
    
    
    '&' ---> address of operator
    '*' ---> value at address operator
    
    
    */


   int i = 3;
   printf("Address of i: %d\n", &i);
   printf("Value of i: %d\n", i);
   printf("Value of i: %d\n", *(&i));
    return 0;
}