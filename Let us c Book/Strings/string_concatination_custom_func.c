#include<stdio.h>
int xstrlen(char str[]);
int main()

{

    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    int d1 = xstrlen(str1);
    int d2 = xstrlen(str2);
    char newstr[d1 + d2 + 2];
    // printf("Len of str1: %d\n", xstrlen(str1));
    // printf("Len of str2: %d\n", xstrlen(str2));
    for(int i = 0; i < d1; i++)
    {
        newstr[i] = str1[i];
    }
    newstr[d1] = ' ';
    for(int i = 0; i < d1 + d2 + 2; i++)
    {
        newstr[d1+1+i] = str2[i];
    }

    printf("%s\n", newstr);

    return 0;
}

int xstrlen(char str[])
{   
    int i = 0;
    int len = 0;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }

    return len;

}