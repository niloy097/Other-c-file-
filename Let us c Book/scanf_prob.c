/*#include<stdio.h>

int main()

{

    char another;
    int num;
    do{
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Squre of %d is %d\n", num, num * num);
        printf("Want to enter another number y/n");
        fflush(stdin);
        scanf("%c", &another);
        
    } while(another == 'y');

    return 0;
}*/

//Another version-->
/*#include<stdio.h>

int main()

{
   
    char another = 'y';
    char name[100];
    while(another == 'y')
    {
        printf("Enter the name: ");
        scanf("%s", name);
        printf("Want to enter another name? y/n: ");
        fflush(stdin);
        scanf("%c", &another);
    }
    

    return 0;
}*/