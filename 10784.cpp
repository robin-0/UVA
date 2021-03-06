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
#define MOD 1000000007
#define EPS 1e-9


int main ()
{
    long long int lo,hi,mid,n,tp=1,diag;

    while(1)
    {
        scanf("%lld",&n);

        if(n==0)
            break;

        lo=1;
        hi=100000000;
        mid=(lo+hi)/2;

        while(lo<hi)
        {
            diag=((mid*(mid-1))/2) - mid;
//printf("%lld\t%lld\t%lld\t%lld\n",lo,hi,mid,diag);
            if(diag<n)
            {
                lo=mid+1;
            }

            else
            {
                hi=mid;
            }

            mid=(lo+hi)/2;
        }

        printf("Case %lld: %lld\n",tp,mid);

        tp++;
    }

    return 0;

}


