/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{

    double k,l,s,w,v,ke;

    while(1)
    {
        scanf("%lf%lf%lf%lf",&k,&l,&s,&w);

        if((k<=1e-11)&&(l<=1e-11)&&(s<=1e-11)&&(w<=1e-11))
            break;

        if(s>=l) l=s-l;
        else l=0.00;
        ke=w*9.81*s-0.5*k*l*l;

        if(ke<=1e-11)
            printf("Stuck in the air.\n");
        else
        {
            v=sqrt(ke*2.00/w);

            if( (v-10.00)>=1e-11 )
                printf("Killed by the impact.\n");
            else
                printf("James Bond survives.\n");
        }
    }

    return 0;

}


