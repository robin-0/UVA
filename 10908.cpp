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


int main()
{
    int n,m,q,r,c,T;
    char inp[105][105];
    int i,j,len,up,down,left,right;
//OUTPUT
    getInt(T)

    while(T--)
    {
        getInt(m)
        getInt(n)
        getInt(q)

        gets(inp[0]);

        for(i=0;i<m;i++)
            gets(inp[i]);

        printf("%d %d %d\n",m,n,q);

        while(q--)
        {
            getInt(r)
            getInt(c)

            len=1;

            for(i=1;;i++)
            {
                up=r-i;
                down=r+i;
                left=c-i;
                right=c+i;

                if(up<0 || down>=m || left<0 || right>=n)
                    break;


                for(j=left;j<=right;j++)
                {
                    if(inp[up][j]!=inp[r][c] || inp[down][j]!=inp[r][c] )
                        break;
                }

                if(j<=right)
                    break;

                for(j=up;j<=down;j++)
                {
                    if(inp[j][left]!=inp[r][c] || inp[j][right]!=inp[r][c] )
                        break;
                }

                if(j<=down)
                    break;

                len+=2;
            }

            printf("%d\n",len);
        }
    }

    return 0;
}

