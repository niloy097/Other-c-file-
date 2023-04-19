/*#include<stdio.h>

int main()

{
    auto int i, j;
    printf("%d %d", i, j);

    

    return 0;
}*/

/*Life of an automatic variable*/
/*#include<stdio.h>

int main()

{

    auto int i = 1;
    {
        auto int i = 2;
        {
            auto int i = 3;
            printf("%d ", i);
        }
        printf("%d ", i);
    }
    printf("%d\n", i);

    return 0;
}*/

/*Register storage classes*/
/*#include<stdio.h>

int main()

{

    register int i;
    pritnf("Enter the val: ");
    scanf("%d", &i);
    printf("The value in resiter storage: %d", i);

    //will give error message for using & in scanf 

    return 0;
}*/


/*Static Storage Class_________******
    Storage: Memory
    Default value: Zero
    Scope: Local to block in which the variable is defined
    Life: Value of the variable persists between  different fucntion calls
    */


   /*#include<stdio.h>
   void increament();
   int main()
   
   {
   
        increament();
        increament();
        increament();
   
    return 0;
   }

   void increament()
   {
        auto int i = 1;
        static int j = 1;
        i = i + 1;
        j = j + 1;
        printf("%d %d\n", i, j);
   }*/

   #include<stdio.h>
   
   int main()
   
   {
   
    static int i;
    printf("%d\n", i); //value automatically initiated zero
   
    return 0;
   }