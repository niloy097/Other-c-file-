//Nesting
/*#include<stdio.h>

int main()

{

    int row;
    int col, sum;
    for(row = 1; row<=3; row++)
    {
        for(col = 1; col<=3; col++)
        {
            sum = row + col;
            printf("Row = %d Col = %d Sum = %d\n", row, col, sum);
        }
    }

    return 0;
}*/

//While loop in a for loop--->
/*#include<stdio.h>

int main()

{

    for(int row = 1; row<=3; row++)
    {
       int col = 1;
       while(col<=row)
       {
           printf("* ");
          col++;
       }
       printf("\n");
    }

    return 0;
}*/
//Multiple initialization in the for loop-->
/*#include<stdio.h>

int main()

{
    int i,j;
    for(i = 1, j = 2; j<=9; j++)
    {
        printf("%d%d ", i, j);
    }

    return 0;
}*/
//Multiple intialization and conditions in the for loop-->
/*#include<stdio.h>

int main()

{

    int i, j;
    for(i = 1, j = 2; i<=10 && j<=15; j++, i=i+2)
    //for(i = 1, j = 2; i<=10 || j<=15; j++, i=i+2)
    {
        printf("%d%d ", i, j);
    }

    return 0;
}*/
/*#include<stdio.h>

int main()

{

    int i = 1, j = 1;
    while(i++<=3)
    {
        while(j++<=3)
        {
            if(j == 2)
            {
                break;
            }
            else
            {
                printf("%d%d \n", i, j);
            }
        }
    }

    return 0;
}*/