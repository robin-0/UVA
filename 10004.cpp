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
    int n,l,i,j,u,v,len;
    int test=1,src;
    int color[300];

//OUTPUT

    while(1)
    {
        getInt(n);

        if(n==0)
            break;

        vector < vector <int> > adjList;
        queue <int> grays;

        for(i=0;i<n;i++)
        {
            color[i]=-1;
            adjList.pb({});
        }

        test=1;
        src=0;


        getInt(l)

        for(i=0;i<l;i++)
        {
            getInt(u)
            getInt(v)

            adjList[u].pb(v);
            adjList[v].pb(u);
        }

        color[src]=0;

        grays.push(src);

        while(grays.size())
        {
            u=grays.front();

            len=adjList[u].size();

            for(i=0;i<len;i++)
            {
                v=adjList[u][i];

                if(color[v]==-1)
                {
                    color[v]=1-color[u];
                    grays.push(v);
                }

                else if(color[v]==color[u])
                {
                    test=0;
                    goto shesh;
                }
            }

            grays.pop();
        }

        shesh:
            if(test)
                printf("BICOLORABLE.\n");
            else
                printf("NOT BICOLORABLE.\n");
    }

    return 0;
}


