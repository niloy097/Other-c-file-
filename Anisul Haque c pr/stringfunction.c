//Passing string in function---->
#include<stdio.h>
void display(char str[])
{
  printf("The string is: %s", str);
}

int main()
{
  char str[] = "Naeem Biswasa Niloy";
  display(str);

}