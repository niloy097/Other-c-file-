
#include<stdio.h>
void main()
{
    int a[5] = {-34, 67, 23, 90, 45};
    int max= a[0], i;
    for(i=1; i<5; i++){
        if(a[i]>max)
            max = a[i];

    }
    printf("Max value is : %d", max);
    return 0;
}

// -34
// 67 > -34 --> true
// 23 > -34 --> true
// 90 > -34 --> true
// 45 > -34 --> true
/*
#include<stdio.h>
void main()
{
    int a[6]={78, 76, 90, 12, 56, 45};
    int max= a[0], i;
    for(i=1; i<7; i++)
    {


        if(a[i]>max)        // 78
                            // 76 > 78 --> false
                            // 90> 78  --> true
                            // 56>78   --> false
                            // 45>78   --> false
        max = a[i];
    }
    printf("Max value is : %d", max);
    return 0;

}
*/
//P-3(sum using array)

#include<stdio.h>
void main()
{
    int a[5], b[5], ab[5];
    int i;
    printf("Enter value of A :\n");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the value of B:\n");
    for(i=0; i<5; i++){
        scanf("%d",&b[i]);
    }
    for(i=0; i<5;  i++)
    {
        ab[i] = a[i] + b[i];


        }
        printf("Value of AB array: \n");

        for(i=0; i<5; i++){
            printf("%d ",ab[i]);
        }
        return 0;

}
*/
#include<stdio.h>
void main()
{


int a[5], i, even_sum=0, odd_sum=0;
   for(i=0; i<5; i++)
   {
       scanf("%d", &a[i]);
   }
   printf("Values of Arrray: ");
   for(i = 0; i<5; i++)
   {
       printf("%d ", a[i]);
       if(a[i] % 2 == 0)
        even_sum = even_sum + a[i];
       else
        odd_sum = odd_sum + a[i];

   }
   printf("\nSum of odd values: %d\n", odd_sum);
   printf("\nSum of even values: %d\n", even_sum);
   return 0;
}

