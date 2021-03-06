/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005


long long int factorial[15]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800};
long long int ten[15]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000,100000000000,1000000000000,10000000000000};
int main()
{
    int T,n,i,j;
    unsigned long long int ans,temp ;

    while(1)
    {
        scanf("%d",&n);

        if(n==0)
            break;

        ans=0;
        int number[15]={0,};

        for(i=0;i<n;i++)
        {
            scanf("%d",&j);
            number[j]++;
        }

        for(i=1;i<10;i++)
        {
            if(number[i]==0)
                continue;

            temp=factorial[n-1]*i;
            for(j=0;j<10;j++)
            {
                if(i==j)
                    temp/=factorial[number[j]-1];

                else if(number[j]!=0)
                    temp/=factorial[number[j]];
            }

            ans+=temp;
        }

        temp=(ten[n]-1)/9;

        ans*=temp;

        printf("%llu\n",ans);

    }


    return 0;
}

