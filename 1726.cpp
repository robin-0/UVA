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
    int T,Q,d,s,i,j;
    int fash[20],notFash[20];
    char ch[MAX];
    long long int ans;


    getInt(T)

    while(T--)
    {
        getInt(Q)

        for(i=0;i<11;i++)
        {
            fash[i]=0;
            notFash[i]=0;
        }

        while(Q--)
        {
            getInt(d)
            getInt(s)
            scanf("%s",ch);

            if(ch[0]=='i')
            {
                if(s==0)
                    notFash[d]++;
            }

            else
            {
                if(s==1)
                    fash[d]++;
            }
        }


        ans=0;


        for(i=2;i<=10;i++)
        {
            for(j=1;j<i;j++)
            {
                ans+=fash[i]*notFash[j];
            }
        }


        printf("%lld\n",ans);
    }


    return 0;
}


