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
    int n,day[1005],month[1005],year[1005],i,j,max,min;
    char name[1005][55];

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%s%d%d%d",name[i],&day[i],&month[i],&year[i]);
        max=0;
        min=0;

        for(i=1;i<n;i++)
        {
            if(year[i]>year[min])
            {
                min=i;
            }
            else if(year[i]==year[min])
            {
                if(month[i]>month[min])
                {
                    min=i;
                }
                else if(month[i]==month[min])
                {
                    if(day[i]>day[min])
                    {
                        min=i;
                    }
                }
            }

            if(year[i]<year[max])
            {
                max=i;
            }
            else if(year[i]==year[max])
            {
                if(month[i]<month[max])
                {
                    max=i;
                }
                else if(month[i]==month[max])
                {
                    if(day[i]<day[max])
                    {
                        max=i;
                    }
                }
            }
        }

        printf("%s\n%s\n",name[min],name[max]);

    }



    return 0;

}
