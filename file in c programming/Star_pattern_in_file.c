#include<stdio.h>

int main()

{

    int row, col, term;
    printf("Enter the term: ");
    scanf("%d", &term);

    FILE *pattern;
    pattern = fopen("Pattern.txt", "w");
    fprintf(pattern, "N = %d\n\n", term);
    for(row = 1; row<=term; row++)
    {
        for(col = 1; col<=row; col++)
        {
            fprintf(pattern, "* ");
        }
        fprintf(pattern, "\n");
    }

    printf("Pattern created successfully to file");

    return 0;
}