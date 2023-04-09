#include<stdio.h>
int leap_year_check(int x);
int main()

{

    int year;
    scanf("%d", &year);
    int chk = leap_year_check(year);
    printf("%d", chk);


    return 0;
}

int leap_year_check(int x)
{
    if(x % 400 == 0 || x % 100 != 0 && x % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}