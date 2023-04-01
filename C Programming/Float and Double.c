/*
#include<stdio.h>
int main()
{
    printf("The float size is :%d\n", sizeof(float));
    printf("The double size is :%d\n", sizeof(double));

}
*/
/*
#include<stdio.h>
int main()
{
    float a= 3.4;
    float b= 6.7;
    printf("The devision is : %.3f\n", a/b);
}
*/
/*
#include<stdio.h>
int main()
{
    float a;
    a= 4/3;
    printf("%f", a); // The output is miracle.!!!!!!
    return 0;
}
*/
/*
#include<stdio.h>
void main ()
{
    float a;
    a= 4.0/3;
    printf("%.3f",a); //This is the different compare to previous.
    return 0;
}
*/
#include<stdio.h>
void main()
{
    double a, b, c, d;
    a= 12;
    b= 10;
    c= 10;
    d= a*b/c;
    printf("Production is : %.3lf\n", d); //"%lf" is the placeholder of double.
    return 0;

}
