/*

// Scalene tringle area general formula
// 1/2 * b * h;
#include<stdio.h>
float area_scalene(int x, int y);
int main()

{
   
   int b, h;
   scanf("%d %d", &b, &h);
   float area;
   area = area_scalene(b, h);
   printf("%0.2f\n", area);

    return 0;
}

float area_scalene(int x, int y)
{
    float a;
    a = 0.5 * x * y;
    return a;
}

*/

//Scalane trinagle area using perimeter.
// semi-perimeter s = (a+b+c)/2; // a b c = Length of  three sides of a scalene triangle.
// Area = sqrt(s * (s - a) * (s - b) * (s - c)).

/*
#include<stdio.h>
#include<math.h>
float Area_scalene_p(int x, int y, int z);

int main()

{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float area = Area_scalene_p(a, b, c);
    printf("%.2f\n", area);
    

    return 0;
}

float Area_scalene_p(int x, int y, int z)
{
    float s = (x + y + z)*(1.0)/2;
    float area = sqrt(s * (s - x) * (s - y) * (s - z));
    return area;
}
*/



