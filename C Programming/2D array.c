/*
#include<stdio.h>
int main()
{
    int x[2][3] = {11, 12, 13,
                   21, 22, 23};

     printf("%d\n", x[0][0]);
     printf("%d\n", x[0][1]);
     printf("%d\n", x[0][2]);
     printf("%d\n", x[1][0]);
     printf("%d\n", x[1][1]);
     printf("%d\n", x[1][2]);
     return 0;
}
*/
//Problem-1: Take a two dimentional array of integer data type of size [3*3]. Take the values from the user using scanf(). Now print the average of all the values.

#include<stdio.h>
void main()
{
   int a[3][3], i, j, sum= 0;
   for(i=0; i<3; i++)  //row
   {
       for(j=0; j<3; j++) //col
       {
           scanf("%d",&a[i][j]);
       }
   }
    for(i=0; i<3; i++)  //row
   {
       for(j=0; j<3; j++) //col
       {
           printf("%d ",a[i][j]);
           sum = sum + a[i][j];
       }
       printf("\n");
   }
   float avg = sum/9.0;
   printf("sum : %d\n",sum);
   printf("Average : %f", avg);
   return 0;
}
