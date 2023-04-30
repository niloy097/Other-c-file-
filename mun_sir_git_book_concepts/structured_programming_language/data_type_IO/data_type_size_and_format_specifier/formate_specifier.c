#include<stdio.h>
#include<stdbool.h>

int main()

{

    int a = 110;
    float b = 6.3;
    double d = 5.5;
    char ch = 'd';
    bool t = true, f = false;
    printf("decimal: %d\n", a); //decimal
    printf("intiger: %i\n", a); //intiger
    printf("octal: %o\n", a); //octal
    printf("Hexa d. letter in lowercase: %x\n", a); //Hexa d. letter in lowercase
    printf("Hexa d. letter in uppercase: %X\n", a); //Hexa d. letter in uppercase
    printf("Bool true: %d\n", t);
    printf("Bool false: %d\n", f);
    printf("Float: %f\n", b);
    printf("Double: %lf\n", d);
    printf("Char: %c\n", ch);
    
    

    return 0;
}