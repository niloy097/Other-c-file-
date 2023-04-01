/*
#include<stdio.h>
void main()
{
    int i;
    i=1;
    do{
        printf("You are a gay!\n");
        i=i+1;
    } while(i<=2);
    return 0;

}
*/
//Problem-1: Print All the positive number 1 to 100.
//Solve(for loop):
/*
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=100;i++)
        printf("%d\n",i);
    return 0;
}
*/
//Solve(while loop):
/*
#include<stdio.h>
void main()
{
    int x;
    x=1;
    while(x<=100)
    {
        printf("%d\n",x);
        x=x+1;
    }
    return 0;
}
*/
//Solve(Do while):
#include<stdio.h>.
void main()
{
    int x;
    x=100;
    do{
        printf("%d\n",x);
        x=x-5;
    }
    while(x>=0);
    return 0;
}
