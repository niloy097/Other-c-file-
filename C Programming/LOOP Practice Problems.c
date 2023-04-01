//Problem-1(R.triangle)
/*
#include<stdio.h>
void main()
{
   int n, row, col;
   printf("Enter N'th number for pattern= ");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
           printf("%d ",col);
       }
       printf("\n");
   }
   return 0;
}
*/
//Problem-2(R.Triangle)
/*
#include<stdio.h>
void main()
{
   int n, row, col;
   printf("Enter N'th number for pattern= ");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
           printf("%d ",row);
       }
       printf("\n");
   }
   return 0;
}

*/
//Problem-3(Binary R.Triangle)
/*
#include<stdio.h>
void main()
{
   int n, row, col;
   printf("Enter N'th number for pattern= ");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
           printf("%d ",col%2);
       }
       printf("\n");
   }
   return 0;
}
*/
//Problem-4(Binary R.Triangle)
/*
#include<stdio.h>
void main()
{
   int n, row, col;
   printf("Enter N'th number for pattern= ");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
           printf("%d ",row%2);
       }
       printf("\n");
   }
   return 0;
}
*/
//Problem-5(Alphabetic[Capital letter] R.Triangle)
/*
#include<stdio.h>
void main()
{
   int n, row, col;
   printf("Enter N'th number for pattern= ");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
           printf("%c ",col+64); //'A' ASCII value=65 and so on----
       }
       printf("\n");
   }
   return 0;
}
*/
//Problem-6(Alphabetic[Small letter] R.Triangle)
/*
#include<stdio.h>
void main()
{
   int n, row, col;
   printf("Enter N'th number for pattern= ");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
           printf("%c ",col+96); //'a' ASCII value=96 and so on----
       }
       printf("\n");
   }
   return 0;
}
*/
//Problem-7
/*
#include<stdio.h>
void main()
{
   int n, row, col;
   printf("Enter N'th number for pattern= ");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
           printf("%c ",row+64); //'A' ASCII value=65 and so on----
       }
       printf("\n");
   }
   return 0;
}

*/
//Problem-8
/*
#include<stdio.h>
void main()
{
   int n, row, col;
   printf("Enter N'th number for pattern= ");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
           printf("%c ",row+96); //'a' ASCII value=65 and so on----
       }
       printf("\n");
   }
   return 0;
}
*/
//Problem-8(Star Pattern):
/*
#include<stdio.h>
void main()
{
   int n, row, col;
   printf("Enter N'th number for pattern= ");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
           printf("* ");
       }
       printf("\n");
   }
   return 0;
}

*/
