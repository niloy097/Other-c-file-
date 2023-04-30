#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()

{
    printf("Primidtive data types limit\n");

    printf("Char limit \n");
    printf("Char limit Max: %d\n", CHAR_MAX);
    printf("Char limit Min: %d\n", CHAR_MIN);

    printf("Integer number limit \n");
    printf("Integer  Max: %d\n", INT_MAX);
    printf("Integer  Min: %d\n", INT_MIN);

    printf("Real number limit \n");
    printf("Float Max: %e\n", FLT_MAX);
    printf("Float Min: %e\n", FLT_MIN);
    printf("Double Max: %le\n", DBL_MAX);
    printf("Double Min: %le\n", DBL_MIN);
    

    return 0;
}