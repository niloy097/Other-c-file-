/*#include<stdio.h>

int main()

{

    int i, j;
    for(i = 1; i<=2; i++)
    {
        for(j = 1;  j<=2; j++)
        {
            if(i == j) //This if block will work for single statement which is only continue,
            //printf will not work for this situation.
            
              
             continue; 
             printf("%d %d\n", i, j);
                
               
        }
    }


    return 0;
}*/
//Little modifiacation in this same programe-->
#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i<=2; i++)
    {
        for(j = 1; j<=2; j++)
        {
            if(i == j)
            {
                continue;
            }
            else
            {
                printf("%d %d\n", i, j);
            }
        }
    }
}