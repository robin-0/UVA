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

long long int dp[6][7500];
int coin[10]={1,5,10,25,50};

long long int calc(int i,int cap)
{
    if(i>=5)
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

    for(i=0;i<6;i++)
        for(j=0;j<7500;j++)
            dp[i][j]=-1;

    while(scanf("%d",&money)!=EOF)
    {

        printf("%lld\n",calc(0,money));
    }



    return 0;

}

