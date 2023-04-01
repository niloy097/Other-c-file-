#include<stdio.h>

int main()

{

    int num;
    int fact = 1;

    printf("Enter a nunber: ");
    scanf("%d", &num);
    for(int i =  1; i<=num; i++)
    {
        fact =  fact * i;
    }

    printf("The %d%c is: %d", num, '!', fact);

    return 0;
}