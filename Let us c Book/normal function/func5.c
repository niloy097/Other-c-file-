#include<stdio.h>

void fun(int b)
{
    b = 60;
    printf("%d\n", b);
}

int main()

{

    int a = 30;
    fun(a);
    printf("%d\n", a);

    return 0;
}


/*#include<stdio.h>

int main()

{

    // int a = 1;
    // int x = ++a;
    // int y = a++;
    // printf("%d %d %d", a, x, y);

 int a = 1;
 printf("%d %d %d", a, ++a, a++); //this works right to left R  --> L
    return 0;
}*/