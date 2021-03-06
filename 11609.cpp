/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

int my_power(int a , int n);

int main()
{
    int T,tp=1,n,i;
    long long int ans;

    scanf("%d",&T);
    for(;tp<=T;tp++)
    {
        scanf("%d",&n);

        if(n>1)
        {
            ans=my_power(2,n-1);
            ans=(ans*n)%1000000007;
            ans%=1000000007;
        }
        else
            ans=1;


        printf("Case #%d: %lld\n",tp,ans);

    }


    return 0;
}


int my_power(int a , int n)
{
    long long int prod;

    if(n==1)
        return a;

    else if(n%2==0)
    {
        prod=my_power( a , n/2)%1000000007;
        return ( prod * prod ) %1000000007;
    }

    else
    {
        return ((a%1000000007)*(my_power( a , n-1)%1000000007))%1000000007;
    }

}
