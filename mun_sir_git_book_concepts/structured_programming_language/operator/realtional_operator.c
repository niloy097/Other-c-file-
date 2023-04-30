#include<stdio.h>

int main()

{   printf("<\n");
    printf("%d\n", 5 < 2);
    printf("%d\n", 2 < 5);
    printf("%d\n", 2 < 2);
    
    printf("\n>\n");
    printf("%d\n", 5 > 2);
    printf("%d\n", 2 > 5);
    printf("%d\n", 2 > 2);

    printf("\n<=\n");
    printf("%d\n", 5 <= 2);
    printf("%d\n", 2 <= 5);
    printf("%d\n", 2 <= 2);

    printf("\n>=\n");
    printf("%d\n", 5 >= 2);
    printf("%d\n", 2 >= 5);
    printf("%d\n", 2 >= 2);    

    printf("\n>==\n");
    printf("%d\n", 5 == 2);
    printf("%d\n", 2 == 5);
    printf("%d\n", 2 == 2); 

    printf("\n>!=\n");
    printf("%d\n", 5 != 2);
    printf("%d\n", 2 != 5);
    printf("%d\n", 2 != 2); 
    return 0;
}