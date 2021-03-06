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
#define MAX 1000005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back


struct point
{
    int x;
    int y;
};

int dx[20]={1 ,-1 , 0 , 0};
int dy[20]={0 , 0 , 1 , -1};
queue <point> grays;
point temp,taken;
bool color[1005][1005]={0,};
bool bomb[1005][1005]={0,};
int dist[1005][1005]={0,};

bool inSide(int x,int y ,int R,int C);

bool inSide(int x,int y ,int R,int C)
{
    if(0<=x && x<R && 0<=y && y<C)
        return true;
    return false;
}


int main()
{
    int R,C,i,j,cnt,a,b;
    int strtX,strtY,targX,targY;

    while(1)
    {
        getInt(R)
        getInt(C)

        if(R==0 && C==0)
            break;

        for(i=0;i<R;i++)
            for(j=0;j<C;j++)
            {
                color[i][j]=0;
                bomb[i][j]=0;
                dist[i][j]=-1;
            }

        getInt(j)
        while(j--)
        {
            getInt(a)
            getInt(cnt)

            while(cnt--)
            {
                getInt(b)

                bomb[a][b]=1;
            }
        }

        getInt(strtX)
        getInt(strtY)
        getInt(targX)
        getInt(targY)

        temp.x=strtX;
        temp.y=strtY;

        color[temp.x][temp.y]=1;
        dist[temp.x][temp.y]=0;

        grays.push(temp);

        while(grays.size())
        {
            taken=grays.front();

            //char ch=getchar();


            for(i=0;i<4;i++)
            {
                temp.x=taken.x+dx[i];
                temp.y=taken.y+dy[i];

                if(inSide(temp.x,temp.y,R,C))
                {
                    if(color[temp.x][temp.y]==0 && bomb[temp.x][temp.y]==0)
                    {
                        color[temp.x][temp.y]=1;
                        dist[temp.x][temp.y]=dist[taken.x][taken.y]+1;
                        grays.push(temp);
                    }
                }
            }

            grays.pop();

            if(dist[targX][targY]!=-1)
                break;
        }

        while(grays.size())
            grays.pop();

        printf("%d\n",dist[targX][targY]);

    }


    return 0;
}

