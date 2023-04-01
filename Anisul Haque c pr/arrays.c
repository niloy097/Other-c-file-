/* 1D array*/

/* ---->printing array
#include<stdio.h>
int main()

{

  int marks[5] = {30, 20, 676, 23, 3};
  int i;
  for(i=0; i<5; i++)

  {
    printf(" %d ", marks[i]);
  }

  return 0;
}

*/

//Taking input from user--->
/*
#include<stdio.h>
int main()

{
  int a[5], i;
  printf("Enter 5 value for array: ");
  for(i=0; i<5; i++)
    {
      scanf("%d", &a[i]);
    }

    printf("The values are: ");
    for(i=0; i<5; i++)

    {
      printf("%d ", a[i]);
    }

}
*/

//Liner searching--->

/*
Linear search:

let,

int num [] = {10, 2, 30, 15, 28, 5};
.Search the value = 15

1) Is the value found?
2) If yes what's the position?




*/

// Linear search solution--->

/*#include<stdio.h>
int main()

{
  int a[5] = {20, 16, 6, 9, 3}; //Data in arrays
  int n;  
  int i;
  int counter = 0;
  printf("Enter the number for search: ");
  scanf("%d", &n);
  for(i=0; i<5; i++)
  {
    if(n == a[i])

    {
      counter++;
      break;
      
    }
    
  }
  if(counter == 0)

  {
    printf("Data not found!");
  }
  else

  {
    printf("Data Found\n");
    printf("The position of data is: %d", i+1);
  }
}*/

//Finding the maximum value in arrays--->
/*#include<stdio.h>
int main()

{
  int a[5] = {2,3,6,9,3};
  int i;
  //Let the max is a[0]
  int max = a[0];
  for(i=1; i<5; i++)
  {
    if(max < a[i])
    max = a[i];
  }
  printf("The maximum valu in arrays is: %d", max);
}
*/
//fibonacci series by arraay
/*#include<stdio.h>
int main()
{

  int n, a[30], i;
  printf("Enter value for N: ");
  scanf("%d", &n);

  a[0] = 0;
  a[1] = 1;

  for(i=2; i<=n; i++)

  {
    a[i] = a[i-1] + a[i-2];
  }
  printf("\n");
   
   for (i=0; i<n; i++)
   {
    printf("%d ", a[i]);
   }
   

}*/


//Copying array elements
/*#include<stdio.h>
int main()
{

  int array1[5] = {20, 19, 45, 75, 35};
  int array2[5];
  int i;

  printf("Array1 : ");
  for(i=0; i<5; i++)

  {
    printf("%d ", array1[i]);
  }

  for(i=0; i<5; i++)
  {
    array2[i] = array1[i];
  }

  printf("\nArray2 : ");
  for(i=0; i<5; i++)

  {

    printf("%d ", array2[i]);
  }
  return 0;

}
*/


/*#include<stdio.h>
int main()
{
    int i,j, n;
    
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        int var;
        int large;
        int i;
        scanf("%d", &var);
        int arr[var];
        for(i = 0; j<var; i++)
        {
            
            scanf("%d", &arr[i]);

        }
         large = arr[0];
        for(i=1; i<var; i++)
        {
        if(large < arr[i])
        large = arr[i];
        }
  

        for(i = 0; i<var; i++)
        {
            if(large == arr[i])
            {
                printf("%d\n", i);
            }
        }
       
         
    
    }
}*/


/*

//Sorting an array--->
#include<stdio.h>

int main()

{

    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    
    int i, j;
    printf("Enter array value in size of %d: ", size);
    for(i = 0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<size-1; i++)
    {
        for(j = 0; j<size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The sorted array is: \n");
    for(i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/


//changing an arr element value from other function--->
#include<stdio.h>

void point_arr(int ptr[], int x)
{
    for(int i = 0; i<x; i++)
    {
        printf("The value of %d'th address is: %d\n", (i+1), ptr[i]);
    }

    ptr[2] = 330; //Targetting the arr in main function by other function
}

int main()

{

    int arr[] = {45, 45, 33, 35, 667};
    point_arr(arr, 5);

    //Now printing the 3rd element after changing the arr in other fucntion-->
    printf("%d\n", arr[2]);
  /* this changes the value and we can access this array from other fucntion 
  bcz we called in fucntion point_arr by reference or address not by value*/
    return 0;
}




/*Problem: Make a multiplication table using array-->*/
#include<stdio.h>

int main()

{  
    int mul_table;
    printf("Which multiplication table u want: ");
    scanf("%d", &mul_table);
    int mul[10];
    for(int i = 0; i<10; i++)
    {
        mul[i] = mul_table * (i + 1);
    }

    for(int i = 0; i<10; i++)
    {
        printf(" %d * %d = %d\n", mul_table, (i + 1), mul[i]);
    }

    return 0;
}


//Reversing an array--->
#include<stdio.h>

void reverse_Array(int *arr, int x)
{
    int temp;
    for(int i = 0; i<(x/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[x - 1 - i];
        arr[x - 1 - i] = temp;
    }
    
    
    /*
       Array reverse logic--->
       for ===> arr[0] replace arr[4]
                arr[1] replace arr[3]
                arr[2] replace arr[2]
                general form
                arr[i] replace arr[4 - i](for this sample problem) or arr[x - 1 - i] 
    
    */
}

int main()

{

    int arr[] = {1,2,3,4,5};
    reverse_Array(arr, 5);
    for(int i = 0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



/*

#include<stdio.h>

int main()

{

  //checking how many dublicate item in array--->?
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  int i;
  printf("Enter the array element: ");

  for(i = 0; i<n; i++)
  
  { 
    scanf("%d", &arr[i]);

  }
  int count = 0;
  for(i = 0; i<n; i++)
  {
    for(int k = i+1; k<n; k++)
    {
      if(arr[i] == arr[k])
      {
        count++;
      }
    }
  }

  printf("Number of duplicate element is: %d", count);

  return 0;
}






















/*#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],b[10],i,c[10],j,k=0,n1,n2;

   // taking input set A

   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

    // taking input set B

   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

   // logic for calculate union

   // copy the element of set A in set C
   for(i=0;i<n1;i++)
   {
       // repeted element is not allowed so we check is any value repeted
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) //if not repesated then store value in set c 
       {
          c[k]=a[i];
          k++;
       }
    }
    // copy element of set B in set C
   for(i=0;i<n2;i++)
   {
       // check for repeted element
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) // if element is not repeted then store in set C
     {
       c[k]=b[i];
       k++;
     }
   }

   // printing of union of set A and set B
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}*/



*/




//Finding the union in array--->
#include<stdio.h>

int main()

{

    //int array[] = {10, 22, 11, 22, 32, 32};
    int array[] = {10, 10, 10, 22, 22, 22};
    int count = 0;
    int size = sizeof(array)/sizeof(int);
    for(int i=0; i<size; i++)
    {
        for(int j = i + 1; j<size; j++)
        {
            if(array[i] == array[j])
            {
                count++;
            }
            
        }
        if(count == 0)
        {
            printf("%d ", array[i]);
        }
        count = 0;
    }


    return 0;
}
