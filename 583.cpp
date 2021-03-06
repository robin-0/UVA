/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int sieve[47000],prime[47000];  /*total 78,499 primes*/

int main()
{
    int t,i,primo=0,num,max,a,b,jump;
    long long int j,F;

    sieve[0]=1;
    sieve[1]=1;

    for(i=2;i<220;i++)
    {
        if(sieve[i]==0)
        {
            prime[primo]=i;
            primo++;

            for(j=i*i;j<46350;j+=i)
            {
                sieve[j]=1;
            }
        }
    }

    for(i=220;i<46350;i++)
    {
        if(sieve[i]==0)
        {
            prime[primo]=i;
            primo++;
        }
    }


    while(1)
    {
        jump=0;
        scanf("%lld",&j);
        if(j==0)
            break;

        if(j<0)
        {
            printf("%lld = -1",j);
            j=-j;
            jump=1;
        }
        else
            printf("%lld =",j);

        for(i=0;i<primo;)
        {
            if(j<prime[i])
                break;


            if(j%prime[i]==0)
            {
                if(jump==0)
                {
                    printf(" %d",prime[i]);
                    jump=1;
                }
                else
                {
                    printf(" x %d",prime[i]);
                }

                j/=prime[i];
            }
            else
                i++;
        }
        if(j!=1)
        {
                if(jump==0)
                {
                    printf(" %d",j);
                    jump=1;
                }
                else
                {
                    printf(" x %d",j);
                }

        }
        printf("\n");

    }


    return 0;
}
