//Passing array in function----->
/*#include<stdio.h>

void arrp(int arr[])
{
  int i;
  for(i=0; i<5; i++)
  {
    printf("%d\n", arr[i]);
  }
}

int main()
{
  int arr[] = {10, 20, 32, 21, 45};

  arrp(arr);
}*/


//Finding maximum value in array using function--->
/*#include<stdio.h>
int max(int x[])
{
   int i, m;
   m = x[0];
   for(i=1; i<5; i++)
   {
    if(m<x[i])
    {
      m = x[i];
    }
   }
   return m;
}

int main()
{
  int arr[] = {10, 34, 32, 5, 54};
 int maxavalue=  max(arr);
 printf("The maximum value in array is : %d", maxavalue);
}


#include<stdio.h>
int maximum(int x[5])
{
   int j;
   int max = x[0];
   for(j=1; j<5; j++)
   {
    if(max<x[j])
    {
      max = x[j];
    }
   }
   return max;
}

int main()
{
  int arr[5];
  int i;
  printf("Enter Value for array: \n");
  for(i=0; i<5; i++)
  {
  scanf("%d", &arr[i]);
  }
   
   int max_value_in_array = maximum(arr);

   printf("Maximum value: %d", max_value_in_array);
}*/