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
#include <map>
#include <list>
#include <stack>
#include <set>
#include <deque>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.txt","r",stdin);
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
#define ppb pop_back

#define INF 1000000000

struct Node
{
    bool endMark;
    int child;
    Node *next[11];

    Node()
    {
        endMark=0;
        for(child=0;child<10;child++)
            next[child]=NULL;
        child=0;
    }
}*Root;

char inp[200];
bool test;

void Insert(int len);
void Clear(Node *node);

void Insert(int len)
{
    Node *Curr=Root;
    int i;
    int id;

    for(i=0;i<len;i++)
    {
        id=inp[i]-'0';

        if(Curr->next[id]==NULL)
        {
            Curr->next[id]=new Node();
            Curr->child++;
        }

        Curr=Curr->next[id];

        if(Curr->endMark==1)
        {
            test=0;
        }
    }

    if(Curr->child!=0)
    {
        test=0;
    }

    Curr->endMark=1;
}

void Clear(Node *node)
{
    int i;

    for(i=0;i<10;i++)
        if(node->next[i]!=NULL)
            Clear(node->next[i]);

    delete(node);
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int T,N;
    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(N)
        test=1;

        Root = new Node();

        while(N--)
        {
            scanf("%s",inp);

            Insert(strlen(inp));
        }

        printf("%s\n",test==1 ? "YES" : "NO" );

        Clear(Root);
    }


    return 0;
}
