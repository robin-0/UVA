/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 100000007
#define EPS 1e-9

long long int dp[15][30050];
int coin[15]={5,10,20,50,100,200,500,1000,2000,5000,10000};

long long int calc(int i,int cap)
{
    if(i>=11)
    {
        if(cap==0)
            return 1;
        else
            return 0;
    }

    if(dp[i][cap]!=-1)
        return dp[i][cap];

    long long int ret1=0,ret2=0;

    if(cap>=coin[i])
        ret1=calc(i,cap-coin[i]);
    ret2=calc(i+1,cap);

    dp[i][cap]=ret1 + ret2 ;
    return dp[i][cap];
}

int main()
{
    int i,j,money;
    long long int ans;

    for(i=0;i<15;i++)
        for(j=0;j<30050;j++)
            dp[i][j]=-1;

    while(scanf("%d.%d",&i,&j)!=EOF)
    {
        money=i*100+j;
        if(money==0)
            break;
        ans=calc(0,money);

        printf("%3d.",i);

        if(j<10)
            printf("0");
        printf("%d",j);

        printf("%17lld\n",ans);
    }



    return 0;

}

