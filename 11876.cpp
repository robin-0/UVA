/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 1000005
#define MOD 1000000007
#define EPS 1e-9

vector <int> sieve(MAX,0);
vector <int> N;

int main ()
{
    int i,j,temp;

    for(i=1;i<=1000000;i++)
    {
        for(j=i;j<=1000000;j+=i)
        {
            sieve[j]++;
        }
    }

    N.push_back(1);

    for(i=1;;i++)
    {
        temp= N[i-1] + sieve[N[i-1]];

        if(temp>1000000)
            break;

        N.push_back(temp);
    }


    int T,tp=1,ans,A,B;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d%d",&A,&B);

        if(A>B)
        {
            A=A^B;
            B=A^B;
            A=A^B;
        }

        //cout<< lower_bound(N.begin(),N.end(),A) -N.begin()<<endl;
        //cout<< upper_bound(N.begin(),N.end(),B) -N.begin()<<endl;


        ans=upper_bound(N.begin(),N.end(),B) - lower_bound(N.begin(),N.end(),A) ;



        if(ans<0)
            printf("Case %d: %d\n",tp,0);
        else
            printf("Case %d: %d\n",tp,ans);

        tp++;
    }


    return 0;

}

