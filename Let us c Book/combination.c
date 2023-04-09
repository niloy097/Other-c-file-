/*

Write a program to generate all combinations of 1, 3 and 3 using for loop.

1 1 1
1 1 2
1 1 3
1 2 1
1 2 2
1 2 3
1 3 1
1 3 2
1 3 3
2 1 1
2 1 2
2 1 3
2 2 1

*/
#include<stdio.h>

int main()

{

    int i,j,k;
    for(i = 1; i<=3; i++)
    {
        for(j = 1; j<=3; j++)
        {
            for(k = 1; k<=3; k++)
            {
                printf("%d %d %d\n", i,j,k);
            }
        }
    }

    return 0;
}