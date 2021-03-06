/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int digit_sum (int num);

int main()
{
    int sieve[33000],dig_prime[100005],digo=0,i,j,sum,na,nb,ans[1000005]={0,};
    int n,a,b;

    sieve[0]=3;

    for(i=2;i<1100;i++)
    {
        if( (sieve[i>>5]&(1<<(i&31))) ==0)
        {
            sum=digit_sum(i);
            if( (sieve[sum>>5]&(1<<(sum&31))) ==0)
                dig_prime[digo++]=i;

            for(j=i*i;j<=1000005;j+=i)
            {
                sieve[j>>5]|=1<<(j&31);
            }
        }
    }

    for(;i<=1000005;i++)
    {
        if( (sieve[i>>5]&(1<<(i&31))) ==0)
        {
            sum=digit_sum(i);
            if( (sieve[sum>>5]&(1<<(sum&31)))==0)
                dig_prime[digo++]=i;
        }
    }

    j=0;
    a=1;
    for(i=dig_prime[j];i<=1000000;i++)
    {
       ans[i]=a;

       if(i==dig_prime[j+1]&&j<(digo-1))
       {
           a++;
           ans[i]++;
           j++;
       }

    }


  //  for(i=0;i<8;i++)
    //    printf("%d\n",dig_prime[i]);



    scanf("%d",&n);

    while(n--)
    {
        scanf("%d%d",&a,&b);

        if(a>b)
        {
            a=a^b;
            b=a^b;
            a=a^b;
        }


       if(a>0) printf("%d\n",ans[b]-ans[a-1]);
       else printf("%d\n",ans[b]-ans[a]);


    }


    return 0;

}


int digit_sum (int num)
{
    int sum=num;

    for(;;)
    {
        num/=10;
        sum-=num*10;
        sum+=num;
        if(num==0)
            break;
    }
    return sum;
}

