/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int sieve[100005]={0,},prime[100005]={0,},primo=0;
    int i,j,num,a,b,test;

    sieve[0]=3;

    for(i=2;i<=1100;i++)
    {
        if((sieve[i>>5]&(1<<(i&31)))==0)
        {
            prime[primo++]=i;

            for(j=i*i;j<=1000005;j+=i)
            {
                sieve[j>>5]|=(1<<(j&31));
            }
        }
    }

    for(;i<=1000005;i++)
        if((sieve[i>>5]&(1<<(i&31)))==0)
           prime[primo++]=i;

    while(1)
    {
        scanf("%d",&num);

        if(num==0)
            break;

        test=0;
        for(i=0;i<primo;i++)
        {
            if(2*prime[i]>num)
                break;
            a=prime[i];
            b=num-prime[i];
            if((sieve[b>>5]&(1<<(b&31)))==0)
            {
                test=1;
                break;
            }
        }

        printf("%d:\n",num);
        if(test)
            printf("%d+%d\n",a,b);

        else
            printf("NO WAY!\n");
    }



    return 0;
}

