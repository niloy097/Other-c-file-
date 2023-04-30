#include<stdio.h>
#include<stdbool.h>
bool is_leapyear(int x);
int main()

{

    int year;
    scanf("%d", &year);
    printf("%d\n", is_leapyear(year));

    return 0;
}

bool is_leapyear(int x)

{
    if(x % 400 == 0 || x % 100 !=0 && x % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}