#include<stdio.h>  
#include<math.h>
#include<stdlib.h>
  
int main()  
{  
    int small, big, range, num, limit;  
  
    printf("Enter the limit\n");  
    scanf("%d", &limit); //3
  
    printf("Enter %d/*5*/ numbers\n", limit);  
    scanf("%d", &num);  // 9
  
    small = big = num;  // small = 9/big = 9,12;
  
    limit = limit - 1; // 3 -1 = 2  
  
    while(limit) //2, 1
    {  
        scanf("%d", &num); // 12, 7
  
        if(num > big)   // 12 > 9 t, 7 > 12f
        {  
            big = num;  // big = 12
        }  
  
        if(num < small) // 7 < 9
        {  
            small = num;  // small = 7
        }  
  
        limit--;  
    }  
  
    range = big - small;  
  
    printf("Small Number = %d\nBig Number = %d\n", small, big);  
    printf("Range is %d\n", abs(range));  
  
    return 0;  
}  


/*similar code with array*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()

{

   int limit;
   int i=0;
   int min, max;
   printf("Enter the limit: ");
   scanf("%d", &limit);
   int arr[limit];
   printf("Enter the %d number: \n", limit);
   for(i=0; i<limit; i++)
   {
    scanf("%d", &arr[i]);
   }
   min = arr[0];
   for(i = 1; i<limit; i++)
   {
    if(arr[i] < min)
    {
        min = arr[i];
    }
   }
   printf("Min of list is: %d\n", min);

   max = arr[0];
   for(i = 1; i<limit; i++)
   {
    if(arr[i] > max)
    {
        max = arr[i];
    }
   }
   printf("Max of list is: %d\n", max);
   int range =  abs(min -  max);
   printf("The range of the number list is: %d", range);


    return 0;
}