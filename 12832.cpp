/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int gcd (long long  int a ,long long  int b );

int main()
{
    long long int t,tp=1,a,b,n,k,i,m,gc;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&m);

        scanf("%lld%lld",&n,&k);

        gc=gcd(n,k);

        a=k/gc;
        b=n/gc;

        m--;

        while(m--)
        {
            scanf("%lld%lld",&n,&k);

            a=a*n+k*b;
            b=n*b;

            gc=gcd(a,b);

            a/=gc;
            b/=gc;

        }

        printf("Case %lld: %lld/%lld\n",tp,a,b);

        tp++;


    }


    return 0;
}


long long int gcd (long long  int a ,long long  int b )
{
    long long int c;

    if(b>a)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }

    while(1)
    {
        if(b==0)
            return a;

        c=b;
        b=a%b;
        a=c;
    }

}


