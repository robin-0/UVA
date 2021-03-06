/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 1000005

int minimum_move(int from , int to);

int main()
{
    int T,tp=1,n,i,cnt;
    char inp[MAX],op[MAX];

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&n);
        scanf("%s",inp);
        scanf("%s",op);

        cnt=0;

        for(i=0;i<n;i++)
        {
            cnt+=minimum_move(inp[i],op[i]);
        }

        printf("Case %d: %d\n",tp,cnt);

        tp++;

    }


    return 0;

}



int minimum_move(int from , int to)
{
    int diff1=abs(from-to);
    int diff2=10-diff1;

    return diff1<=diff2 ? diff1 : diff2 ;

}
