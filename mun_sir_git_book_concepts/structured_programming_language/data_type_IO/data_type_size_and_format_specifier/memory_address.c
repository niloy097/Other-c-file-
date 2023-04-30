#include<stdio.h>
#include<stdlib.h>
/*Memory allocated in data segement(or hip segement or static segment) for initialized global variable*/
int x = 0;
int p = 0;
int q = 0;
int r = 0;

/*Memory allocated in BSS(Block starting segment or uniniti. data segment) for uninitialized global variable*/
int u;
int v; 
int w;

int main()

{
    /*Memory allocated in stack segment for local variable(either it initialized or not)*/
    int z = 0;
    int y[10];
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    /*Memory allocated in hip segement for dynamic memory allocation(either it global or loacal)*/
    int *p = (int*) malloc (sizeof (int) );
    int *n = (int*) malloc (sizeof (int) );
    int *o = (int*) malloc (sizeof (int) );

    printf("%d\n", &x);
    printf("%d\n", &p);
    printf("%d\n", &q);
    printf("%d\n\n", &r);

    printf("%d\n", &u);
    printf("%d\n", &v);
    printf("%d\n\n", &w);

    printf("%d\n", &z);
    printf("%d\n", &y);
    printf("%d\n", &a);
    printf("%d\n", &b);
    printf("%d\n", &c);
    printf("%d\n", &d);
    printf("%d\n", &e);
    printf("%d\n\n", &f);

    printf("%d\n", p);
    printf("%d\n", n);
    printf("%d\n", o);
    
    return 0;
}