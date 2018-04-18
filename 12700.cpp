/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int T,i,n,tp=1;
    char inp[2005];
    int match,win,lose,tie;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&n);
        scanf("%s",inp);

        match=n;
        win=0;
        lose=0;
        tie=0;

        for(i=0;i<n;i++)
        {
            if(inp[i]=='B')
                win++;
            else if(inp[i]=='W')
                lose++;
            else if(inp[i]=='T')
                tie++;
            else if(inp[i]=='A')
                match--;
        }

        if(match==0)
            printf("Case %d: ABANDONED\n",tp);
        else
        {
            if(win==match)
                printf("Case %d: BANGLAWASH\n",tp);
            else if(lose==match)
                printf("Case %d: WHITEWASH\n",tp);
            else if(win>lose)
                printf("Case %d: BANGLADESH %d - %d\n",tp,win,lose);
            else if(lose>win)
                printf("Case %d: WWW %d - %d\n",tp,lose,win);
            else if(lose==win)
                printf("Case %d: DRAW %d %d\n",tp,win,tie);
        }
        tp++;

    }


    return 0;

}


