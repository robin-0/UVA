/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int n,b[1000],i,j,test,tp=1,temp;

    while(scanf("%d",&n)!=EOF)
    {
        int plus[20005]={0,};

        for(i=0;i<n;i++)
            scanf("%d",&b[i]);

        if(b[0]>0)
            test=1;
        else
            test=0;

        for(i=1;(i<n)&&(test==1);i++)
        {
            if((b[i]<=b[i-1])||(b[i]<=0))
                test=0;
        }

        for(i=0;(i<n)&&(test==1);i++)
        {
            for(j=i;(j<n)&&(test==1);j++)
            {
                temp=b[i]+b[j];

                    if(plus[temp]==0)
                    {
                        plus[temp]=1;
                    }

                    else
                    {
                        test=0;
                        break;
                    }


            }

            if(test==0)
                break;

        }
        
        

        if(test==1)
            printf("Case #%d: It is a B2-Sequence.\n\n",tp);
        else
            printf("Case #%d: It is not a B2-Sequence.\n\n",tp);

        tp++;
    }


    return 0;

}


