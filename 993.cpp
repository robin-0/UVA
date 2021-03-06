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
#define BIGGER(a,b) (a>=b ? a : b)
#define getInt(a) scanf("%d",&a);


int main()
{
    long long int q;
    int i,T;
//OUTPUT
    scanf("%d",&T);

    while(T--)
    {
        scanf("%lld",&q);
        vector <int> factors;

        if(q<10)
        {
            printf("%lld\n",q);
            continue;
        }

        while(1)
        {
            for(i=9;i>1;i--)
            {
                if(q%i==0)
                {
                    factors.push_back(i);
                    q/=i;

                    break;
                }
            }

            if(i==1)
            {
                printf("-1\n");
                break;
            }

            else if(q==1)
            {
                sort(factors.begin(),factors.end());
                int len=factors.size();

                for(i=0;i<len;i++)
                    printf("%d",factors[i]);

                printf("\n");

                break;
            }
        }
    }


    return 0;
 }
