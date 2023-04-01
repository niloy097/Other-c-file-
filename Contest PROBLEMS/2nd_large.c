#include<stdio.h>
int main()
{

        int a, b, c;
        printf("Enter three number: ");
        scanf("%d %d %d", &a, &b, &c);
        if((a>b||a>c)&&(a<c||a<b))
        {
            printf("The 2nd lasst: %d\n",a); 
        }    
         else if((b>a||b>c)&&(b<c||b<a))
       {
             printf("The 2nd lasst: %d\n",b);
       }
         else
       {
            printf("The 2nd lasst: %d\n",c);
       }
         
         
} 
    
