//problem- https://www.codechef.com/problems/TSTROBOT
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); //2

    while (t--)
    {
        int n, x;  //2 0
        char s[100001]; //ll = 2

        scanf("%d %d %s", &n, &x, s);

        int count = 1;
        int minPos = x; // 0
        int maxPos = x;// 0

        for (int i = 0; s[i] ; i++) //2
        {
            if (s[i] == 'R')
            {
                x++; //
            }
            else if (s[i] == 'L')
            {
                x--; // 
            }

            if (x < minPos) 
            {
                count++;
                minPos = x;
            }
            else if (x > maxPos)
            {
                count++;
                maxPos = x;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}



    