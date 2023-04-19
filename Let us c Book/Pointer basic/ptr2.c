/*#include<stdio.h>

int main()

{

    int i= 3;
    int *j;
    j = &i;
    printf("Address of i = %d\n", &i);
    printf("Address of i = %d\n", j);
    printf("Address of j = %d\n", &j);
    printf("Val of j = %d\n", j);
    printf("Val of i = %d\n", i);
    printf("Val of i = %d\n", *(&i));
    printf("Val of i = %d", *j);

    return 0;
}*/

#include<stdio.h>

int main()

{

    int i = 3, *j, **k;
    j = &i;
    k = &j;
    printf("Address of i: %d\n", &i);
    printf("Address of i: %d\n", j);
    printf("Address of i: %d\n", *k);
    printf("Address of j: %d\n", &j);
    printf("Address of j: %d\n", k);
    printf("Address of k: %d\n", &k);
    printf("Value of j: %d\n", j);
    printf("Value of k: %d\n", k);
    printf("Value of i: %d\n", i);
    printf("Value of i: %d\n", *(&i));
    printf("Value of i: %d\n", *j);
    printf("Value of i: %d\n", **k);


    return 0;
}