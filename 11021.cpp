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
#define MOD 1000000007

double preCalculation[1005];
double prob[1005];
int tp=1;
int len;

long long int cnt=0;

double calculate(int k , int n);

int main ()
{
    int T,k,m,i;


    scanf("%d",&T);

    while(T--)
    {
        scanf("%d%d%d",&len,&k,&m);

        cnt=0;

        for(i=0;i<len;i++)
            scanf("%lf",&prob[i]);

        printf("Case #%d: %.7lf\n",tp,pow(calculate(k,m),k));

        tp++;
    }

    return 0;

}


double calculate (int k , int n)
{
    int i,j;

    if(k==0)
        preCalculation[0]=1.0;
    else
        preCalculation[0]=0.0;

    preCalculation[1]=(prob[0]);

    for(i=2;i<=n;i++)
    {
        preCalculation[i]=0.0;

        for(j=0;j<len;j++)
        {
            preCalculation[i]+=prob[j]*pow(preCalculation[i-1],j);
        }
      //  preCalculation[i]=pow(preCalculation[i],k);
    }
    //preCalculation[1]=pow(preCalculation[1],k);

    return preCalculation[n];
}
