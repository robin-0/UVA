/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int C,K,Show,Tot;
    double Prob;

    while(scanf("%d%d%d",&K,&C,&Show)!=EOF)
    {
        Tot=K+C;

        Prob=(((C-1)*C*1.00)/((Tot-Show-1)*1.00))+(((C)*K*1.00)/((Tot-Show-1)*1.00));
        Prob/=(Tot*1.00);
        printf("%.5lf\n",Prob);
    }


    return 0;

}


