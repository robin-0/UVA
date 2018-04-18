/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 200005


int main()
{
    long long int T,tp=1,taka,baki,ans;

    scanf("%lld",&T);

    while(T--)
    {
        scanf("%lld",&taka);
        baki=taka;

        printf("Case %lld: ",tp);
        tp++;

        if(taka<=180000)
            printf("0\n");
        else if(taka>180000 && taka<=480000 )
        {
            baki-=180000;

            baki*=10;
            ans=baki/100;

            if(baki%100)
                ans++;

            if(ans<2000)
                printf("2000\n");
            else
                printf("%lld\n",ans);
        }
        else if(taka>480000 && taka<=880000 )
        {
            baki-=480000;

            baki*=15;

            ans=baki/100;

            if(baki%100)
                ans++;

            ans+=30000;


            printf("%lld\n",ans);
        }
        else if(taka>880000 && taka<=1180000 )
        {
            baki-=880000;

            baki*=20;

            ans=baki/100;

            if(baki%100)
                ans++;

            ans+=90000;


            printf("%lld\n",ans);
        }
        else
        {
            baki-=1180000;

            baki*=25;

            ans=baki/100;

            if(baki%100)
                ans++;

            ans+=150000;


            printf("%lld\n",ans);
        }
    }
    return 0;

}
