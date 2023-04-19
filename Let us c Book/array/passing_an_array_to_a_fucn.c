#include<stdio.h>
void display(int *a, int s);
void display1(int arr[], int size);
int main()

{

    int arr[] = {78, 45, 12, 14, 19};
    int size_arr = sizeof(arr)/sizeof(int);
    display(&arr[0], size_arr);
    display1(&arr[0], size_arr);


    return 0;
}

void display(int *a, int s)
{
    for(int i = 0; i < s; i++)
    {
        printf("%d ", *a);
        a++;
    }
    printf("\n");
}

void display1(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}