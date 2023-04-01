#include<stdio.h>
#include<windows.h>

int main()

{
    int d = 1000;
    int hour= 1;
    int min = 0;
    int sec = 10;
   while(1)
   {
        sec--;
        if(sec<0)
        {
            min--;
            sec = 59;
        }
        if(min<0)
        {
            hour--;
            min = 59;
        }
        
        if(hour<0)
        {
            break;
        }



      printf("clock: \n");
      printf("%02d:%02d:%02d\n",hour, min, sec);
      Sleep(d);
      system("cls");
   }
 return 0;
}