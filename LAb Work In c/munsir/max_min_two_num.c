#include<stdio.h>
int max(int x, int y);
int min(int x, int y);
int main()

{

    int a, b;
    scanf("%d %d", &a, &b);
    int mx  = max(a, b);
    printf("%d\n", mx);
    int mn = min(a, b);
    printf("%d\n", mn);

    return 0;
}

int max(int x, int y)
{
   if(x > y)
   {
    return x;
   }
   else 
   {
    return y;
   }
}

int min(int x, int y)
{
   if(x < y)
   {
    return x;
   }
   else 
   {
    return y;
   }
}