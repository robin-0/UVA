/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int main()
{
    int N,Q,h[100005],hi,lo,mid,i,ch;

    while(scanf("%d",&N)!=EOF)
    {
        for(i=0;i<N;i++)
            scanf("%d",&h[i]);

        scanf("%d",&Q);

        while(Q--)
        {
            scanf("%d",&ch);
            lo=0;
            hi=N-1;
            mid=(lo+hi)/2;

            while(lo<=hi)
            {
                if(ch==h[mid])
                {
                    break;
                }
                else if(ch>h[mid])
                {
                    lo=mid+1;
                }
                else
                {
                    hi=mid-1;
                }

                mid=(lo+hi)/2;
            }

            hi=-1;
            lo=-1;

            //find hi

            i=mid;

            for(;i<N;i++)
            {
               if(h[i]>ch)
               {
                   hi=h[i];
                   break;
               }
            }

            //find lo

            i=mid;

            for(;i>=0;i--)
            {
                if(h[i]<ch)
                {
                    lo=h[i];
                    break;
                }
            }

            if(lo==-1)
                printf("X ");
            else
                printf("%d ",lo);

            if(hi==-1)
                printf("X\n");
            else
                printf("%d\n",hi);


        }
    }


    return 0;

}
