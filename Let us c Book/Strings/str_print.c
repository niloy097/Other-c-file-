/*#include<stdio.h>

int main()

{

    char name[] = "Niloy";
    // name[2] = '\0'; null termination
    int i = 0;
    while(name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }

    return 0;
}*/

/*#include<stdio.h>

int main()

{

    char name[] = "Kalinagar";
    char *ptr;
    ptr = name;
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}*/

/*#include<stdio.h>

int main()

{

    char name[] = "Niloy_Gubraj";
    int i = 0;
    while(*(name+i) != '\0')
    {
        printf("%c", name[i]); //printf("%c", *(name+i));
        i++;
    }

    return 0;
}
*/
/*#include<stdio.h>

int main()

{

    char name[] = "Niloy";
    printf("%s", name); //can take input through keyboard with scanf("%s", name);

    return 0;
}*/

#include<stdio.h>

int main()

{

    char name[25];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("%s", name);

    return 0;
}