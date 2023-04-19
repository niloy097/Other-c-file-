#include<stdio.h>
#include<string.h>

int main()

{

    char str[100];
    gets(str);
    int len = strlen(str);
    int pos, extract;
    scanf("%d %d", &pos, &extract);

    if(extract > len)
    {
        for(int i = pos; i < len; i++)
        {
            printf("%c", str[i]);
        }
    }
    else 
    {
        for(int i = pos; i < (pos+extract); i++)
        printf("%c", str[i]);
    }

    return 0;
}