//Creating while loop;
/*
#include<Stdio.h>
int main()
{
  int i;
  i=1;
  while (i<=100)
  {
    printf("Tui ekta pagol\n");
    i++;
  }

  return 0;
  
}

*/

//Do while loop--->
/*
#include<stdio.h>
int main()
{
  int i;
  i=1;
  do {
    printf("You are a gay\n");
    i++;
  }
  while (i<=10);
  
  
}
*/

//Break and continue statement----->
#include<stdio.h>
int main()
{
  int i;
  for(i=1; i<=20; i++)
  {
    if(i % 3 == 0)
    continue;
    printf("%d\n",i);

    if(i == 10)
    break;
    
  }
}


/*
Project-1: Password system--->


#include<stdio.h>
int main()
{
    int let_psw = 4092; //System password database 
    int password;
    int attempt = 1;
    while(password != let_psw)
    {   
         
        
        printf("Enter the password: ");
        scanf("%d", &password);
        
        if(password == let_psw)
        {
            printf("Your password is correct!\n");
            printf("Attempt: %d\n", attempt);
        }
        else
        {
            printf("Your password is incorrect!\n");
            printf("Attempt: %d\n", attempt);
            if(attempt>2)
            {   printf("Login attemp passed! System blocked!");
                break;
            }
            else
            {
                printf("Enter password again--->\n");
            }
            
        }
        
       attempt++;
       
    }
    
 
    
}

*/