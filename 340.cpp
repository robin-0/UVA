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
    int n,tp=1,i,j,ans[1500],guess[1500],check[1500],cnt[15],used[15],pos[15][1500],zero,strong,weak;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        for(i=0;i<n;i++)
            scanf("%d",&ans[i]);

        printf("Game %d:\n",tp);

        while(1)
        {
            zero=0;
            strong=0;
            weak=0;
            for(i=1;i<10;i++)
            {
                cnt[i]=0;
                used[i]=0;
            }

            for(i=0;i<n;i++)
            {

                scanf("%d",&guess[i]);

                if(guess[i]==ans[i])
                {
                    strong++;
                    check[i]=0;
                }

                else if(guess[i]==0)
                {
                    zero++;
                }

                else
                {
                    check[i]=1;
                    cnt[guess[i]]++;
                }
            }

            if(zero==n)
                break;

            for(i=0;i<n;i++)
            {
                if(check[i]==1)
                {
                    if(cnt[ans[i]]>0)
                    {
                        weak++;
                        cnt[ans[i]]--;
                    }
                }
            }

            printf("    (%d,%d)\n",strong,weak);

        }
        tp++;
    }

    return 0;

}

