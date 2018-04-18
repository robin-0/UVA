/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    double T1,T2,r1,r2,a,b,c,d,h,hl,ha;
    int t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%lf%lf%lf%lf%lf",&hl,&r2,&T1,&T2,&h);

        if((h-hl)<0)
        {
            printf("%.6lf %.6lf\n",h,h);
        }
        else
        {
            ha=h+r2*T2;
            a=T1;
            b=-r2*T1-ha;
            c=r2*hl;
            d=b*b-4.0*a*c;
            d=sqrt(d);
            r1=(-b+d)/(2.0*a);

            if((h-hl)>0)
                printf("%.6lf %.6lf\n",r1*T1,r1*T1);
            else
                printf("%.6lf %.6lf\n",h,r1*T1);
        }

    }


    return 0;
}

