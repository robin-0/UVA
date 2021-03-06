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

struct edge
{
    int u;
    int v;
};

bool adjMat[3005][3005];

vector <edge> adjList;

int main()
{
    int T;
    int n,m,i,j,u,v;
    long long int ans;
    struct edge temp;
    getInt(T)

    while(T--)
    {
        getInt(n)
        getInt(m)

        for(i=1;i<=n;i++)
            for(j=1;j<=i;j++)
            {
                adjMat[i][j]=0;
                adjMat[j][i]=0;
            }

        for(i=0;i<m;i++)
        {
            getInt(u)
            getInt(v)

            temp.u=u;
            temp.v=v;

            adjList.pb(temp);

            adjMat[u][v]=1;
            adjMat[v][u]=1;
        }

        ans=0;

        for(i=0;i<m;i++)
        {
            u=adjList[i].u;
            v=adjList[i].v;

            for(j=1;j<=n;j++)
            {
                if(j==u||j==v)
                    continue;

                if(adjMat[u][j]==1 && adjMat[v][j]==1)
                    ans++;
            }
        }

        printf("%lld\n",ans/3);

        adjList.clear();
    }

    return 0;
}


