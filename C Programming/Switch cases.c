#include<stdio.h>
void main()
{
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("\n");
        printf("Hi\n");
        break;
    case 2:
        printf("\n");
        printf("Hello\n");
        break;
    case 3:
        printf("\n");
        printf("Bye!\n");
        break;
    default:
        printf("\n");
        printf("Unknown!!!\n");
    }
}
