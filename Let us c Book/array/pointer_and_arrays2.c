#include<stdio.h>

int main()

{

    int arr[] = {10, 20, 30, 40, 45, 67, 56, 74};
    
    int i = 4, *j, *k, *x, *y;
    j = &i; 
    j = j + 9; 
    k = &i;
    k = k - 3;
    x = &arr[1];
    printf("%d\n", x);
    y = &arr[5];
    printf("%d\n", y);
    printf("%d\n", y - x);
    j = &arr[4];
    k = (arr + 4);
    if(j == k)
    {
        printf("Pointer are in same location\n");
    }
    else
    {
        printf("Not in same locations\n");
    }



    return 0;
}