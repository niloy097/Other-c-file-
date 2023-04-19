#include<stdio.h>
#include<string.h>

int main()

{

    char str[] = "Niloy";
    int len1, len2;
    len1  = strlen(str);
    len2 = strlen("Humpty Dumpty");
    printf("String = %s length = %d\n", str, len1);
    printf("String = %s length = %d\n", "Humpty Dumpty", len2);

    return 0;
}