/*Dmonstration of call by value & call by reference*/

#include<stdio.h>
void display1(int a);
void display2(int *a);
int main()

{
    int i;
    int marks[] = {55, 56, 34, 64 ,63, 90};
    for(int i = 0; i < 6; i++)
    {
        display1(marks[i]); //call by value
    }
    printf("\n");
    for(int i = 0; i < 6; i++)
    {
        display2(&marks[i]); // call by reference
    }

    return 0;
}

void display1(int a)
{
    printf("%d ", a);
}



void display2(int *a)
{
    printf("%d ", *a);
}