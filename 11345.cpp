/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,n,i,xm1,xm2,ym1,ym2,x1,x2,y1,y2,ans,tp=1;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        scanf("%d%d%d%d",&xm1,&ym1,&xm2,&ym2);
        ans=1;
        for(i=1;i<n;i++)
        {
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

            if(x1>xm1)
                xm1=x1;
            if(x2<xm2)
                xm2=x2;
            if(y1>ym1)
                ym1=y1;
            if(y2<ym2)
                ym2=y2;
        }

        if(xm1>=xm2||ym1>=ym2)
            printf("Case %d: %d\n",tp,0);

        else
            printf("Case %d: %d\n",tp,(xm2-xm1)*(ym2-ym1));
        tp++;

    }

    return 0;
}

