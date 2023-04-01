//Declearing array:
/*
#include<stdio.h>
int main()
{
    char a[] = "My name is 'Naeem Biswass Niloy'";
    printf("%s\n", a);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name:\n");
    scanf("%s", name);
    printf("%s", name);
    return 0;
}
*/
//Using gets:
/*
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name:\n");
    gets(name);
    printf("%s", name);
    return 0;
}
*/
//Finding null character:
/*
#include<stdio.h>
int main()
{
    char str[] = "abc";

    int i=0;
    while(1){
        printf("%d - %c \n", i, str[i]);
        if(str[i] == '\0'){        // '\0' define null character;
            break;
        }
        i++;
    }
    return 0;
}
*/
/*
#include<stdio.h>
void main()
{
    char name[20], age[20], cgpa[20];
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%s", age);
    printf("Enter Cgpa: ");
    scanf("%s", cgpa);
    printf("Your Details:\n Name: %s\n Age: %s\n Cgpa: %s\n ", name, age, cgpa);

}
*/
/*
#include<stdio.h>
int main()
{
    char a[] = "GALIB is a gay";
    printf("%s \n", a);
    return 0;
}
*/
//str practice-
#include<stdio.h>
int main()
{
char name[50];
printf("Enter your name: \n");
scanf("%s", name);
printf("Hello! %s");
return 0;
}
