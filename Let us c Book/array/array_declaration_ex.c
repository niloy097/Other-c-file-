/*Write a program to find average makrks obtained by a class of 30 studnts in a test using array*/

#include<stdio.h>

int main()

{
    int  sum = 0;
    int marks[10];
    for(int i = 0; i < 10; i++)
    {
        printf("Enter marks for student-%d: ", i + 1);
        scanf("%d", &marks[i]);

    }

    for(int i = 0; i < 10; i++)
    {
        sum = sum + marks[i];
    }

    float avg = (float)sum / 10;
    printf("Avg marks: %.2f\n", avg);

    

    return 0;
}