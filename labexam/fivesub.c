#include<stdio.h>

int main()

{

    int math, phy, chem, bio, cal;
    printf("Enter the marks for math: ");
    scanf("%d",&math);

    printf("Enter the marks for physics: ");
    scanf("%d",&phy);

    printf("Enter the marks for chem: ");
    scanf("%d",&chem);

    printf("Enter the marks for bio: ");
    scanf("%d",&bio);

    printf("Enter the marks for calculus: ");
    scanf("%d",&cal);
    if(math >100 || phy >100 || chem>100 || bio >100 || cal >100)
    {
        printf("Wrong input!");
    }
    else
    {
    int sum_of_five_sub = math + phy + chem + bio + cal;
    int percentage = (sum_of_five_sub * 100)/500;

    printf("The sum of five sub is: %d\n", sum_of_five_sub);
    printf("The percentage of five sub is: %d %c", percentage, '%');

    }

    return 0;
}