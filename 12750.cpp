/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

int main()
{
    int T,tp=1,N,i,board[5005];
    char result,blank[100005];

    scanf("%d",&T);
    for(;tp<=T;tp++)
    {
        scanf("%d",&N);
        gets(blank);

        for(i=0;i<N;i++)
        {
            result=getchar();
            if(result=='W')
                board[i]=1;
            else
                board[i]=0;
            gets(blank);

        }

        for(i=0;i<(N-2);i++)
        {
            if((board[i]+board[i+1]+board[i+2])==0)
                break;
        }

        if(i+2==N||N<3)
            printf("Case %d: Yay! Mighty Rafa persists!\n",tp);
        else
            printf("Case %d: %d\n",tp,i+3);
    }


    return 0;
}

