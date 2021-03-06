/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back


int main()
{
    int samples[100],boxes[10][3];
    int C,S,C2,sum,tp=1,diff;
    int i,j;
    double ans,mean;

    //OUTPUT

    while(scanf("%d%d",&C,&S)!=EOF)
    {
        //if(C==0&&S==0)       break;
        C2=2*C;
        sum=0;
        diff=0;
        ans=EPS;

        for(i=0;i<S;i++)
        {
            getInt(samples[i])
            sum+=samples[i];
        }

        mean=(sum*1.0)/C;
        //DEBUG(mean)

        for(;i<C2;i++)
        {
            samples[i]=0;
        }

        sort(samples,samples+2*C);
        /*for(i=0;i<2*C;i++)
        {
            printf("%d ",samples[i]);
        }
        printf("\n");*/
        for(j=0;j<C;j++)
        {
            boxes[j][0]=samples[j];
            boxes[j][1]=samples[C2-1-j];

            ans+=fabs((boxes[j][0]+boxes[j][1])*1.0-mean);

            //DEBUG(ans);
        }

        /*for(j=0;j<C;j++)
        {
            printf(" %d:",j);

//            if(boxes[j][0]!=0)
                printf(" %d",boxes[j][0]);
  //          if(boxes[j][1]!=0)
                printf(" %d",boxes[j][1]);

            printf("\n");
        }*/



        printf("Set #%d\n",tp);
        tp++;

        for(j=0;j<C;j++)
        {
            printf(" %d:",j);

            if(boxes[j][0]!=0)
                printf(" %d",boxes[j][0]);
            if(boxes[j][1]!=0)
                printf(" %d",boxes[j][1]);

            printf("\n");
        }

        printf("IMBALANCE = %.5lf\n\n",ans);

    }





    return 0;
}


