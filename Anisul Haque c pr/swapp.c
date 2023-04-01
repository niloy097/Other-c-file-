/*

    
*                  *
* *       ---->   * * 
* * *            * * *



*/




#include<stdio.h>

int main()

{

    int term; // 3
    printf("Enter the term: ");
    scanf("%d", &term);
    for(int row = 1; row<=term; row++)
    {  
        for(int x = term - row; x>=1; x--)
        {
            printf(" ");
        }
        for(int col = 1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}