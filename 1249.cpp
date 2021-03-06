/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

///total time 72 min 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define INF 1000000

double getTriangleArea(double x1 , double y1 , double x2 , double y2 , double x3 , double y3 );
double getLength(double x1 , double y1 , double x2 , double y2);
double xIntersection(double x1,double x2,double m1,double m2);
double yIntersection(double y1,double y2,double m1,double m2);
double xOfParallelogram (double x1 , double x2 , double x3 );
double yOfParallelogram (double y1 , double y2 , double y3 );

int main ()
{

    double xa,ya,xb,yb,xc,yc,xd,yd,xe,ye,xf,yf;
    double area,angle,AC,AB,BC,height,AH,xh,yh,xg,yg;
    //OUTPUT
    while(1)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc,&xd,&yd,&xe,&ye,&xf,&yf);
        //printf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf\n",xa,ya,xb,yb,xc,yc,xd,yd,xe,ye,xf,yf);
        if((fabs(xa)<1e-6) &&(fabs(ya)<1e-6)&&(fabs(xb)<1e-6)&&(fabs(yb)<1e-6)&&(fabs(xc)<1e-6)&&(fabs(yc)<1e-6)&&(fabs(xd)<1e-6)&&(fabs(yd)<1e-6)&&(fabs(xe)<1e-6)&&(fabs(ye)<1e-6)&&(fabs(xf)<1e-6)&&(fabs(yf)<1e-6))
            break;

        area=getTriangleArea(xd,yd,xe,ye,xf,yf);
        //printf("%lf\n",area);

        AC=getLength(xa,ya,xc,yc);
        AB=getLength(xa,ya,xb,yb);
        BC=getLength(xb,yb,xc,yc);

        //printf("%lf\n",AC);
        //printf("%lf\n",AB);
        //printf("%lf\n",BC);

        angle=acos( (AC*AC + AB*AB - BC*BC) /(2.0*AC*AB) );
        //printf("%lf\n",angle);

        height=area/AB;
        //printf("%lf\n",height);
        AH=height/sin(angle);
        //printf("%lf\n",AH);


        if(AH<AC)
        {
            xh=xIntersection(xa,xc,AH,AC-AH);
            yh=yIntersection(ya,yc,AH,AC-AH);
            //printf("1\n");
        }

        else
        {
            xh=xIntersection(xa,xc,-AH,AH-AC);
            yh=yIntersection(ya,yc,-AH,AH-AC);
            //printf("2\n");
        }

        //printf("%lf %lf\n",xh,yh);

        xg=xOfParallelogram(xh,xb,xa);
        yg=yOfParallelogram(yh,yb,ya);

        if(fabs(xg)<1e-6)
            xg=0.000;
        if(fabs(yg)<1e-6)
            yg=0.000;
        if(fabs(xh)<1e-6)
            xh=0.000;
        if(fabs(yh)<1e-6)
            yh=0.000;

        printf("%.3lf %.3lf %.3lf %.3lf\n",xg,yg,xh,yh);
    }

    return 0;

}


double getTriangleArea(double x1 , double y1 , double x2 , double y2 , double x3 , double y3 )
{
    double AB,BC,CA,s,area;

    AB=getLength(x1,y1,x2,y2);
    BC=getLength(x3,y3,x2,y2);
    CA=getLength(x1,y1,x3,y3);
    s=(AB+BC+CA)/2.0;

    area=sqrt(s*(s-AB)*(s-BC)*(s-CA));
    return area;
}

double getLength(double x1 , double y1 , double x2 , double y2)
{
    return sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
}

double xIntersection(double x1,double x2,double m1,double m2)
{
    double x;

    x=(x1*m2+x2*m1)/(m1+m2);

    return x;
}

double yIntersection(double y1,double y2,double m1,double m2)
{
    double y;

    y=(y1*m2+y2*m1)/(m1+m2);

    return y;
}

double xOfParallelogram (double x1 , double x2 , double x3 )
{
    return (x1+x2-x3);
}

double yOfParallelogram (double y1 , double y2 , double y3 )
{
    return (y1+y2-y3);
}
