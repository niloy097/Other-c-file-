#include<stdio.h>

int main()

{

    int a = 5;
    printf("int value = %d size in memory = %d\n", a, sizeof(int));

    signed b = -5;
    printf("signed value = %d size in memory = %d\n", b, sizeof(signed));

    signed int c = -456;
    printf("signed int value = %d size in memory = %d\n", c, sizeof(signed int));

    unsigned d = 5;
    printf("unsigned value = %u size in memory = %d\n", d, sizeof(unsigned));

    unsigned int e = 6;
    printf("unsigned int value = %u size in memory = %d\n", e, sizeof(unsigned int));

    short f = 5;
    printf("short value = %hd size in memory = %d\n", f, sizeof(short));

    short int g = 3;
    printf("short int value = %hd size in memory = %d\n", g, sizeof(short int));
    return 0;
}