//Problem-1(We3Resource)[Basic Declaration and Expression]
/*
#include<stdio.h>
void main()
{
    char str_name[20], str_DOB[20];
    int mob;
    printf("Give your Details bellow: \n");
    printf("Your name: ");
    scanf("%s", str_name);
    printf("Your DOB: ");
    scanf("%s", str_DOB);
    printf("Your Mobile Number: ");
    scanf("%d", &mob);
    printf("\n");
    printf("Your Details: \n");
    printf("Your Name: %s\n", str_name);
    printf("Your DOB: %s\n", str_DOB);
    printf("Your Mobile Number: %d\n", mob);
    printf("\n");
    printf("Thank You!");
}
*/
////Problem-3(We3Resource)[Basic Declaration and Expression]
/*
#include<stdio.h>
void main()
{
    printf("                                  ######\n");
    printf("                                  #\n");
    printf("                                  #\n");
    printf("                                  ###\n");
    printf("                                  #\n");
    printf("                                  #\n");
    printf("                                  #\n");

    return 0;


}
*/
//Problem4-(We3Resource)[Basic Declaration and Expression]
/*
#include<stdio.h>
int main()
{
    char char_1 = 'X', char_2 = 'M', char_3 = 'L';
    printf("The reverse of %c%c%c is %c%c%c.",char_1, char_2, char_3,
                                               char_3, char_2, char_1);
    return 0;
}
*/
////Problem5-(We3Resource)[Basic Declaration and Expression]
/*
#include<stdio.h>.
int main()
{
    int height = 7, width = 5, Perimeter, Area;
    Perimeter = 2*(height+width);
    Area= height*width;
    printf("Perimeter of the rectangle = %d inches\n", Perimeter);
    printf("Area of rectange = %d square inches\n", Area);
    return 0;

}
*/
//Problem5-(We3Resource)[Basic Declaration and Expression]
/*
#include<stdio.h>
int main()
{
    float radius, Perimeter, Area;
    printf("The radius of circle: ");
    scanf("%f", &radius);
    Perimeter = 2*3.14*radius;
    Area = 3.24*radius*radius;
    printf("\nPerimeter of the Circle = %f", Perimeter);
    printf("\nArea of the Circle = %f", Area);
    return 0;
}
*/
//Problem-7(We3Resource)[Basic Declaration and Expression])
/*
#include<stdio.h>

int main()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    printf("a + c = %d\n", a + c);
    printf("x + c = %f\n", x + c);
    printf("dx + x = %f\n", dx + x);
    printf("((int)dx) + ax = %ld\n", ((int)dx) + ax);
    printf("a + x = %f\n", a + x);
    printf("s + b =  %d\n", s + b);
    printf("ax + b = %ld\n", ax + b);
    printf("s + c =  %hd\n", s + c);
    printf("ax + c = %ld\n", ax + c);
    printf("ax + ux = %lu\n", ax + ux);
}
*/
//Problem-8((We3Resource)[Basic Declaration and Expression])
/*
#include <stdio.h>
int main()
{
    int days, years, weeks;

    days = 1329;

    // Converts days to years, weeks and days
    years = days/365;
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);

    return 0;
}
*/
//Problem-11
/*
#include<stdio.h>
int main()
{
   float weight_item1= 15, weight_item2= 25;
   int no_of_item1= 5, no_of_item2= 4;
   float Total1, Total2;
   Total1 = weight_item1 * no_of_item1;
   Total2 = weight_item2 * no_of_item2;
   float avg = (Total1+Total2)/(no_of_item1+no_of_item2);
   printf("Average Value = %f\n", avg);
   return 0;

}

*/
/*
#include<stdio.h>
void main()
{
    int ID, working_hours, salary_amount_per_hour,Salary;
    printf("Employees ID: ");
    scanf("%d", &ID);
    printf("Working Hrs: ");
    scanf("%d", &working_hours);
        printf("Salary amount/hr: ");
        scanf("%d", &salary_amount_per_hour);
        Salary = working_hours*salary_amount_per_hour*3;
    printf("\n Details: \n");
    printf("Employees ID = %d\n", ID);
    printf("Salary = U$ %d\n", Salary);
}
*/
/*
#include<stdio.h>
int main()
{
    char id[10];
    int hour;
    double value, salary;
    printf("Input the Employee ID(MAX. 10 chars): ");
    scanf("%s", &id);
    printf("\nInput the working hrs: ");
    scanf("%d", &hour);
    printf("\nSalary amount/hr: ");
    scanf("%lf", &value);
    salary = value * hour;
    printf("\nEmployees ID = %s\nSalary = U$ %.2lf\n", id, salary);
    return 0;
}
*/

int main()
{
    int x, y, z, result, max;
    printf("\nInput the first integer: ");
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);
    printf("\nInput the third integer: ");
    scanf("%d", &z);
    result=(x+y+abs(x-y))/2;               //result=(x+y+abs(x-y))/2;
                                           //max=(result+z+abs(result-z))/2;

    max=(result+z+abs(result-z))/2;
    printf("\nMaximum value of three integers: %d", max);
	printf("\n");
    return 0;
}
