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
#define INPUT freopen("C-small-practice.in","r",stdin);
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
    int T,cnt,i,j,total,nodes,temp,tp=1;
    bool color[100];
    int degree[100];
    queue <int> grays;
    vector < vector < int > > adjList;
    char inp[100];
//OUTPUT
    getInt(T)
    gets(inp);
    gets(inp);

    while(T--)
    {
        if(tp>1)
            printf("\n");
        tp++;

        gets(inp);

        total=inp[0]-'A';
        nodes=-1;
        cnt=0;

        for(i=0;i<=total;i++)
            adjList.pb({});

        for(i=0;i<=total;i++)
        {
            color[i]=0;

        }

        while(gets(inp))
        {

            if(strlen(inp)==0)
                break;

            adjList[inp[0]-'A'].pb(inp[1]-'A');
            adjList[inp[1]-'A'].pb(inp[0]-'A');
        }
//DEBUG(adjList[0].size())
        /*for(i=0;i<=total;i++)
        {
            for(j=0; j < adjList[i].size() ;j++)
                printf("%d %d\n",i,adjList[i][j]);
        }*/


        for(i=0;i<=total;i++)
        {
            if(nodes==total)
                break;

            if(color[i]==0)
            {
                cnt++;
                nodes++;

                grays.push(i);
                color[i]=1;

                while(grays.size())
                {
                    temp=grays.front();

                    for(j=0;j<adjList[temp].size();j++)
                    {
                        if(color[adjList[temp][j]]==0)
                        {
                            nodes++;
                            color[adjList[temp][j]]=1;
                            grays.push(adjList[temp][j]);
                        }

                        //DEBUG(adjList[temp][j])
                    }

                    grays.pop();
                }
            }
        }

        printf("%d\n",cnt);

        adjList.clear();
    }


    return 0;
}

