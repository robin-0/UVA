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
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9

bool areAdj (int a, int b);

bool sieve[MAX]= {0,};
vector  <int> prime;
vector <vector<int> > adj;


int main ()
{
    int i,j;

    for(j=2*2; j<10002; j+=2)
    {
        sieve[j]=1;
    }

    for(i=3; i<320; i+=2)
    {
        if(sieve[i]==0)
        {
            for(j=i*i; j<10002; j+=i)
            {
                sieve[j]=1;
            }
        }
    }



    for(i=1000; i<10000; i++)
    {
        if(sieve[i]==0)
        {
            prime.push_back(i);
            adj.push_back({});
        }
    }

    int len=prime.size(),test;

    //printf("%d %d\n",len,prime[len-1]);

    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(i==j)
                continue;

            if(areAdj(prime[i],prime[j])==true)
            {
                adj[i].push_back(j);
            }
        }
    }

    //printf("%d\n",prime[3]);
    //for(i=0;i<adj[3].size();i++)
    //{
      //      printf("%d\n",prime[adj[3][i]]);
    //}

    int T,root,dest,rootNode,destNode;
    int color[10000];
    int dist[10000];

    int slen,node;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d%d",&root,&dest);

        queue <int> grays;

        for(i=0;i<len;i++)
        {
            color[i]=0;
            dist[i]=-1;
        }

        rootNode=lower_bound(prime.begin(),prime.end(),root) - prime.begin() ;
        destNode=lower_bound(prime.begin(),prime.end(),dest) - prime.begin() ;

        color[rootNode]=1;
        dist[rootNode]=0;

        grays.push(rootNode);

        while(!grays.empty())
        {
            node=grays.front();
            slen=adj[node].size();

            /*queue <int> temp = grays;

            while(!temp.empty())
            {
                printf("%d ",prime[temp.front()]);
                temp.pop();
            }*/
            //printf("\n");
            //char ch=getchar();

            //printf("%d %d\n",prime[node],dist[node]);

            for(i=0;i<slen;i++)
            {
                if(color[adj[node][i]]==0)
                {
                    grays.push(adj[node][i]);
                    color[adj[node][i]]=1;
                    dist[adj[node][i]]=dist[node]+1;

                    //printf("%d %d\n",prime[adj[node][i]],dist[adj[node][i]]);

                    if(adj[node][i]==destNode)
                    {
                        //printf("\t\t%d\n",dist[destNode]);
                        goto paisi;
                    }
                }
            }

            color[node]=2;
            grays.pop();
        }

        paisi:

        if(dist[destNode]==-1)
            printf("Impossible\n");
        else
            printf("%d\n",dist[destNode]);

    }

    return 0;

}


bool areAdj (int a, int b)
{
    int a1=a%10;
    a/=10;
    int a2=a%10;
    a/=10;
    int a3=a%10;
    a/=10;
    int a4=a;

    int b1=b%10;
    b/=10;
    int b2=b%10;
    b/=10;
    int b3=b%10;
    b/=10;
    int b4=b;

    int cnt=0;

    if(a1 != b1)
        cnt++;
    if(a2 != b2)
        cnt++;
    if(a3 != b3)
        cnt++;
    if(a4 != b4)
        cnt++;

    if(cnt>1)
        return false;
    else
        return true;
}



