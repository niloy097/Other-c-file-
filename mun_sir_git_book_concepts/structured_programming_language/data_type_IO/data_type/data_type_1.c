#include<stdio.h>
int main(){

    int i;
    scanf("%i", &i);
    /*We can any input in any number system like---> Hexa-decima, integer, octal and decimal
    for all of this number formate specifier is given below*/
    printf("%i\n", i);
    printf("%d\n", i);
    printf("%o\n", i);
    printf("%x\n", i);
    printf("%X\n", i);

    return 0;
}