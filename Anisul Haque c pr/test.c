//Finding the intersection  in array--->
#include<stdio.h>

int main()

{

   int array[6] = {10, 22, 23, 24, 32, 32};
   int array2[3] = {12, 22, 23};
  
    int count = 0;
    int size = sizeof(array)/sizeof(int); 
    int size2 = sizeof(array2)/sizeof(int);
    for(int i=0; i<size; i++)
    {
        for(int j = 0; j<size2; j++)
        {
            if(i != j && array[i] == array2[j])
            {
                count++;
            }
            
        }
        if(count == 0)
        {
            printf("%d ", array[i]);
            
        }
        else
        {
            count = 0;
        }
       
    }


    return 0;
}