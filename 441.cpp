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
    int a,b,c,d,e,f;
    int n,s[20],tp=1;
//OUTPUT
    while(1)
    {
        getInt(n)

        if(n==0)
            break;

        for(a=0; a<n; a++)
            getInt(s[a]);

        if(tp>1)
            printf("\n");

        tp++;

        for(a=0; a<n; a++)
            for(b=a+1; b<n; b++)
                for(c=b+1; c<n; c++)
                    for(d=c+1; d<n; d++)
                        for(e=d+1; e<n; e++)
                            for(f=e+1; f<n; f++)
                                printf("%d %d %d %d %d %d\n",s[a],s[b],s[c],s[d],s[e],s[f]);

    }

    return 0;
}
