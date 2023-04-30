#include<stdio.h>

int main()

{

    int a = 0;
    float f = 1.5;
    double d = 1.5;
    char c = 'a';

    printf("int %d\n", sizeof a); 
    //or sizeof(int)
    printf("float %d\n", sizeof f);
    //of sizeof(float)
    printf("double %d\n", sizeof d);
    //or sizeof(double)
    printf("char %d\n", sizeof c);
    //or sizeof(char)
    printf("void %d\n", sizeof (void));
    //or sizeof(void)

    return 0;
}