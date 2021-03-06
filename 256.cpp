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
#define MOD 100000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

vector <long long  int> two;
vector <long long int> four;
vector <long long int> six;
vector <long long int> eight ;
vector <long long int> squares;

int main()
{
    int inp;
    long long int i,j,num;

    for(i=0;;i++)
    {
        if(i*i>=100000000)
            break;
        squares.pb(i*i);
    }

    for(i=0;;i++)
    {
        if(squares[i]>=100)
            break;
        if((squares[i]/10)+(squares[i]%10)==i)
            two.pb(squares[i]);
    }

    for(i=0;;i++)
    {
        if(squares[i]>=10000)
            break;
        if((squares[i]/100)+(squares[i]%100)==i)
            four.pb(squares[i]);
    }

    for(i=0;;i++)
    {
        if(squares[i]>=1000000)
            break;
        if((squares[i]/1000)+(squares[i]%1000)==i)
            six.pb(squares[i]);
    }

    for(i=0;;i++)
    {
        if(squares[i]>=100000000)
            break;
        if((squares[i]/10000)+(squares[i]%10000)==i)
            eight.pb(squares[i]);
    }

    sort(two.begin(),two.end());
    sort(four.begin(),four.end());
    sort(six.begin(),six.end());
    sort(eight.begin(),eight.end());

    int len2=two.size();
    int len4=four.size();
    int len6=six.size();
    int len8=eight.size();

    while(scanf("%d",&inp)!=EOF)
    {
        if(inp==2)
        {
            for(i=0;i<len2;i++)
            {
                if(two[i]<10)
                    printf("0%lld\n",two[i]);
                else
                    printf("%lld\n",two[i]);
            }
        }

        else if(inp==4)
        {
            for(i=0;i<len4;i++)
            {
                if(four[i]<1000)
                    printf("0");
                if(four[i]<100)
                    printf("0");
                if(four[i]<10)
                    printf("0");
                printf("%lld\n",four[i]);
            }
        }

        else if(inp==6)
        {
            for(i=0;i<len6;i++)
            {
                if(six[i]<100000)
                    printf("0");
                if(six[i]<10000)
                    printf("0");
                if(six[i]<1000)
                    printf("0");
                if(six[i]<100)
                    printf("0");
                if(six[i]<10)
                    printf("0");
                printf("%lld\n",six[i]);
            }
        }

        else if(inp==8)
        {
            for(i=0;i<len8;i++)
            {
                if(eight[i]<10000000)
                    printf("0");
                if(eight[i]<1000000)
                    printf("0");
                if(eight[i]<100000)
                    printf("0");
                if(eight[i]<10000)
                    printf("0");
                if(eight[i]<1000)
                    printf("0");
                if(eight[i]<100)
                    printf("0");
                if(eight[i]<10)
                    printf("0");
                printf("%lld\n",eight[i]);
            }
        }

    }


    return 0;
}
