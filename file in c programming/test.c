#include<stdio.h>

int main()

{
    FILE *ptr1;
    
    ptr1 = fopen("test2.txt", "w");

    fprintf(ptr1, "%d", 7);

    return 0;
}