#include<stdio.h>
int xstrlen(char *s);
int main()

{

    char str[] = "Niloy";
    int len1, len2;
    len1  = xstrlen(str);
    len2 = xstrlen("Humpty Dumpty");

    printf("String = %s length = %d\n", str, len1);
    printf("String = %s length = %d\n", "Humpty Dumpty", len2);

    return 0;
}

int xstrlen(char *s)
{
    int len = 0;
    while(*s != '\0')
    {
        len++;
        s++;
    }

    return len;
}