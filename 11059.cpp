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
    long long int max,prod;
    int n,num[30],i,j,tp=1;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);

        max=0;

        for(i=0;i<n;i++)
        {
            prod=num[i];

            if(prod>max)
            {
                max=prod;
            }
            for(j=i+1;j<n;j++)
            {
                prod*=num[j];

                if(prod==0)
                    break;

                if(prod>max)
                {
                    max=prod;
                }
            }
        }

        printf("Case #%d: The maximum product is %lld.\n\n",tp,max);
        tp++;

    }


    return 0;

}
