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

struct value
{
    int a;
    int b;
    int c;
    bool done;
}array[50005];

int main()
{
    int i,j,k,temp,N;



    for(i=0;i<50002;i++)
    {
        array[i].done=0;
    }

    for(i=0;i<224;i++)
    {
        for(j=i;j<224;j++)
        {
            for(k=j;k<224;k++)
            {
                temp= i*i+j*j+k*k;

                if(temp > 50000)
                    break;

                if(array[temp].done==0)
                {
                    array[temp].a=i;
                    array[temp].b=j;
                    array[temp].c=k;
                    array[temp].done=1;
                }
            }
        }
    }

    /*for(i=0;i<50;i++)
    {
        if(array[i].done!=0)
        {
            DEBUG(i);
            k=i;
            printf("%d %d %d\n",array[k].a,array[k].b,array[k].c);
        }
    }*/

    getInt(N);

    while(N--)
    {
        getInt(k);

        if(array[k].done==0)
            printf("-1\n");
        else
            printf("%d %d %d\n",array[k].a,array[k].b,array[k].c);
    }

    return 0;
}
