/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-13
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

double L,L2,a,n,ratioo;

double NewtonRaphson ( );
double f(double ang);
double f_(double ang);

double NewtonRaphson ( )
{
    double y,dy,x=PI/4.0,dx;

    while(1)
    {
        y=f(x);
        dy=f_(x);

        if(fabs(y)<EPS)
            return x;
        //DEBUG(y);
        x=x-(y/dy);
    }

}

double f(double ang )
{
    return sin(ang) - ratioo*ang;
}

double f_(double ang)
{
    return cos(ang) - ratioo;
}


int main()
{
    double ang,r,ans;
//OUTPUT
    while(1)
    {
        scanf("%lf%lf%lf",&L,&n,&a);

        if( signbit(L)!=0 || signbit(n)!=0 || signbit(a)!=0)
            break;

        L2=(1.0+a*n)*L;
        ratioo=L/L2;

        if(fabs(L2-L)<EPS)
            printf("%.3lf\n",EPS);
        else
        {
//DEBUG(L2)
///DEBUG(ratioo)
            ang=NewtonRaphson();
//DEBUG(ang)
            r=L2/(2*ang);

            ans=r*(1-cos(ang));

            if(fabs(ans)<EPS)
                ans=EPS;

            printf("%.3lf\n",ans);
        }
    }

    return 0;
}
