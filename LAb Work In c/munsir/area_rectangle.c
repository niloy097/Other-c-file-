#include<stdio.h>
int area_rectangle(int x, int y);

int main()

{

    int a, b;
    scanf("%d %d", &a, &b);
    int area  = area_rectangle(a, b);
    printf("%d\n", area);

    return 0;
}

int area_rectangle(int x, int y)
{
    return x * y;
}
