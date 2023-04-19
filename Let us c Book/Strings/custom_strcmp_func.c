#include<stdio.h>
int xstrcmp(char str1[], char str2[]);
int main()

{

    

    return 0;
}

int xstrcmp(char str1[], char str2[])
{
    int i = 0;
    int count = 0;
    while(str1[i] != '\0')
    {
        if(str1[i] == str2[i])
        {
            count++;
            return 0;
        }
        else
        {
            break;
        }
        i++;
    }
}