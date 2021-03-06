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
    int n,L1,L2;
    double x1,x2;

    while(1)
    {
        scanf("%d",&n);

        if(n==0)
            break;
        L1=ceil(log((double)n));
        L2=floor(log((double)n));

        x1=1.0 - exp(log((double)n)-L1);
        x2=1.0 - exp(log((double)n)-L2);

        if(fabs(x1)<=EPS)
            x1=EPS;

        if(fabs(x2)<=EPS)
            x2=EPS;


    //cout<<(int)x2<<endl;
        if(abs((int)x2)>0)
            printf("%d %.8lf\n",L1,x1);
        else
            printf("%d %.8lf\n",L2,x2);
    }

    return 0;

}


