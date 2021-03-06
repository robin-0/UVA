/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005



double argument(int x, int  y);

int main()
{
    int a,b;
    double thita,value;
    int T;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&a,&b);
        thita=argument(a,b);
        value=a*sin(thita)+b*cos(thita);
        printf("%.2lf %.2lf\n",thita,value);
    }

    return 0;

}

double argument(int  x, int  y)
{
    double a=x;
    double b=y;

    if(y>=0&&x==0)
        return 0.0000;
    else if(y<0&&x==0)
        return pi;
    else if(y==0&&x>0)
        return pi/2.0 ;
    else if(y==0&&x<0)
        return (3.0*pi)/2.0 ;
    else if(y>0&&x>0)
        return atan2(a,b);
    else if(y<0&&x>0)
        return pi-atan2(a,-b);
    else if(y<0&&x<0)
        return pi+atan2(-a,-b);
    else if(y>0&&x<0)
        return 2*pi-atan2(-a,b);

}



