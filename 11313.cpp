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
    int T,n,m,ans;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d%d",&n,&m);

        if((n-m)%(m-1)!=0)
            printf("cannot do this\n");
        else
            printf("%d\n",((n-m)/(m-1))+1);

    }


    return 0;

}



