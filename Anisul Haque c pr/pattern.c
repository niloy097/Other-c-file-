  /*
  
   *
  * *
 * * *
* * * *

*/

#include<stdio.h>

int main()

{
  int term;
   printf("Enter the term: ");
   scanf("%d", &term);


  for(int row = 1; row<=term; row++)
  {
    for(int i = term-row; i>=1; i--)
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

/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
/*
#include<stdio.h>

int main()

{

    int row, col;
    int n;
    printf("Enter the term: ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for(col = 1; col<=n; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    

    return 0;
}

*/

/*
* * * * *
* * * *
* * *
* *
*
*/
/*
#include<stdio.h>

int main()

{

    int row, col;
    int n;
    printf("Enter the term: ");
    scanf("%d", &n);
    for (row = 5; row >= 1; row--)
    {
        for(col = 1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}

another methode

#include<stdio.h>

int main()

{

    int row, col;
    int n;
    printf("Enter the term: ");
    scanf("%d", &n); //3
    for (row = 1; row <= n; row++)
    {
        for(col = 1; col<=n+1-row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}

another methode_____>

#include<stdio.h>

int main()

{

    int row, col;
    int n;
    printf("Enter the term: ");
    scanf("%d", &n); 
    int a = n;
    for (row = 1; row <= n; row++)
    {
        for(col = 1; col<=a; col++)
        {
            printf("* ");
        }
        a--;
        printf("\n");
    }
    

    return 0;
}

*/




 