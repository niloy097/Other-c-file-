#include<stdio.h>
void xstrcpy(char *s, char *s1);
int main()

{

    char source[] = "Kiron Mala", target[20];
    xstrcpy(target, source);
    printf("Source String: %s\n", source);
    printf("Target string: %s\n", target);

    return 0;
}

void xstrcpy(char *t, char *s)
{
    while(*s != '\0')
    {
        *t = *s;
        t++;
        s++;
    }
}
