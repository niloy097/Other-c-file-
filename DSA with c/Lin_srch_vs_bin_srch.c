/*

//Linear search--->

#include<stdio.h>


int SearchElement(int arr[], int Size_of_Array, int element)
{
    for(int i = 0; i<Size_of_Array; i++)
    {
        if(arr[i] == element)
        {
            return i;
        }
       
    }
    return -1;
}

int main()

{
   int arr[] = {34, 23, 67, 54, 70, 65, 54, 34, 67, 45};
   int Size_of_Array = sizeof(arr)/sizeof(int);
   int element = 45;
   int searchIndex = SearchElement(arr, Size_of_Array, element);

   

   

   printf("%d Element found in %d index.\n", element, searchIndex);

   
    

    return 0;
}


//Another way--
#include<stdio.h>
#include<stdlib.h>

int searchElement(int arr[], int arr1[], int arr_size, int element)
{   int count = 0;
    for(int i = 0; i<arr_size; i++)
    {
        if(arr[i] == element)
        {
            
            printf("%d element found in [%d]'th index\n", element, i);
            count +=1;
        }
    }

    if(count == 0)
    {
        printf("Element not found");
    }

    
}

int main()

{

    int arr[] = {23, 76, 43, 65, 89, 34, 67, 23, 65, 90, 90, 34, 23, 23};
    int element = 88, count = 0;
    int arr1[100];
    int arr_size = sizeof(arr)/4;
    searchElement(arr, arr1, arr_size, element);
    
    
    
    return 0;
}


*/

/*
//Binary search--->


#include<stdio.h>


int binsearch(int arr[], int size, int element)
{    
    int low = 0, high  = size-1, mid;
     while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        else if(arr[mid]<element)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}

int main()

{

    int arr[] = {7, 9, 10, 13, 77, 98, 101, 155};
    int size = sizeof(arr)/4;
    
    int element = 154;
   int search_index =  binsearch(arr, size, element);
   if(search_index == -1)
   {
    printf("Item not found\n");
   }
   else
   {
    printf("%d item found in [%d]'th index", element, search_index);
   }

    return 0;
}



*/