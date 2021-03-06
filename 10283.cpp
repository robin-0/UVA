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
    int n,Rin;
    double R,r,a,b,ang,pi=acos(-1),x,A;


    while(scanf("%d%d",&Rin,&n)!=EOF)
    {
        R=(double)Rin;

        if(n==2)
        {
            r=R/2.0;
        }

        else  if(n==1)
        {
            r=R;
        }

        else
        {
            ang=(pi/(1.0*n));

            a=tan(ang);
            b=sqrt(a*a+1.0);


            x=R/(1.0+(a/b));
            r=R-x;
        }

        if(n==1)
        {
            a=0.0000000000;
            b=0.0000000000;
        }

        else
        {
            x=R-r;
            ang=(pi*(2.0/n));
            A=((n)/2.0)*x*x*sin(2*pi/(n*1.0));
            a=A-(n*pi*r*r*(((n-2)*1.0)/(2.0*n)));

            b=pi*R*R-(n*1.0)*pi*r*r-a;
        }


        printf("%.10lf",r);
        printf(" %.10lf",a);
        printf(" %.10lf\n",b);
    }


    return 0;

}

