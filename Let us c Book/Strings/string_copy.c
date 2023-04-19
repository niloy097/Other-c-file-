#include<stdio.h>
#include<string.h>
int main()

{

    /*strcpy(target, source)*/
    char source[] = "Kiron Mala", target[20];
    strcpy(target, source);
    printf("Source String: %s\n", source);
    printf("Target string: %s\n", target);
    

    return 0;
}