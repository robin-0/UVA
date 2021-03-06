/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9


int main ()
{
    double a;
    double Stripe,Dot,Rest;

    while(scanf("%lf",&a)!=EOF)
    {
        Stripe = (PI*a*a/4.0) - (a*a/2.0)*((PI/3.0) + sin(PI/3.0)) + (a*a/4.0);
        Stripe*=4.0;
        Dot    = (PI-2.0)*a*a - 2*Stripe;
        Rest   = a*a - Stripe - Dot;

        Stripe+=EPS;
        Dot+=EPS;
        Rest+=EPS;

        printf("%.3lf %.3lf %.3lf\n",Stripe,Dot,Rest);
    }

    return 0;

}

