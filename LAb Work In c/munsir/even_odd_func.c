#include<stdio.h>
int even_odd(int x);
int main()

{

    int num;
    scanf("%d", &num);
    int e_o = even_odd(num);
    printf("%d\n", e_o);


    return 0;
}

int even_odd(int x)
{
    if(x % 2 == 0)
    {
        return 1; //true
    }
    else
    {
        return 0; //false
    }
}