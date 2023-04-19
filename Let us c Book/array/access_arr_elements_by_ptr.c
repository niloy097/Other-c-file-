#include<stdio.h>

int main()

{

    int arr[] = {10, 45, 56, 34, 23};
    int *ptr;
    ptr = &arr[0];
    for(int i = 0; i < 5; i++)
    {
        printf("Address = %u element = %d\n", ptr, *ptr);
        ptr++;
    }
    return 0;
}