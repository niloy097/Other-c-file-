//Scanning and printing matrix-->

/*
#include<stdio.h>
int main()
{
  int i, j, A[3][4], B[3][4];
  printf("Enter 3*4 Matrix for the array A: \n");
  //Scanning A matrix--->
  for(i=0; i<3; i++)
  {
    for(j=0; j<4; j++)
   {
      printf("Array-Index [%d][%d] = ", i,j);
      scanf("%d", &A[i][j]);

   }
   printf("\n");
  }
  //Printing A matrix-->
  printf("You have entered: \n");
  printf("A = ");

  for(i=0; i<3; i++) //row
  {
    printf("\t");
    for(j=0; j<4; j++) //col
    {
      printf(" %d ", A[i][j]);
    }
    printf("\n");
  }

  printf("Enter 3*4 Matrix for the array B: \n");
  //Scanning B matrix--->
  for(i=0; i<3; i++)
  {
    for(j=0; j<4; j++)
   {
      printf("Array-Index [%d][%d] = ", i,j);
      scanf("%d", &B[i][j]);

   }
   printf("\n");
  }
  

  //Printing B matrix-->
  printf("You have entered: \n");
  printf("B = ");

  for(i=0; i<3; i++) //row
  {
    printf("\t");
    for(j=0; j<4; j++) //col
    {
      printf(" %d ", B[i][j]);
    }
    printf("\n");
  }
  
}
*/

//Matrix adding and subtraction--->

/*#include<stdio.h>
int main()

{

  int i, j, A[10][10], B[10][10], sum[10][10];

  printf("Enter Value for 3*4 matrix A: \n");
  //Scanning Value for Matrix A--->
  for(i=0; i<3; i++) //Row
  {
    for(j=0; j<4; j++) //COl
    {
      printf("Array Index [%d][%d] = ", i, j);
      scanf("%d", &A[i][j]);
    }
    printf("\n");
  }


  printf("\n\nEnter Value for 3*4 matrix B: \n");
  //Scanning Value for Matrix B--->
  for(i=0; i<3; i++) //Row
  {
    for(j=0; j<4; j++) //COl
    {
      printf("Array Index [%d][%d] = ", i, j);
      scanf("%d", &B[i][j]);
    }
    printf("\n");
  }

  
  printf("\n\nA = ");
  //Printing Matrix A--->
  for(i=0; i<3; i++) //Row
  { 
    printf("\t");
    for(j=0; j<4; j++) //COl
    {
      
      printf(" %d ", A[i][j]);
    }
    printf("\n");
  }
  

  printf("\n\nB = ");
  //Printing Matrix B--->
  for(i=0; i<3; i++) //Row
  { 
    printf("\t");
    for(j=0; j<4; j++) //COl
    {
      
      printf(" %d ", B[i][j]);
    }
    printf("\n");
  }


  //Adding---->

  for(i=0; i<3; i++) //Row
  { 
   
    for(j=0; j<4; j++) //COl
    {
      
      sum[i][j] = A[i][j] + B[i][j];
      
    }
    
  }

  //Printing Result--->
  printf("\n\nThe sum of A and B Marix is:-----> \n\n");
  printf("Sum = ");

  for(i=0; i<3; i++) //Row
  { 
    printf("\t");
    for(j=0; j<4; j++) //COl
    {
      
      
      printf(" %d ", sum[i][j]);
      
    }
    printf("\n");
    
  }


  return 0;
}*/

//Matrix Multiplication---->


/*
#include<stdio.h>
int main()
{
  int first[10][10], second[10][10], r1, r2, c1, c2, i, j, k, sum=0;
  int result[10][10];
  printf("Enter rows and colum for first matrix: ");
  scanf("%d %d", &r1, &c1);

  printf("Enter rows and colum for second matrix: ");
  scanf("%d %d", &r2, &c2);


  if ( c1 != r2)
   {
    printf("Error !!! Invalid order.\n\n");
     printf("Enter rows and colum for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and colum for second matrix: ");
     scanf("%d %d", &r2, &c2);

   }

  //Scanning input for first matrix--->
  printf("Enter First Matrix: \n");
  for (i=0; i<r1; i++)
  {
    for(j=0; j<c1; j++)

    { printf("F-Index [%d][%d] = ", i, j);
      scanf("%d", &first[i][j]);
    }
    printf("\n");
  }

  //Scanning input for second matrix--->
   printf("\n\nEnter Second Matrix: \n");
  for (i=0; i<r2; i++)
  {
    for(j=0; j<c2; j++)

    { printf("F-Index [%d][%d] = ", i, j);
      scanf("%d", &second[i][j]);
    }
    printf("\n");
  }

//Printing first matrix--->
 printf("\n\nFirst Matrix: \n");
  for (i=0; i<r1; i++)
  { 
    for(j=0; j<c1; j++)

    {
      printf(" %d ", first[i][j]);
    }
    printf("\n");
  }
  
//Printing second matrix--->
 printf("\n\nSecond Matrix: \n");
  for (i=0; i<r2; i++)
  { 
    for(j=0; j<c2; j++)

    {
      printf(" %d ", second[i][j]);
    }
    printf("\n");
  }
// Multipling Matrix--->


  for(i=0; i<r1; i++)
{
  for(j=0; j<c2; j++)
  {
    for(k=0; k<c1; k++)
    {
      sum = sum + first[i][k] * second[k][j];
    }

    result[i][j] = sum;
    sum = 0;
  }
}


//Printing Result Matrix---->

printf("\n\nResult Matrix\n");
for(i=0; i<r1; i++)
{
  printf("\t");
  for(j=0; j<c2; j++)
  {
    printf("%d ", result[i][j]);
  }
  printf("\n");
}

  }
*/

//Transpose matrix-->
#include<stdio.h>
int main()
{
  int i, j, r, c, A[10][10], Transpose[10][10];
  printf("Number of rows and colum: ");
  scanf("%d%d", &r, &c);

  printf("Enter the value for Marix-A: \n");
  for(i=0; i<r; i++) //row
  {
    for(j=0; j<c; j++) //col
    { 
      scanf("%d", &A[i][j]);
    } 
    
  }

  printf("\n\nYour Entered Matrix is: \n");
  for(i=0; i<r; i++) //row
  {
    for(j=0; j<c; j++) //col
    { 
      printf("%d ", A[i][j]);
    } 
    printf("\n");
  }
  //Index Changing--->
  for(i=0; i<r; i++) //row
  {
    for(j=0; j<c; j++) //col
    { 
      Transpose[j][i] = A[i][j];
    } 
  
  }
  
  printf("Transpose Matrix: \n");
  for(i=0; i<c; i++) //row
  {
    for(j=0; j<r; j++) //col
    { 
      printf("%d ", Transpose[i][j]);
    } 
    printf("\n");
  }
   
   
}

/*
max min in matrix-->


#include<stdio.h>

int main()

{

    int row, col, i, j;
    printf("Enter the row col for matrix: ");
    scanf("%d %d", &row, &col);
    int mat[row][col];
    int max, min;
    printf("Enter the value for [%d]*[%d] matrix---->\n ", row, col);
    for(i = 0; i<row; i++)
    {
        for(j  = 0; j<col; j++)
        {
            printf("Enter the matrix index [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    max = mat[0][0];
    min = mat[0][0];
    for(i = 0; i<row; i++)
    {
        for(j  = 0; j<col; j++)
        {
            if(max <= mat[i][j])
            {
                max = mat[i][j];
            }
        }
        
    }
    for(i = 0; i<row; i++)
    {
        for(j  = 0; j<col; j++)
        {
            if(min >= mat[i][j])
            {
                min = mat[i][j];
            }
        }
        
    }
    printf("The max value in matrix is: %d\n", max);
    printf("The min value in matrix is: %d\n", min);

    for(i = 0; i<row; i++)
    {
        for(j  = 0; j<col; j++)
        {
            if(max == mat[i][j])
            {
              printf("The max value index is: [%d][%d]\n", i, j);
              break;
            }
        }
        
    }
    for(i = 0; i<row; i++)
    {
        for(j  = 0; j<col; j++)
        {
            if(min == mat[i][j])
            {
              printf("The min value index is: [%d][%d]\n", i, j);
              break;
            }
        }
        
    }

    return 0;
}


*/





