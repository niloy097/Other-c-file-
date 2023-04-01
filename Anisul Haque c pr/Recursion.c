//Slolving with recursion function--->
/*#include<stdio.h>
int sum(int x)
{
  if(x == 0)
  return 0;
  else
  return x+sum(x-1);
     
}


int main()
{
  int result = sum(10); //First 10'th number will be add;
  printf("The sum of first 10'th number is: %d", result);
}*/


/*#include<stdio.h>

 int funcOnAdd(int x)
{
    if(x == 0)
    {
        return 0;
    }
    else{
        return x + funcOnAdd(x - 1);
    }

    
}
 

 
 
 10 + funcOndAdd(10-1)
 10 + 9 + funcOnAdd(9-1)
 10 + 9 + 8 + funcOnAdd(8-1)
 10 + 9 + 8 + 7 +.......
 ......1+funcOnadd(1-1)
 10 + 9 +.......1+ 0 = 55
 
 

int main()

{ 
    int a;
    printf("Enter the term for add: ");
    scanf("%d", &a);
    int x = funcOnAdd(a);
    printf("The sum is: %d", x);

    return 0;
}
*/



 



/*
//Printing star with recursive function--->
#include<stdio.h>

void makeStarPattern(int x)
{
    if(x == 1)
    {
        printf("*\n");
    }
    
      else{

        makeStarPattern(x-1);
        for(int i=1; i<=(2*x-1); i++)
        {
            printf("*");
        }

        printf("\n");
        }
        
        
}



  pass x = 3 == *****\n
  makeStarPattern(3-1) == ***\n
     makeStarPattern(2-1) == *\n (return -1)
       



int main()

{  

    makeStarPattern(3);

    return 0;
}

*/





/*#include<stdio.h>
int fact(int n)
{
    if (n==1)
       return 1;
       else
       return n*fact(n-1);
}

int main()
{
    int result = fact(5);
    printf("The factorial of 5 is: %d", result);
}*/