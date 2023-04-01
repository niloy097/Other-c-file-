#include<stdio.h>

int main()

{

    int sum = 0;
    int x = 7;
    for(int i = 1; i<=100; i++)
    {
        sum = sum + x;
        x =  x + 13;
    }

    printf("The sum of the series is: %d", sum);

    return 0;
}



/*
   *
  * *
 * * *  

*/