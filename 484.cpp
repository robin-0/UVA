/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int posp[200005]={0,},posn[200005]={0,};

int main()
{
    int ans[200005][2];
    int i,j=1,inp,tot=0;


    while(scanf("%d",&inp)!=EOF)
    {
        if(inp>=0)
            {
                if(posp[inp]==0)
                {
                    posp[inp]=j;
                    ans[j][0]=inp;
                    ans[j][1]=1;
                    j++;
                }
                else
                    ans[posp[inp]][1]++;
            }
        else
            {
                if(posn[-inp]==0)
                {
                    posn[-inp]=j;
                    ans[j][0]=inp;
                    ans[j][1]=1;
                    j++;
                }
                else
                    ans[posn[-inp]][1]++;
            }



    }
    for(i=1;i<j;i++)
        printf("%d %d\n",ans[i][0],ans[i][1]);

    return 0;
}
