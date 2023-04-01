#include<stdio.h>

int main()

{

    int a, b, c;
    printf("Enter three number: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("%d is the largest number\n", a);
        if(b<c)
        {
            printf("%d is smallest number\n", b);
        }
        else if(b ==c)
        {
           printf("Another Numbers are equal\n");
        }
        else
        {
            printf("%d is samllest numbr\n", c);
        }
    }
    else if(b>a && b>c)
    {
        printf("%d is the largest number\n", b);
        if(a<c)
        {
            printf("%d is smallest number\n", a);
        }
        else if(a ==c)
        {
           printf("Another Numbers are equal\n");
        }
        else
        {
            printf("%d is samllest numbr\n", c);
        }

    }
    else // c>a && c>b
    {
        printf("%d is the largest number\n", c);
        if(a<b)
        {
            printf("%d is smallest number\n", a);
        }
        else if(a ==b)
        {
           printf("Another Numbers are equal\n");
        }
        else
        {
            printf("%d is samllest numbr\n", b);
        }
    }

    return 0;
}