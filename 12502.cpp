/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005


int main()
{
    int T,x,y,taka;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&x,&y,&taka);

        printf("%d\n",(taka*(2*x-y))/(x+y));


    }

    return 0;

}



