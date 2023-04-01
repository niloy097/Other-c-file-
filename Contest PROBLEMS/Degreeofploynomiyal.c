//prob- https://www.codechef.com/problems/DPOLY

//solution---
#include <stdio.h>

int main(void) {
	int m,n,i,cnt=0;
	scanf("%d",&m);
	while(m--)
	{
	     scanf("%d",&n);
	     int a[n];
	     for(i=0;i<n;i++)
	     {
	         scanf("%d",&a[i]);
	     }
	     for(i=0;i<n;i++)
	     {
	         if(a[i]!=0)
	         cnt=i;
	     }
	     printf("%d\n",cnt);
	}// your code goes here
	return 0;
}

