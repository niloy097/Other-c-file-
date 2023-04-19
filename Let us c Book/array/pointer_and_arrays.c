#include<stdio.h>

int main()

{

    int i = 3, *x;
    float j = 1.5, *y;
    char c = 'c', *z;

    printf("Value of i = %d\n", i);
    printf("Value of j = %f\n", j);
    printf("Value of c = %c\n", c);

    x = &i; y = &j; z = &c;

    printf("original address in x = %u\n", x);
    printf("original address in y = %u\n", y);
    printf("original address in z = %u\n", z);

    x++; y++; z++;

    printf("New address in x = %u\n", x);
    printf("New address in y = %u\n", y);
    printf("New address in z = %u\n", z);




    return 0;
}