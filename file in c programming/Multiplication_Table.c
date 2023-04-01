#include<stdio.h>

int main()

{
    int n;
    FILE *M_table;

    printf("Which multiplication table u want: ");
    scanf("%d", &n);
    M_table = fopen("Multi table.txt", "w");
    for(int i = 1; i<=10; i++)
    {
        fprintf(M_table, "%d * %d = %d\n", n, i, (n*i));
    }
    printf("Successfully to created multiplication table %d", n);
    fclose(M_table);
    return 0;
}