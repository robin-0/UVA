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
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back



int main()
{
    int i,temp,N,cnt,tp=1;
    int bitTest;
//OUTPUT
    while(1)
    {
        getInt(N);

        if(N==0)
            break;

        if(tp>1)
            printf("\n");

        cnt=0;

        for(i=1234;;i++)
        {
            if(i*N>98765)
                break;


            if(i<10000)
                bitTest=1;
            else
                bitTest=0;

            temp=i;

            while(temp)
            {
                bitTest |= 1<<(temp%10);

                temp/=10;
            }

            temp=i*N;

            while(temp)
            {
                bitTest |= 1<<(temp%10);

                temp/=10;
            }

            if(bitTest==((1<<10)-1))
            {
                cnt++;
                if(i<10000)
                    printf("%d / 0%d = %d\n",i*N,i,N);
                else
                    printf("%d / %d = %d\n",i*N,i,N);
            }
        }

        if(cnt==0)
            printf("There are no solutions for %d.\n",N);
        tp++;
    }

    return 0;
}
