/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num,a,b,c,d,tp=1,t,i,pum,fct;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&num);
        pum=sqrt(num);

        fct=0;

        for(i=2;i<=pum;i++)
        {
            if(num%i==0)
            {
                if(fct==0)
                {
                    a=i;
                    b=num/i;
                    fct=1;
                }

                else
                {
                    c=i;
                    d=num/i;
                    fct=2;
                    break;
                }
            }
        }

        if(fct==1)
        {
            c=num;
            d=1;
        }

        printf("Case #%d: %d = %d * %d = %d * %d\n",tp,num,a,b,c,d);
        tp++;


    }

    return 0;

}


