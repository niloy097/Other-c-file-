/*#include<stdio.h>
#include<stdlib.h>

int main()

{

    int goals;
    printf("Enter th number of goals scored against india: ");
    scanf("%d", &goals);
    if(goals <= 5)
    {
        goto sos;
    }
    else
    {
        printf("About time soccer players learnt C\n");
        printf("and said goodbye to soccer\n");
        exit(1);
    }
    sos:
      printf("To err is human\n");

    return 0;
}*/
//Making an operatin menue--->
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()

{
    
    while(1)
    {
        int x;
        printf("**************************Menu****************************************\n");
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");
        printf("\n\n");
        printf("Enter the option to operation: ");
        scanf("%d", &x);
        switch(x)
        {
            case 1: 
            {
                int i, fact = 1;
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);
                for(int i = 1; i<=num; i++)
                {
                    fact = fact * i;
                }
                printf("The factorial of %d! is: %d\n\n\n", num, fact);
                break;
            }
            case 2:
            {
                    int num;
                    int i;
                    int count = 0;
                    printf("Enter the n: ");
                    scanf("%d", &num);
                    for( i = 2; i<=sqrt(num); i++)
                    {
                        if(num % i == 0)
                        {
                            count++;
                        }
                    }
                    if(count == 0)
                    {
                        printf("This is prime number\n\n\n");
                    }
                    else
                    {
                        printf("Not prime number\n\n\n");
                    }

                break;
            }

            case 3:
            {
                int num;
                printf("Enter the number: ");
                scanf("%d", &num);
                if(num % 2 == 0)
                {
                    printf("This is an even number\n\n\n");
                }
                else
                {
                    printf("This is an odd number\n\n\n");
                }
                break;
            }
            case 4:
            {
                goto exit;
                // exit(0);
            }
            default:
            {
                printf("Wrong option\n\n\n");
            }
        }
    }
   exit:
    printf("Exited\n\n\n");



    return 0;
}