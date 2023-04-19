//This will be a infinity func calling-->

/*#include<stdio.h>
void ganja()
{
    main();
    printf("I called main\n");
}

int main()

{

    printf("I am main\n");
    ganja();
    return 0;
}*/
/*Sending and receving values between fuctions*/
#include<stdio.h>
int calsum(int x, int y, int z);
int main()

{
    int a, b, c;
    printf("Enter any three numbr: ");
    scanf("%d%d%d", &a, &b, &c);
    int sum = calsum(a, b, c);
    printf("Sum = %d\n", sum);
    return 0;
}

int calsum(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return d;
}

