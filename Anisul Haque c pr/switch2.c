#include<stdio.h>
#include<math.h>
int main()
{
  char a;
  printf("eNTER  any char: ");
  scanf("%c", &a);
  
  switch (a)
  {
    case '+':
    {
        printf("This is plus.\n");
        break;
    }
    case '-':
    {
      printf("This is minus.\n");
      break;
    }
    default : 
    printf("This is wrong haracter: ");
  }
}