/*#include<stdio.h>
#define capacity 3
int stack[capacity];
int top = -1;
void push(int x)
{ if(top < capacity - 1)
  {top++;
  stack[top] = x;
  printf("Item added succesfully: %d\n", x);}
  else
  {printf("The stack is full!\n");}
}
int pop()
{
  if(top>=0)
  {
    int val = stack[top];
    top--;
    return val;
  }
  printf("Exception pop! emty stack!\n");
  return -1;
}

int peek()
{
  if(top>=0)
  {return stack[top];}
  else
  { printf("Empty stack!\n");
    return -1;
  }
}

int main()
{
  printf("Entering item in stack---->\n");
  peek();
  push(10);
  push(67);
  push(48);
  printf("Pop item is: %d\n", pop());
  push(56);
  printf("The top item of stack is: %d\n", peek());
  
}*/

/*#include<stdio.h>
#define capacity 4
char stack[capacity];
int top = -1;
void push(char ch)
{
  if(top < capacity - 1)
  {
    top++;
    stack[top] = ch;
    printf("Item added succesfully: %c\n", ch);
  }
  else
  {
    printf("The stack is full!\n");
  }
}
int pop()
{
  if(top>=0)
  {
    int val = stack[top];
    top--;
    return val;                                               
  }
  printf("Emty stack!\n");
}
int peek()
{
  if(top>=0)
  {
    return stack[top];
  }
  else
  {
    printf("The stack is Empty!\n");
    return -1;
  }
}
int main()
{
  printf("Iputting stack---->\n");
  peek();
  push('A');
  push('B');
  push('C');
  push('D');
  printf("The pop item is: %c\n", pop());
  push('E');
  printf("The top Item of the stack is: %c\n", peek());
}*/
