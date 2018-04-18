/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int sieve[32000],prime[100005];

int main()
{
    int t,i,primo=0,num,ans;
    long long int j,F;

    sieve[0]=3;

    for(i=2;i<1005;i++)
    {
        if((sieve[i>>5]&(1<<(i&31)))==0)
        {
            prime[primo]=i;
            primo++;

            for(j=i*i;j<1000005;j+=i)
            {
                sieve[j>>5]=sieve[j>>5]|(1<<(j&31));
            }
        }
    }
    for(i=1005;i<1000005;i++)
    {
        if((sieve[i>>5]&(1<<(i&31)))==0)
        {
            prime[primo]=i;
            primo++;

        }
    }


    while(1)
    {
        scanf("%d",&num);
        if(num==0)
            break;

        ans=0;

        for(i=0;i<primo;i++)
        {
            if(prime[i]>num)
                break;

            if(num%prime[i]==0)
                ans++;
        }

        printf("%d : %d\n",num,ans);

    }


    return 0;
}
