/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 1000005
#define MOD 1000000007
#define EPS 1e-12

int main ()
{
    double L,r1,r2,r3,r4;



    while(scanf("%lf",&L)!=EOF)
    {
        r1=L*sin(PI/3.0);
        r2=r1/(1+sin(PI/3.0));
        r3=r1/2.0;

        double a,b,c,d,root3=sqrt(3.0);

        a=5.0/3.0;
        b=((4.0/root3) + root3)*L;
        c=(-7.0/4.0)*L*L;
        d=sqrt(b*b - 4*a*c);

        r4=(-b+d)/(2.0*a);

        if(fabs(r1)<=EPS) r1=EPS;
        if(fabs(r2)<=EPS) r2=EPS;
        if(fabs(r3)<=EPS) r3=EPS;
        if(fabs(r4)<=EPS) r4=EPS;

        printf("%.10lf %.10lf %.10lf %.10lf\n",r1,r2,r3,r4);


    }

    return 0;

}

