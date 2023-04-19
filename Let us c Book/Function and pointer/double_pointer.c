#include<stdio.h>

int main()

{

    int x = 4;
    int *y;
    int **z;
    y = &x;
    z = &y;
    printf("Val of x: %d\n", x);
    printf("Address of x: %x\n", &x);
    printf("Address of x: %x\n", y);
    printf("Val of x: %d\n", *y);
    printf("val of y: %x\n", y);
    printf("Address of y: %x\n", &y);
    printf("Address of y: %x\n", z);
    printf("Val of y: %x\n", *z);
    printf("Val of z: %x\n", z);
    printf("Address of z: %x\n", &z);
    printf("Val of x from double pointer: %d\n", **z);

    return 0;
}