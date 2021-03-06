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
    long long int c,d,a,b,t,hi_bit,i;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&c,&d);

        if((c&d)!=c)
            printf("-1\n");
        else
        {
            a=c;
            b=d;

            for(i=31;i>=0;i--)
            {
                hi_bit=1<<i;
                if(((d&hi_bit)!=0)&&((c&hi_bit)==0))
                {
                    a|=hi_bit;
                    b^=hi_bit;

                    break;
                }
            }

            if(b>a)
            {
                a=a^b;
                b=a^b;
                a=a^b;
            }

            printf("%lld %lld\n",b,a);

        }
    }


    return 0;

}
