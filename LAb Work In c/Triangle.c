/*IF lengths of three sides of a triangle are through the keyboard,
write a programe to find the area of the triangle*/
/*#include<stdio.h>
#include<math.h>

int main()

{

    /*
    formulla for tringle are if a, b and c is length of three sides of that triangel
    2s =  a + b + c
    s  = sqrt(s * (s-a)*(s-b)*(s-c))
    */


   float a, b, c, s, area;
   printf("Enter the a , b, c respectivly: ");
   scanf("%f %f %f", &a, &b, &c);
   s = (a + b + c)/2;
   area = sqrt(s * (s - a) * (s - b) * (s - c));
   printf("The area of a trinagle is: %.2f", area);

    return 0;
}