#include<stdio.h>

int main()

{
    /*for checking a variable memory address formate specifier is %p (this will show address in hexa-decimal)
    if we want to see address in decimal then formate specifier is %d*/
    int a = 0;
    printf("%p\n", &a);
    printf("%d\n", &a); 

    return 0;
}