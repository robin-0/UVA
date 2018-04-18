/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct router
{
    int x;
    int y;
    int r;
}dev[1000];

int main()
{
    int t,tp=1,n,m,x,y,i,j,cnct;

    scanf("%d",&t);

    while(t--)
    {
        printf("Case %d:\n",tp);
        tp++;

        scanf("%d%d",&n,&m);

        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&dev[i].x,&dev[i].y,&dev[i].r);
            dev[i].r*=dev[i].r;
        }

        while(m--)
        {
            cnct=0;
            scanf("%d%d",&x,&y);

            for(i=0;i<n;i++)
            {
                if( (x-dev[i].x)*(x-dev[i].x) + (y-dev[i].y)*(y-dev[i].y)  <= dev[i].r   )
                {
                    cnct=1;
                    break;
                }
            }

            if(cnct==1)
                printf("Yes\n");
            else
                printf("No\n");
        }

    }



    return 0;
}

