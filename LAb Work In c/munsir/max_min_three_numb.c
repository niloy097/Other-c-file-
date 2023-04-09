#include<stdio.h>
int max_in_three(int x, int y, int z);
int min_in_three(int x, int y, int z);
int main()

{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);


    int max = max_in_three(a, b, c);
    printf("%d\n", max);


    int min = min_in_three(a, b, c);
    printf("%d\n", min);

    return 0;
}

int max_in_three(int x, int y, int z)
{
    if(x > y && x > z)
    {
        return x;
    }
    else if(y > z && y > x)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int min_in_three(int x, int y, int z)
{
    if(x < y && x < z)
    {
        return x;
    }
    else if(y < z && y < x)
    {
        return y;
    }
    else
    {
        return z;
    }
}