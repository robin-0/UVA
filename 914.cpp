/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sieve[100005],prime[100005],ans[120];  /*total 78,499 primes*/

int main()
{
    int t,i,primo=0,num,max,a,b,jump;
    long long int j;

    sieve[0]=3;

    for(i=2;i<1010;i++)
    {
        if((sieve[i>>5]&(1<<(i&31)))==0)
        {
            prime[primo]=i;
            primo++;

            for(j=i*i;j<1000010;j+=i)
            {
                sieve[j>>5]=sieve[j>>5]|(1<<(j&31));
            }
        }
    }
    for(i=1010;i<1000010;i++)
    {
        if((sieve[i>>5]&(1<<(i&31)))==0)
        {
            prime[primo]=i;
            primo++;

        }
    }

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&a,&b);

        if(a>b)
        {
            a=a^b;
            b=a^b;
            a=a^b;
        }

        for(i=0;i<120;i++)
            ans[i]=0;

        for(i=0;i<primo;i++)
        {
            if(prime[i]>=a)
                break;
        }
        i++;
        for(;i<primo;i++)
        {
            if(prime[i]>b)
                break;
            ans[prime[i]-prime[i-1]]++;
        }

        max=0;
        num=0;

        for(i=0;i<120;i++)
        {
            if(ans[i]>max)
            {
                max=ans[i];
                jump=i;
                num=1;
            }
            else if(ans[i]==max)
            {
                num++;
            }
        }

        if(num==1)
            printf("The jumping champion is %d\n",jump);
        else
            printf("No jumping champion\n");

    }




    return 0;
}
