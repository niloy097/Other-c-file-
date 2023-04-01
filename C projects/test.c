/*#include<stdio.h>

int main()

{

    for(int i = 1; i<=10; printf("%d ", i++))
    ;

    return 0;
}*/

#include<stdio.h>

int main()

{

    int i;
    for(scanf("%d", &i); i<=10; i++)
     printf("%d ", i);

    return 0;
}