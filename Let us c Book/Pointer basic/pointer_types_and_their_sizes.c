#include<stdio.h>

int main()

{

    int *apha;
    char *ch;
    float *s;
    //Here apha , ch, s and different pointer but both of them contain address so, size would be same
    //based on architechture 
    printf("%d\n", sizeof(apha));
    printf("%d\n", sizeof(ch));
    printf("%d\n", sizeof(s));

    //But if we check with value in address operator --->
    printf("%d\n", sizeof(*apha));
    printf("%d\n", sizeof(*ch));
    printf("%d\n", sizeof(*s));
    //They will give their size according to var type
 

    return 0;
}