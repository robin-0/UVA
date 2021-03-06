/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005


double get_angle(double x , double y);
double rotation (double x , double y , int mood , double angle);

int main()
{
    int T,tp=1;
    double Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,Cx2,Cy2,Dx2,Dy2;
    double AB,BC,CD,DA,thita,short_length,angle_C,angle_D,angle_AB;


    //while(1)
    //{scanf("%lf%lf%lf",&Ax,&Ay,&angle_AB);printf("%lf\t%lf\n",rotation(Ax,Ay,1,angle_AB),rotation(Ax,Ay,2,angle_AB));}
     scanf("%d",&T);

     while(T--)
     {
        scanf("%lf%lf%lf%lf%lf%lf%lf",&Ax,&Ay,&Bx,&By,&BC,&CD,&DA);

        AB=sqrt((Ax-Bx)*(Ax-Bx) + (Ay-By)*(Ay-By));
        //printf("AB  %lf\n",AB);
        short_length=AB-CD;
        //printf("short_length  %lf\n",short_length);
        angle_D=acos((short_length*short_length + DA*DA -BC*BC)/(2*short_length*DA));
        //printf("angle D   %lf\n",angle_D);
        angle_C=acos((short_length*short_length - DA*DA +BC*BC)/(2*short_length*BC));
        //printf("angle C   %lf\n",angle_C);
        Dx = DA*cos(angle_D);
        Dy = DA*sin(angle_D);
        Cx = AB - BC*cos(angle_C);
        Cy = BC*sin(angle_C);

        //printf("Case %d:\n%.7lf %.7lf %.7lf %.7lf %.7lf %.7lf %.7lf %.7lf\n",tp,0.0,0.0,AB,0.0,Cx,Cy,Dx,Dy);

        angle_AB=atan2(By-Ay,Bx-Ax);
        //printf("angle AB   %lf\n",angle_AB);

        Dx2 = rotation(Dx,Dy,1,angle_AB);
        Dy2 = rotation(Dx,Dy,2,angle_AB);
        Cx2 = rotation(Cx,Cy,1,angle_AB);
        Cy2 = rotation(Cx,Cy,2,angle_AB);

        Dx2+=Ax;
        Dy2+=Ay;
        Cx2+=Ax;
        Cy2+=Ay;

        printf("Case %d:\n%.7lf %.7lf %.7lf %.7lf\n",tp,Cx2,Cy2,Dx2,Dy2);
        tp++;


     }


    return 0;

}


double rotation (double x , double y , int mood , double angle)
{
    double r,thita,x2,y2;

    r=sqrt(x*x + y*y);
    thita=get_angle(x,y);

    if(mood==1)
    {
        // for x
        return r*cos(thita+angle);
    }

    else
    {
        // for y
        return r*sin(thita+angle);
    }
}


double get_angle(double x , double y)
{


    if(x==0 && y==0)
        return 0.000000;
    else if(x>=0 && y>=0)
    {
        return atan2(y,x);
    }
    else if(x<0 && y>=0)
    {
        return pi-atan2(y,-x);
    }
    else if(x<0 && y<0)
    {
        return pi+atan2(-y,-x);
    }
    else if(x>=0 && y<0)
    {
        return 2*pi-atan2(-y,x);
    }
}
