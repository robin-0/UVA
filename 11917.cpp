/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    char fav[1000][100],assin[100];
    int t,tp=1,D,N,need[1000],i,j,ans;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%s%d",fav[i],&need[i]);
        }
        scanf("%d",&D);
        ans=D+100;
        scanf("%s",assin);

        for(i=0;i<N;i++)
        {
            if(!strcmp(assin,fav[i]))
            {
                ans=need[i];
                break;
            }
        }

        if(ans<=D)
            printf("Case %d: Yesss\n",tp);
        else if(ans<=(D+5))
            printf("Case %d: Late\n",tp);
        else
            printf("Case %d: Do your own homework!\n",tp);

        tp++;

    }

    return 0;
}
