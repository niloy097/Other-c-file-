/*
#include<stdio.h>
int main()
{
  int x;
  x = 10;
  printf("%d", x);
  printf("%p", &x); //this will print address of x variable!
}
*/
//Use '*' to declare a pointer type variable.
/*
#include<stdio.h>
int main()
{
  int x;
  x=10;
  int *ptr;
  ptr=&x;

  printf("%d\n", x); //this will print the value of x.

  printf("%p\n", &x); //this is will print the address(memory) of x variable.
  printf("%p\n", ptr); //This is will print the address.
}
*/
//Using Pointer Variable Values.
/*
#include<stdio.h>
int main()
{
  char ch = 'a';
  char *ptr;
  ptr = &ch;

  printf("%c\n", ch); //This will print 'a'.
  printf("%c", *ptr);
  return 0;
}
*/
/*
#include<stdio.h>
int main()
{
  double cgpa = 3.70;
  double *ptr;
  ptr = &cgpa;

  printf("cgpa: %.2lf\n", cgpa);  //Output: 3.70
  printf("cpga: %.2lf", *ptr);  // Output: 3.70
  return 0;
}
*/
/*
#include<stdio.h>
int main()
{
  int x = 10, y = 20;
  int *ptr1, *ptr2;

  ptr1 = &x;
  ptr2 = &y;

  int sum;

  sum = *ptr1 + *ptr2;
  printf("Sum: %d", sum);
  return 0;

}
*/
//Practice-------->
#include<stdio.h>
int main()
{
  
  int x = 10;
  int *p;
  p = &x;
  printf("Value of x: %d\n", x);
  printf("Value of x: %d\n", *p);
  return 0;
}

/*
#include<stdio.h>
int main()

{
    int x = 20;
    int *Niloy;
    Niloy = &x;

    printf("The Age of programmer is: %d\n", x);
    printf("The Age of programmer is: %d", *Niloy);

    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    printf("Pointer in C: Introduction\n");

    char x = 'Y';
    char *p;
    p = &x;
    printf("CharACTER :  %c", *p);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int x, y, z;
    x = 11;
    y = 12;
    z = 20;

    int *ptr1, *ptr2, *ptr3;
    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &z;

    if(*ptr1 > *ptr2 && *ptr1 > *ptr3)
    {
        printf("The largest number is: %d\n", *ptr1);
    }
    else if (*ptr2>*ptr1 && *ptr2>*ptr3)
    {
        printf("The argest number is: %d\n", *ptr2);
    }
    else
    {
        printf("The largest number is: %d\n", *ptr3);
    }
    return 0;
    
}
/*