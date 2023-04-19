/*#include<stdio.h>

void areaperi(int r, float *a, float *p);
int main()
{

    int radius;
    float area, perimeter;
    printf("Enter radius of a circle: ");
    scanf("%d", &radius);
    areaperi(radius, &area, &perimeter);
    printf("Perimeter: %f\nArea: %f\n", perimeter, area);


    return 0;
}

void areaperi(int r, float *a, float *p)
{
    *a = 3.1416 * r * r;
    *p = 2 * 3.1416 * r; 
}*/

#include<stdio.h>
void areaperi(int x, int y, int *a, int *p);
int main()

{
    //area and perimeter of a rectangle--->
    int a, b;
    int area, perimeter;
    printf("Enter length and breadth: ");
    scanf("%d%d", &a, &b);
    areaperi(a, b, &area, &perimeter);
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
    

    return 0;
}

void areaperi(int x, int y, int *a, int *p)
{
    *a = x * y;
    *p = 2*(x + y);
}