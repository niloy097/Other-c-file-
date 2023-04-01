//Array element isertion--->

//1. Inserting an element in array by maintainig the order.
/*#include<stdio.h>

void display(int arr[], int size)
{
    int i;
    for(i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int IndexInsertion(int arr[], int size, int element, int capacity, int index)
{
    for(int i = size-1; i>=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
}

int main()

{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;
    display(arr, size);
    IndexInsertion(arr, size, element, 100, index);
    size+=1;
    display(arr, size);

    return 0;
}


//modifed-->
#include<stdio.h>


void display(int arr[], int size)
{
    
    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int size, int capacity, int index, int element)
{
    if(size>=capacity)
    {
        return -1;
    }
    else
    {
        for(int i = size-1; i>=index; i--)
            {
                arr[i+1] = arr[i];
            }

        arr[index] = element;

        return 1;
    }
}

int main()

{

    int arr[50] = {12, 43, 1, 45, 98, 4};
    int size = 6, index = 2, element = 7;
    printf("Before inserting element--->\n");
    display(arr, size);
    int d = insertElement(arr, size, 50, index, element);
    size+=1;
    if(d == 1)
    {
        printf("After inserting element--->\n");
        display(arr, size);
    }
    else
    {
        printf("Insertion Failed\n");
    }

    return 0;
}*/


//Deleting an array element--->
#include<stdio.h>


void display(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void delElement(int arr[], int size, int index)
{
    for(int i = index; i<=size-1; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()

{

    int arr[100] = {34, 42, 67, 89, 56}; //after deletion the array == {34, 67, 89, 56}

    int size = 5, index = 1;

    display(arr, size);
    delElement(arr, size, index);
    size-=1;
    display(arr, size);

    return 0;
}
