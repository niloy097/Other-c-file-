/*
1. Write a programe to calculate profit or loss.

2. Write a c programe to input of five subject and calculate percentage
and grade according to following : 


percentage => 90%: grade A
percentave 




*/


//P-1
#include<stdio.h>

int main()

{

    int buying_price;
    int selling_price;

    printf("Enter buying price: ");
    scanf("%d", &buying_price);
    printf("Enter selling price: ");
    scanf("%d", &selling_price);

    if(selling_price > buying_price)
    {
        printf("Profit: %d\n", (selling_price - buying_price));
    }
    else if(selling_price < buying_price)
    {
        printf("Loss: %d\n", (buying_price - selling_price));
    }
    else
    {
        printf("No profit\n");
    }


    return 0;
}