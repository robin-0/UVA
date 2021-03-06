/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9



int main ()
{
    int D,I,lo,hi,mid,offset,T;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d%d",&D,&I);

        offset=(1<<(D-1))-1;

        lo=1;
        hi=1<<(D-1);

        while(lo<hi)
        {
            mid=(lo+hi)/2;

            if(I%2==0)
            {
                lo=mid+1;
                I/=2;
            }

            else
            {
                hi=mid;
                I++;
                I/=2;
            }
        }

        printf("%d\n",lo+offset);

    }

    scanf("%d",&T);


    return 0;

}
