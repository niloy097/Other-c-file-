#include<stdio.h>


int chk_ly(int x, int y);


int main()

{
    
    
    printf("%d\n", chk_ly(5, 6));
    

    return 0;
}

int chk_ly(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}