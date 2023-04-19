#include<stdio.h>

int main()

{

    float a = 3.23;
    float *b, *c;
    b = &a;
    c = b;
    printf("%u %u %u\n", &a, b, c); //address of a;
    printf("%d %d %d\n", &a, b, c); //address of a;
    printf("%f %f %f %f %f\n",a, *(&a), *&a, *b, *c); //val of a

    return 0;
}