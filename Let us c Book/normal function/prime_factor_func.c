#include<stdio.h>
#include<math.h>

void prime_factor(int l)
{
    int count= 0;
    for(int i = 1; i<=l; i++)
    {
       if(l % i == 0)
       {
        
         if(i == 1)
         {
            continue;
            //   printf("%d ", i);
         }
         else if( i == 2)
         {
            printf("%d ", i);
         }
         else
         {
            for(int x = 2; x<i; x++)
            { 
                if(i % x == 0)
                {
                    count++;
                }
               
            }
            if(count == 0)
             {
               printf("%d ", i);
             }
           count = 0;
            
         }
       }
    }
}

int main()

{

    int posint;
    
    printf("Enter positive integer number: ");
    scanf("%d", &posint);
    prime_factor(posint);
    

    return 0;
}