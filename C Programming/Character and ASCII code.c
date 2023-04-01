/*
#include<stdio.h>
void main()
{
    char my_char;
    my_char= 'X';
    my_char= '3';    // compiler always takes the latest variable value!
    printf("%c\n",my_char);
}
*/

/*
#include<stdio.h>
void main()
{
   char char_1= 'A';
   char char_2= 'E';
   char char_3= 'I';
   char char_4= 'O';
   char char_5= 'U';

    printf("The first character is : %c\n", char_1);
    printf("The second character is : %c\n", char_2);
    printf("The third character is : %c\n", char_3);
    printf("The fourth character is : %c\n", char_4);
    printf("The fifth character is : %c\n", char_5);

    return 0;


}
*/
/*
#include<stdio.h>
void main()
{
    char first='A', second='B';
    printf("%c\t%c", first, second);
    return 0;


}
*/

//ASCII Code/ Value:


#include<stdio.h>
int main()
{
    char x = 'A';
    printf("%d", x); //The ASCII code for capital 'A' is 65
    return 0;

}


#include<stdio.h>
int main()
{
    int n;
    printf("Enter any ASCII value: ");
    scanf("%d", &n);
    printf("The ASCII character is: %c", n);
    return 0;
}

