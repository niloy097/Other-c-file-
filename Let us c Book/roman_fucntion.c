#include<stdio.h>

int romanise(int y, int k, char ch)
{
    int i, j;
    j = y/k; //1
    for(i = 1; i<=j; i++)
    {
        printf("%c", ch);
    }
    return y % k;
}

int main()

{

    int yr;
    printf("\nEnter year: ");
    scanf("%d", &yr);
    yr = romanise(yr, 1000, 'm');
    yr = romanise(yr, 500, 'd');
    yr = romanise(yr, 100, 'c');
    yr = romanise(yr, 50, 'l');
    yr = romanise(yr, 10, 'x');
    yr = romanise(yr, 5, 'v');
    yr = romanise(yr, 1, 'i');
   
    

    return 0;
}



/*without function


/*Define a function to convert any given year into its Roman equivalent Use these Roman equivalents for decimal
numbers: 
1 - i, 
5 - v, 
10 - x,
50 - l,
100 - c,
500 - d
1000 - m
#include<stdio.h>

int main()

{
    
    int year;//2323
    printf("Enter the year: ");
    scanf("%d", &year);
    int x1 = year/1000;
    for(int i = 1; i<=x1; i++)
    {
        printf("%c", 'm');
    }
    year = year % 1000;

    int x2 = year/500;
    for(int i = 1; i<=x2; i++)
    {
        printf("%c", 'd');
    }
    year = year % 500;

    int x3 = year/100;
    for(int i = 1; i<=x3; i++)
    {
        printf("%c", 'c');
    }
    year = year % 100;

    int x4 = year/50;
    for(int i = 1; i<=x4; i++)
    {
        printf("%c", 'l');
    }
    year = year % 50;

    int x5 = year/10;
    for(int i = 1; i<=x5; i++)
    {
        printf("%c", 'x');
    }
    year = year % 10;

    int x6 = year/5;
    for(int i = 1; i<=x6; i++)
    {
        printf("%c", 'v');
    }
    year = year % 5;

    int x7 = year/1;
    for(int i = 1; i<=x7; i++)
    {
        printf("%c", 'i');
    }
    year = year % 1;

    

    return 0;
}

*/