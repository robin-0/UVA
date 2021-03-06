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
    int sieve[324500]={0,},i,j,prime[700000],primo=0;
    int num,a,b,c,d,temp;

    sieve[0]=3;

    for(i=2;i<3164;i++)
    {
        if((sieve[i>>5]&(1<<(i&31)))==0)
        {
            prime[primo++]=i;

            for(j=i*i;j<10000005;j+=i)
            {
                sieve[j>>5]=sieve[j>>5]|(1<<(j&31));
            }
        }
    }

    for(;i<10000005;i++)
    {
        if((sieve[i>>5]&(1<<(i&31)))==0)
            prime[primo++]=i;
    }

    while(scanf("%d",&num)!=EOF)
    {
        if(num%2==0)
        {
            a=2;
            b=2;
            num-=4;
        }
        else
        {
            a=3;
            b=2;
            num-=5;
        }

        if(num<4)
            printf("Impossible.\n");
        else
        {
            for(i=0;i<primo;i++)
            {
                temp=num-prime[i];
               if(temp<2)
                    break;
                
                if((sieve[temp>>5]&(1<<(temp&31)))==0)
                {
                    c=prime[i];
                    d=temp;
                    break;
                }
            }

            printf("%d %d %d %d\n",a,b,c,d);
        }
    }


    return 0;

}
