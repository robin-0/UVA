/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int t,tp=1;
    double N,M,A,B,ans;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf",&N,&M,&A,&B);
        ans=(M*(A+B)-N*A)/(B);


        if(((ans-10)>0.00)||(ans<0.00))
            printf("Case #%d: Impossible\n",tp);
        else
            printf("Case #%d: %.2lf\n",tp,ans);

        tp++;
    }




    return 0;
}
