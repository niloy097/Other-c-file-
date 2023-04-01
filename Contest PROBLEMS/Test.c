#include<stdio.h>

int main()

{
    char str[100001];
    scanf("%s", &str);
    for(int i = 0; str[i]; i++)
    {
        printf("%c ", str[i]);
    }
    

    return 0;
}