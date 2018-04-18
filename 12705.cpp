/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    char inp[1005];
    int alpha[50],pos[95],key,cost,i,j,t,n,pre,k;

    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(inp);
        n=strlen(inp);

        for(i=0;i<50;i++)
            alpha[i]=0;
        for(i=0;i<95;i++)
            pos[i]=0;

        pre=1;
        for(i=0;i<n;i++)
        {
            if(inp[i]==' ')
                continue;

            if(pos[inp[i]]==0)
            {
                pos[inp[i]]=pre;
                alpha[pre]=1;
                pre++;
            }
            else
                alpha[pos[inp[i]]]++;

        }
        for(i=1;i<pre;i++)
        {
            key=alpha[i];

            for(j=i-1;j>0;j--)
            {
                if(alpha[j]>=key)
                    break;
                else
                    alpha[j+1]=alpha[j];
            }
            alpha[j+1]=key;
        }
        cost=0;

        key=1;
        k=2;
        for(i=1;i<=6;i++)
        {

            for(j=0;j<i;j++)
            {
                cost+=alpha[key]*k;
                key++;
                if(key==pre)
                    {
                        pre=0;
                        break;
                    }
            }
            k++;
            if(pre==0)
                break;
        }

        for(i=5;i>0;i--)
        {
            for(j=0;j<i;j++)
            {
                cost+=alpha[key]*k;
                key++;
                if(key==pre)
                    {
                        pre=0;
                        break;
                    }
            }
            k++;
            if(pre==0)
                break;
        }
        printf("%d\n",cost);


    }

    return 0;
}

