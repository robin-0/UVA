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
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 1000005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

int dp[MAX]={0,};

void calc()
{
    int a,b,c,j;

    for(j=1;j<=1000002;j++)
    {
        a=dp[(int)(j-sqrt(j))]%1000000;
        b=dp[(int)log(j)]%1000000;
        c=dp[(int)(j*sin(j)*sin(j))]%1000000;

        dp[j]= (a+b+c)%1000000;

    }

}

int main()
{
    int i;
    memset(dp,-1,sizeof(dp));

    dp[0]=1;
    calc();

    while(1)
    {
        getInt(i);
        if(i==-1)
            break;
        printf("%d\n",dp[i]);
    }

    return 0;
}

