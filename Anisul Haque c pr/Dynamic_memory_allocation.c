
//Dynamic memory allocatkon--->
/*#include<stdio.h>
#include<stdlib.h> // 1. malloc 2. calloc 3. free 4. realloc
int main()
{
    int *ptr;
    //ptr = (int *)malloc(5 * sizeof(int));  //Malloc takes 1 parameter(just size)
    ptr = (int *)calloc(5, sizeof(int)); //Calloc takes 2 parameter
    if(ptr == NULL)
    {
        printf("Memory not allocated!\n");
    }
    else{
        printf("Memory allocation successful.\n");
    }
   
   ptr = (int *)realloc(5, sizeof(int)); //Reallcation takes 2 parameter
}*/


//Malloc---->


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *) malloc(6 * sizeof(int));
    printf("Enter the value for Dynamic array: ---->\n");
    for(int i = 0; i<5; i++)
    {
        printf("Enter the value for[%d]'th element: ", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("\n\n");
    printf("You have entered:---->\n");
    for(int i = 0; i<5; i++)
        {
            printf("%d ", ptr[i]);
            
        }


}


//Usages of calloc--->
#include<stdio.h>
#include<stdlib.h>


int main()

{

    int n;
    printf("How many integers u want to put: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *) calloc(n, sizeof(int));

    for(int i = 0; i<n; i++)
    {
        printf("Enter the [%d]'th element: ", i+1);
        scanf("%d", &ptr[i]);
    }
     printf("You have entered--->");
     for(int i= 0; i<n; i++)
     {
        printf("%d ", ptr[i]);
     }

     //free(ptr) //free the memory
    return 0;
}




//Re-allocation----->>>>

/*realloc used to allocate memory of new size using the previous pointer and size

    syntax: ptr = realloc(ptr, new_size);

    */


#include<stdio.h>
#include<stdlib.h>

int main()

{
     int *ptr;
     ptr = (int *) malloc(6 * sizeof(int));
     for(int i = 0; i<6; i++)
     {
        printf("Enter the value for [%d]'th element: ", i+1);
        scanf("%d", &ptr[i]);
     }
     printf("The value u've entered: \n");
     for(int i = 0; i<6; i++)
     {
        printf("%d ", ptr[i]);
        
     }
     printf("\n");
     ptr = realloc(ptr, 10 * sizeof(int));
     for(int i = 0; i<10; i++)
     {
        printf("Enter the value for [%d]'th element: ", i+1);
        scanf("%d", &ptr[i]);
     }
     printf("The value u've entered: \n");
     for(int i = 0; i<10; i++)
     {
        printf("%d ", ptr[i]);
        
     }




    
    return 0;
}
