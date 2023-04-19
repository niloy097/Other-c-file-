//Prob-[C], a--->
#include<stdio.h>
void circular_shift(int *a, int *b, int *c);
int main()

{

    int x = 5, y = 8, z = 10;
    circular_shift(&x, &y, &z);
    printf("y = %d\nz = %d\nx = %d", y, z, x);

    return 0;
}
void circular_shift(int *x, int *y, int *z)
{
   int temp = *x, temp1 = *y;
   *x = *z;
   *y = temp;
    *z = temp1;
   

   

}