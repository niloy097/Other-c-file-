
#include<stdio.h>
void main()
{
    int a[3];
    a[0] = 3;
    a[1] = 4;
    a[2] = 500;

    int x = a[0] + a[2];

    printf("%d\n", x);

    a[2] = 100;
    x = a[0] + a[2];
    printf("%d\n", x);

    return 0;
}

//Another way to declear arrary;


#include<stdio.h>
int main()
{
    int a[5] = {12, 14, 78, 90, 34};
    printf("Value of index 0: %d\n", a[0]);
    printf("Value of index 1: %d\n", a[1]);
    printf("Value of index 2: %d\n", a[2]);
    printf("Value of index 3: %d\n", a[3]);
    printf("Value of index 4: %d\n", a[4]);


    return 0;

}



#include<stdio.h>
void main ()
{
    int a[5] = {7, 23, 10, 30, 22};
    int x;
    for(x=0; x<5; x++)
        printf("%d\n",a[x]);
    return 0;
}


#include<stdio.h>
void main()
{
    float a[5];
    int i;
    for(i=0; i<5; i++){
        scanf("%f", &a[i]);
    }
    for(i=0; i<5; i++){
        printf("%f\n",a[i]);
    }
    return 0;
}

#include<stdio.h>
void main()
{
    int a[10];
    int i;
    int sum=0;
    printf("Enter the values of the Array:\n");
    for(i=0; i<10; i++)
    {


        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++)
    {
        sum= sum + a[i];
    }
    printf("Sum of the array : %d\n", sum);
    return 0;

}

