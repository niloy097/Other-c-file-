/*String to number*/
#include<stdio.h>
#include<string.h>

int main()

{

    char number_str[10]; //123
    scanf("%s", number_str);
    int number = 0;
    for(int i = 0; i < strlen(number_str); i++)
    {
        int char_to_num = number_str[i] - 48;
        number = number * 10 + char_to_num;
    }

    printf("%d", number);


    return 0;
}