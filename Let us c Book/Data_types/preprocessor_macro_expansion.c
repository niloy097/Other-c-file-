#include<stdio.h>
#include<stdbool.h>
#define AND &&
#define OR ||
#define MESSAGE printf("This is macro expansion\n");

int main()

{
    MESSAGE;
    int x = 2024;
    if(x % 400 == 0 OR x % 100 != 0 AND x % 4 == 0)
    {
        printf("%d\n", true);
    }
    else
    {
        printf("%d\n", false);
    }

    return 0;
}

/*
#include<stdio.h>
#define AND &&
#define ARRANGE (a > 25 AND a < 50)
#define SL printf("I am ok\n");

int main()

{
    int a = 100;
    if (ARRANGE)
    {
        SL;
    }
    else
    {
        printf("I am gay\n");
    }
    
    
    

    return 0;
}

*/

/*
#include<stdio.h>
#define true 1
#define false 0
int main()

{


    if(8)
    {
        printf("%d\n", true);
    }
    else
    {
        printf("%d\n", false);
    }

    return 0;
}

*/