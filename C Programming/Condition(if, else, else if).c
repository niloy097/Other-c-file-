/*
#include<stdio.h>
int main ()
{   int x;

printf("Enter a integer value:");
scanf("%d",&x);
if(x>=10)
    printf("True!\t:):)");

}
*/
//Use of Logical operator ----

/*
#include<stdio.h>
void main()
{
    int x;
    printf("Enter a Value: ");
    scanf("%d",&x);
    if(x>=12 && x<=100)                    // && = and
        printf("Hello Programmers!");      // || = or
    else
        printf("Hello Losers!\n\n :((");
    return 0;

}
*/
/*
#include<stdio.h>
void main()
{
    int x;
    printf("Enter a Integer value: ");
    scanf("%d",&x);
    if (x>10 || x<100)
        printf("Ok!");
    else
        printf("No!");
    return 0;
}
*/
/*
#include<stdio.h>
void main(){
    int ticket_price;
    printf("Enter How much money do u have(TAKA): ");
    scanf("%d",&ticket_price);
    if (ticket_price>=300)
        {printf("\n");
        printf("You can watch Movies!!!\n\n");
    }
    else {
        printf("\n");
        printf("You can't watch movies!!\n\n");

        printf("We are really sorry :(\n\n");
    }
    return 0;

}
*/
/*
#include<stdio.h>
void main()
{
    int x;
    printf("Enter a value : ");
    scanf("%d",&x);
    if (x % 3 == 0 || x % 5 == 0)
        {
            printf("\n");
        printf("This number is DIVISIBLE by 3 or 5.\n");
    }
    else {
             printf("\n");
        printf("This number is NOT DIVISIBLE by 3 or 5. \n");
    }
return 0;
}
*/
/*
#include<stdio.h>
void main()
{
    char vc;
    printf("Enter a character here : ");
    scanf("%c",&vc);
    if (vc == 'a' || vc == 'e' || vc == 'i' || vc == 'o' || vc == 'u' || vc == 'A' || vc == 'E' || vc == 'I' || vc == 'O' || vc == 'U' )
    {
        printf("\n");
        printf("'%c' is a Vowel.\n",vc);
    }
    else
    {printf("\n");
        printf("'%c' is a Consonant.\n",vc);
    }
return 0;

}
*/
/*
#include<stdio.h>
void main()
{
    int x;
    printf("Enter a Enter number : ");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("'%d'This is an Even number.\n",x);
    }
    else
    {
        printf("'%d'This is an Odd number.\n",x);
    }
    return 0;
}
*/
/*
#include<stdio.h>
void main()
{
    int x;
    printf("Enter a value here : ");
    scanf("%d",&x);
    if(x==1){
        printf("Hi!\n");
    }
    else if(x==2)
    {
        printf("Hello!\n");
    }
    else if(x==3){
        printf("Good bye\n");
    }
    else
    {
        printf("Error input\n!!!!!!");
    }
    return 0;
}
*/
#include<stdio.h>
void main()
{
    int age;
    printf("Input your Age : ");
    scanf("%d",&age);
    if(age<2)
    {printf("\n");
        printf("You are 'Infant'\n");
    }
    else if(age>=2 && age<10)
    {printf("\n");
        printf("You are 'child'\n");
    }
    else if(age>=10 && age<20)
    {printf("\n");
        printf("You are 'Teenage'\n");
    }
    else if(age>=20 && age<30)
    {printf("\n");
        printf("You are 'Adult'\n");
    }
    else{
            printf("\n");
        printf("You are 'Old'\n");
    }
    return 0;
}
