/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005

int check_for_clap (long long int number);

int main()
{
    int n,m,k,clapped,i;
    long long int number;

    while(1)
    {
        scanf("%d%d%d",&n,&m,&k);

        if(n==0&&m==0&&k==0)
            break;

        clapped=0;
        number=1;

        while(1)
        {
            for(i=1;i<=n;i++)
            {
                if(i==m)
                {
                    if(check_for_clap(number)==1)
                        clapped++;
                    if(clapped==k)
                    {
                        goto answer;
                    }
                }

                //printf("%d\t%lld\n",i,number);
                number++;


            }
            for(i=n-1;i>1;i--)
            {
               if(i==m)
                {
                    if(check_for_clap(number)==1)
                        clapped++;
                    if(clapped==k)
                    {
                        goto answer;
                    }
                }

                //printf("%d\t%lld\n",i,number);
                number++;


            }
        }

        answer:
        printf("%lld\n",number);
    }


    return 0;

}



int check_for_clap (long long int number)
{
    if(number%7==0)
        return 1;
    while(1)
    {
        if(number%10==7)
            return 1;
        if(number==0)
            break;
        number/=10;
    }
    return 0;

}
