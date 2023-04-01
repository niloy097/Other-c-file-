//Global variable.



#include<stdio.h>
int x = 10;
int main()
{
  printf("This is from inside function: %d\n", x);
  display();
}

void display()
{
  printf("This is from dispaly function: %d", x);
}