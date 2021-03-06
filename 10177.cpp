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
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back


int main()
{
    int n;
    long long int S2,R2,S3,R3,S4,R4,sum;
    int i;
//OUTPUT
    while(scanf("%d",&n)!=EOF)
    {

  //      if(n==-1) break;
        S2=0;
        S3=0;
        S4=0;

        R2=0;
        R3=0;
        R4=0;

        for(i=1;i<=n;i++)
        {
            S2 += i*i;
            S3 += i*i*i;
            S4 += i*i*i*i;
        }

        sum=(n*(n+1))/2;

        R2 = sum*sum - S2;
        R3 = sum*(S2+R2) - S3;
        R4 = sum*(S3+R3) - S4;

        printf("%lld %lld %lld %lld %lld %lld\n",S2,R2,S3,R3,S4,R4);
    }

    return 0;
}
