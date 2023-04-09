#include<stdio.h>
#include<math.h>

int main()

{

    int a = 3, b = 5, c = 7;
    float s = (float)(a + b + c)/2;
    printf("%.2f\n", s);

    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.2f\n", area);

    return 0;
}