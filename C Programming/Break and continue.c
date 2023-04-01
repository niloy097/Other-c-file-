/*
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=3;i++)
    {
        printf("Let me go\n");
        if(i==2)
            break;
        printf("*\n");
        printf("* *\n");
    }
    return 0;
}
*/
/*
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=3;i++)
    {
        printf("Let me go\n");
        if(i==2)
            continue;
        printf("*\n");
        printf("* *\n");
    }
    return 0;
}
*/
/*
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
        {
            if(i%2==0)
                continue;
            printf("%d\n",i);
        }
        return 0;

}
*/
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
        {
            if(i%2==0)
                break;
            printf("%d\n",i);
        }
        return 0;

}
