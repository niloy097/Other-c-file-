//Call by value--->
/*#include<stdio.h>
void swappVal(int x, int y);
int main()

{

    int a, b;
    scanf("%d %d", &a, &b);
    printf("You have entered: \n");
    printf("a = %d\nb = %d\n", a, b);
    swappVal(a, b);


    return 0;
}

void swappVal(int x, int y)
{
    y = x - y;
    x = x - y;
    y = x + y;
    printf("After swapping: \n");
    printf("a = %d\nb = %d\n", x, y);
    
}*/
//Call by reference-->

#include<stdio.h>
void swapr(int *x, int *y);
int main()

{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before swapping--\n");
    printf("a = %d\nb = %d\n", a, b);
    swapr(&a, &b);
    printf("After swapping--\n");
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}

void swapr(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}