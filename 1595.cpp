/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int main()
{
    int T,n,xmin,xmax,xmid,x[2005],y[2005],i,j,zero;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);

        zero=0;

        scanf("%d%d",&x[0],&y[0]);
        x[0]*=2;
        xmax=x[0];
        xmin=x[0];

        for(i=1;i<n;i++)
        {
            scanf("%d%d",&x[i],&y[i]);
            x[i]*=2;
            if(x[i]>xmax)
                xmax=x[i];
            if(x[i]<xmin)
                xmin=x[i];
        }

        xmid=(xmax+xmin)/2;

        for(i=0;i<n;i++)
        {
            x[i]-=xmid;
        }


        for(i=0;i<n;i++)
        {
            if(x[i]==0)
            {
                zero++;
                continue;
            }
            for(j=i+1;j<n;j++)
            {
                if(((x[i]+x[j])==0)&&(y[i]==y[j]))
                {
                    x[i]=0;
                    x[j]=0;
                    zero++;
                    break;
                }
            }
        }

        if(zero==n)
            printf("YES\n");
        else
            printf("NO\n");


    }

    return 0;

}
