/*
#include<stdio.h>
void main()
{
    int a[5], i, sum_odd=0, sum_even=0;
    printf("Enter 5th size array value : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++)
    {
        if(a[i]%2==0)
            sum_even = sum_even + a[i];
        else
            sum_odd = sum_odd + a[i];
    }
    printf("The even sum is : %d\n", sum_even);
    printf("The odd sum is : %d\n", sum_odd);
    return 0;
}
*/
//Finding Area of a circle:

/*
#include<stdio.h>
void main()
{
    float r, Area;
    printf("Enter Radius for a circle: ");
    scanf("%f", &r);
    Area= 3.1416*r*r;
    printf("The area of the circle is: %.4f", Area);
    return 0;
}
*/
//Practicing null charater:-
/*
#include<stdio.h>
int main()
{
    char str[] = "Niloy";
    int i;
    i = 0;
    while(1){
        printf("%d - %c\n", i, str[i]);
        if(str[i] == '\0')
        {
            break;
        }
        i++;
    }
    return 0;

}
*/
#include<stdio.h>
void main()
{
    int i;
    printf("The series is: \n");
    for(i=1; i<=10; i++)
    {
        printf("%d\n", i);
    }
    int sum=0;
    for(i=1; i<=10; i++)
    {
        sum= sum+i;
    }
    printf("The addition is: %d", sum);

    return 0;
}
