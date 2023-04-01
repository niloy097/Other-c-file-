//Dynamic Memory Allocation(Pointer)
//P-1(malloc)
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
   ptr =(int *) malloc(5 * sizeof(int)); //One parameter her!
   if(ptr == NULL)
   {
    printf("Memory not allocated.\n");
   }
   else
   {
    printf("Memory allocation successful.\n");

   }
   return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  ptr = (int *)calloc(5, sizeof(int)); //Two parameter here.

  if(ptr == NULL)
  {
    printf("Memory not allocated");
  } 
  else
  {
    printf("Memory Allocation successful.\n");
  }
  return 0;
}
*/
//P-2(Free memory)---->
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  ptr = (int *)calloc(5, sizeof(int));
  if(ptr == NULL)
  {
    printf("Memory Allocation Denied.\n");
  }
  else
  {
    printf("Memory Allocation Allowed.\n");
    //Do your work
    free(ptr);
    printf("Memory freed successful.\n");
  }
  return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr1, *ptr2;
  ptr1 = (int *)malloc(5*sizeof(int));
  ptr2 = (int *)calloc(5, sizeof(int));
  if(ptr1 == NULL || ptr2 == NULL)
  {
    printf("Memory not allocated.\n");
  }
  else{
    printf("Memory Allocated Successful.\n");
    ptr1 = realloc(ptr1, 50);
    printf("Memory Reallocation Successful.\n");
  }
  return 0;
}
