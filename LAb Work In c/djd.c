#include<stdio.h>

int main()

{

    int math, physics, chemistry, biology, gk;
    int total, percentage;
    
    printf("Enter the value for math: ");
    scanf("%d", &math);


 printf("Enter the value for Physics: ");
    scanf("%d", &physics);

     printf("Enter the value for chemistry: ");
    scanf("%d", &chemistry);

 printf("Enter the value for biology: ");
    scanf("%d", &biology);

     printf("Enter the value for gk: ");
    scanf("%d", &gk);

     total = math + physics + chemistry + biology + gk;
     percentage = (total * 100)/500;
     printf("The percentage is: %d %c\n", percentage, '%');

    if(percentage >= 90)
    {
        printf("Grade: A\n");
    }
    else if(percentage >= 80)
    {
       printf("Grade: B\n");
    }
    else if(percentage >= 70)
    {
        printf("Grade: C\n");
    }
    else if(percentage >= 60)
    {
        printf("Grade: D\n");
    }
    else if(percentage >= 40)
    {
        printf("Grade: E\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    

    return 0;
}