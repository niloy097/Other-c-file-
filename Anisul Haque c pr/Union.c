/*
#include<stdio.h>
union test
{
   int x, y;
};

int main()
{
   union test test1;

   test1.x = 10;
   printf("Test1.x  = %d\n", test1.x);
   printf("Test1.y  = %d\n", test1.y);  
   
   //In union Most large size is counted. And every member share it's location
   //Here I initialized x in union and automatically y is = x because they shared same locattion in memory

  

}
*/



//Size of union-->
/*
#include<stdio.h>
union test1{
   int x, y;

};

union test2
{
   char ch;
   int t;
};

union test3
{
   char name[20];
   double d;
};

int main()
{  union test1 t1;
  union test2 t2;
  union test3 t3;
  //Checking size of all union--->
  printf("Size of t1: %d\n", sizeof(t1));
  printf("Size of t2: %d\n", sizeof(t2));
  printf("Size of t3: %d\n", sizeof(t3));
}*/