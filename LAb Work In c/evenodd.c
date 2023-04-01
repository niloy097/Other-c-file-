#include<stdio.h>

int main()

{

    int num;
    printf("Put a number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("%d number is EVEN\n",num);
    }
    else
    {
        printf("%d number is ODD\n", num);
    }

    return 0;
}