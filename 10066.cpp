/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int dp[2][500],i,j,n1,n2,ans,tp=1;
    int  s1[500],s2[500];

     while(1)
    {
        if(tp>1)
            printf("\n");

        scanf("%d%d",&n1,&n2);
        ans=0;

        if(n1==0&&n2==0)
            break;

        for(i=0;i<n1;i++)
            scanf("%d",&s1[i]);

        for(i=0;i<n2;i++)
            scanf("%d",&s2[i]);



        for(i=0;i<=n1;i++)
        {
            dp[0][i]=0;
            dp[1][i]=0;
        }

        for(j=1;j<=n2;j++)
        {
            if(j%2==0)
            {
                for(i=1;i<=n1;i++)
                {
                    if(s1[i-1]==s2[j-1])
                    {
                        dp[0][i]=1+dp[1][i-1];
                    }
                    else
                    {
                        dp[0][i]= ( dp[1][i]  >=   dp[0][i-1]  ) ?  dp[1][i]   :   dp[0][i-1]  ;
                    }

                }

            }

            else
            {
                for(i=1;i<=n1;i++)
                {
                    if(s1[i-1]==s2[j-1])
                    {
                        dp[1][i]=1+dp[0][i-1];
                    }
                    else
                    {
                        dp[1][i]= ( dp[0][i]  >=   dp[1][i-1]  ) ?  dp[0][i]   :   dp[1][i-1]  ;
                    }


                }
            }

            if(j==n2)
                ans=dp[j%2][n1];
        }

        printf("Twin Towers #%d\nNumber of Tiles : %d\n",tp,ans);

    tp++;

    }


    return 0;
}

