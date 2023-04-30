#include<stdio.h>

int main()

{
    /*4 types of modifier--->*/
    
    /*
    they manage sign
    1. singed(applicable for int and char)
    2. unsigned(applicable for int and char)
    */

    signed int x = 5; // both positive and neg. int value
    unsigned int y = -5; //we cant put any negative intiger here
    printf("%d\n", x);
    printf("%u\n", y);

    /*
    they manage memory space
    3. long 
    4. short
    */
    long int i = 0;
    short int j = 0;

    long long int p = 0;
    long  double ld = 0;

    printf("long %d\n", sizeof(i));
    printf("short %d\n", sizeof(j));
    printf("long long %d\n", sizeof(p));
    printf("long double %d\n", sizeof(ld));




    return 0;
}