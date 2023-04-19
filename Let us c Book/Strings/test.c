#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    int i = 0;
    int count = 0;
    while(str2[i] != '\0')
    {
        if(str1[i] == str2[i])
        {
            
            continue;
            
        }
        else
        {
            break;
        }
        i++;
    }

    if(i == strlen(str1))
    {
        printf("%d\n", 1)
    }

    
}