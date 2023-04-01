//Problem-1: Reading Integer from a txt file using FILE in c--->


#include<stdio.h>

int main()

{

    FILE *niloy;

    int x, y, z;
    niloy = fopen("File_Problem_on_Reading_three_integer.txt", "r");

    fscanf(niloy, "%d %d %d", &x, &y, &z);

    printf("The values are: %d %d %d", x, y, z);



    return 0;
}