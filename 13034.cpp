/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 200005


int main()
{
    int T,a,test,i,tp=1;

    scanf("%d",&T);

    while(T--)
    {
        test=1;
        for(i=0;i<13;i++)
        {
            scanf("%d",&a);
            if(a==0)
                test=0;
        }

        if(test==1)
            printf("Set #%d: Yes\n",tp);
        else
            printf("Set #%d: No\n",tp);

        tp++;
    }


    return 0;

}
