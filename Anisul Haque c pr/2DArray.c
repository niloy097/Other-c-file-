//Initialization and Declaration of 2D Arrays.

/*#include<stdio.h>
int main()
{
   int A[2][2] = {  {5, 6}, 
                    {9, 5}    };
int i, j; //Row = i, Col = j..
for(i=0; i<2; i++)
   {
    for(j=0; j<2; j++)
    {
      printf("%d ", A[i][j]);
    }

    printf("\n");
   }
}
------->
#include<stdio.h>
int main()
{
  int i, j;

 int a[3][4] = {  {3, 6, 3, 3}, 
                  {9, 3, 2, 3}, 
                  {6, 4, 7, 4} 
            };

for(i=0; i<3; i++)
{
  for(j=0; j<4; j++)
  {
    printf("%d ", a[i][j] );
  }
  printf("\n");
}
retturn 0;
}
*/



//Taking user from input for 2D Array

/*
#include<stdio.h>
int main()
{
  int i, j;
  int A[3][4];
   printf("Enter Value for 3*4 array: \n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<4; j++)
    {
      scanf("%d", &A[i][j]);
    }
  }

  printf("You have entered: \n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<4; j++)
    {
      printf(" %d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;

}
*/
//Ektu Sundor kore lol---->
/*
#include<stdio.h>
int main()
{
  int i, j;
  int A[3][4];
   printf("Enter Value for 3*4 array: \n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<4; j++)
    { printf("A [%d][%d] = ", i, j);
      scanf("%d", &A[i][j]);
    }

    printf("\n");
  }

  printf("You have entered: \n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<4; j++)
    {
      printf(" %d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;

}
*/