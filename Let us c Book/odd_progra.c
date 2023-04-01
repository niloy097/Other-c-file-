/*Printing 1 to 10 using different ways of looping-->*/
//Technique-1:
/*#include<stdio.h>

int main()

{

    int i;
    for(i = 1; i<=10;)
    {
        printf("%d ", i);
        i++; // i = i + 1; // i+=1;
    }

    return 0;
}*/

//Technique-2
/*#include<stdio.h>

int main()

{

    int i = 1;
    for(;i<=10; i=i+1)
    {
        printf("%d ", i);
    }

    return 0;
}*/

//Technique-3
/*#include<stdio.h>

int main()

{

    for(int i = 10; i; i--)
    {
        printf("%d ", i); //reverse 10 to 1(though not similar to the questions)
    }

    return 0;
}*/
//Technique-4;

/*#include<stdio.h>

int main()

{

    for(int i = 1; i<=10; printf("%d ", i++));

    return 0;
}*/

//Technique- 5
/*#include<stdio.h>

int main()

{
   
    int i;
    for(scanf("%d", &i); i<=10; i++)
    {
        printf("%d ", i);
    }

    return 0;
}*/
//Technique- 6
/*
#include<stdio.h>

int main()

{

    int i = 1;
    for(;i<=10;)
    {
        printf("%d ", i);
        i=i+1;
    }

    return 0;
}
*/
//Technique-6
/*#include<stdio.h>

int main()

{

    int i;
    for(i = 0; i++<10;)
    {
        printf("%d ", i);
    }

    return 0;
}*/
//Technique-6
/*#include<stdio.h>

int main()

{

    int i;
    for(i = 0; ++i<=10;)
    {
        printf("%d ", i);
    }

    return 0;
}*/