#include<stdio.h>

int main()

{

    int arr[] ={4, 5,3 , 53, 3};
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr+i)); // here arr = &arr[0]


        /*
        here,
        arr[i]   i[arr]   *(arr+i)  *(i+arr)

        all are same expression
        
        */
    }


    return 0;
}