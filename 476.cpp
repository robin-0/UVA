/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define EPS 1e-8

int main()
{
    int i,test,n=0,tp=1;
    double rec[40005][4],x,y;
    char ch;

    while((ch=getchar())!=EOF)
    {
        if(ch=='*')
            break;

        scanf("%lf%lf%lf%lf",&rec[n][0],&rec[n][3],&rec[n][1],&rec[n][2]);

        n++;
        getchar();
    }

    while(scanf("%lf%lf",&x,&y)!=EOF)
    {
        if((fabs(x-9999.9)<EPS)&&(fabs(y-9999.9)<EPS))
            break;

        test=0;

        for(i=0;i<n;i++)
        {
            if(((rec[i][3]>y)&&(rec[i][2]<y))&&((rec[i][1]>x)&&(rec[i][0]<x)))
            {
                printf("Point %d is contained in figure %d\n",tp,i+1);
                test=1;
            }
        }

        if(test==0)
            printf("Point %d is not contained in any figure\n",tp);

        tp++;
    }


    return 0;
}
