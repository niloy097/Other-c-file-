/*
  Problem: https://www.codechef.com/problems/RECENTCONT
*/

//SOlution-->: 

#include<stdio.h>
#include<string.h>
int main()
{
    int t, n;
    
    scanf("%d", &n);
    for(t = 0; t<n; t++)
    {
        int p, s1 = 0, s2 = 0, i;
        int arr[100];
        
        
        scanf("%d", &p);
        for(i = 1; i<=p; i++)
        {
           char name[20];
           scanf("%s", &name);
           int d = strcmp("START38", name);
           if(d == 0)
           {
            s2++;
           }
           else
           {
            s1++;
           }
        }
        printf("%d %d\n", s2, s1);
    }
}