/*#include<stdio.h>
int main(){
    int a, b;
    int summation, difference, product, quotient, remainder;
    
    a = 10;
    b = 4;
    
    summation = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;
    
    printf("Summation = %d\n", summation);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}*/

/*Convert Second to MM:SS*/
/*#include<stdio.h>

int main()

{

    int second;
    int min, sec;
    scanf("%d", &second);
    min = second/60;
    sec = second % 60;
    printf("%02d:%02d\n", min, sec);


    return 0;
}*/

/*Convert Second to HH:MM:SS.*/

/*#include<stdio.h>

int main()

{

    int second;
    scanf("%d", &second);
    int h, m, s;
    h = second / 3600;
    second = second % 3600;
    m = second / 60;
    second = second % 60;
    s  = second;

    printf("%02d:%02d:%02d\n", h, m, s);
    

    return 0;
}*/