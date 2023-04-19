#include<stdio.h>
int j;
void increment();
void decrement();
int main()

{

    printf("j = %d\n", j);
    increment();
    increment();
    decrement();
    decrement();

    return 0;
}
void increment()
{
    j = j + 1;
    printf("on incrementing j = %d\n", j);
}

void decrement()
{
    j = j - 1;
    printf("on decrementing j = %d\n", j);
}