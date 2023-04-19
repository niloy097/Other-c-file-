#include<stdio.h>
void fun(int x, int y, int *a, int *b);
int main()

{

    int i = 5, j = 2;
    fun(i, j, &i, &j);
    printf("i = %d\nj = %d\n", i, j);
    
    return 0;
}

void fun(int x, int y, int *a, int *b)
{
    *a = x * x;
    *b = y * y;
}

/*
#include<stdio.h>
void fun(int *i, int *j);
int main()

{

    int i = 5, j = 2;
    fun(&i, &j);
    printf("i = %d\nj = %d\n", i, j);
    
    return 0;
}

void fun(int *i, int *j)
{
    *i = *i * *i;
    *j = *j * *j;
}

*/