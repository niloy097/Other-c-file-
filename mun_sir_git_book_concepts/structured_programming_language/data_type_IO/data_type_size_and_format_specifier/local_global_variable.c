#include<stdio.h>
/*They are the global var for all user define function*/
int y;
int z;
int p;
int q;

int main()

{
/*These are the local variable for this main fucntion block*/
    int a;
    int b;
    float c;

    {
        int x; //here x is the local var for this block;
    }

    //x = 56; // if we try to assign value out of the block, it will warn us and undeclared message
    a = 7, b = 7, c = 34.56; // But a, b, c are the global var in main function at every block;

    return 0;
}