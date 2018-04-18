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
   int n;
   double area,R,r,angle,a,b,c;
   double pi=acos(-1.0);
   int tp=1;

   while(1)
   {
       scanf("%d",&n);
       if(n<3)
        break;
       scanf("%lf",&area);
       angle=2.0*pi/(n*1.0);

       R=sqrt(area/((n*0.5)*sin(angle)));

       r=sqrt(2*R*R*(1.0+cos(angle)))/2.0;



       printf("Case %d: %.5lf %.5lf\n",tp,pi*R*R-area,area-pi*r*r);
       tp++;
   }

    return 0;

}

