#include<stdio.h>

int main()

{
    int arr[5];
    int *ptr;
    //ptr = arr; //or
    ptr = &arr[0];
    for(int i=0; i<5; i++)
    {
        printf("Enter the value for element %d: ", i+1);
        scanf("%d", ptr);
        ptr++;
    }
    printf("You have entered--->\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



#include <stdio.h>

void pointArr(int *ptr, int x)
{
    for(int i = 0; i<x; i++)
    {
    printf("The value of %d'th index is: %d\n",(i + 1), *(ptr+i));
    }
}

int main() {
    int arr[] = {45, 34, 34 ,654, 64};
    pointArr(arr, 5); 

    return 0;
}



#include <stdio.h>



int main() {
    int arr[] = {45, 34, 34 ,654, 64};
    printf("Array element addresses--->\n");
    printf("%d\n", arr);// will print the first element address
    printf("%d\n", (arr+1));  // will print the 2nd element address
    printf("%d\n", (arr+2)); // will print the 3nd element address
    printf("%d\n", (arr+3)); // will print the 4th element address
    printf("%d\n\n", (arr+4)); // will print the 5th element address


    printf("Array element Values--->\n");
    printf("%d\n", *arr);// will print the first element value
    printf("%d\n", *(arr+1));  // will print the 2nd element value
    printf("%d\n", *(arr+2)); // will print the 3nd element value
    printf("%d\n", *(arr+3)); // will print the 4th element value
   printf("%d\n\n",*(arr+4)); // will print the 5th element value


    return 0;
}


#include<stdio.h>

void point_arr(int ptr[], int x)
{
    for(int i = 0; i<x; i++)
    {
        printf("The value of %d'th address is: %d\n", (i+1), *(ptr+i));
    }
}

int main()

{

    int arr[] = {45, 45, 33, 35, 667};
    point_arr(arr, 5);

    return 0;
}





/*problem-1:  Creat an array of 10 numbers. Verify using pointer arithmetic that
 (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array */


/*#include<stdio.h>

int main()

{
    //Aray pointer practice--->

    int arr[10];
    int *ptr;
    ptr = arr;
    ptr = ptr + 2;
    if(ptr == &arr[2])
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
   
    return 0;
}
*/

/*Problem-2: If s[3] is a 1-D array of integers then *(s+3) referes to the trird elements????*/
#include<stdio.h>

int main()

{

    int arr[3] = {23, 43, 56};
    
    if(arr+2 == &arr[2])
    {
        printf("True\n");
        printf("%d", *(arr+2)); //so *(s+3) points the 4'th element of the array
    }
    else
    {
       printf("False\n");
    }
    
    
    
    
    
    
      // *(s+3) refers the 

    /*
    here -->
    s = &s[0] = 6422292(or current memory address)
    s+1 = &s[1] = 6422296
    s+2 = &s[2] = 6422300
    s+3 = &s[3] = 6422304 (if array became s[4])
    
    */

    return 0;
}