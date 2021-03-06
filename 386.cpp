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

struct num
{
    int a;
    int b;
    int c;
    int d;
};

vector <num> ans;

bool isFirstSmaller(struct num a1, struct num a2);

bool isFirstSmaller(struct num a1, struct num a2)
{
    if(a1.a<a2.a)
        return true;
    else if(a1.a>a2.a)
        return false;
    else
    {
        if(a1.b<a2.b)
            return true;
        else if(a1.b>a2.b)
            return false;
        else
        {
            if(a1.c<a2.c)
                return true;
            else if(a1.c>a2.c)
                return false;
            else
            {
                if(a1.d<a2.d)
                    return true;
                else if(a1.b>a2.b)
                    return false;
            }
        }
    }
}


int main()
{
    int a,b,c,d,temp,i=0,len;
    struct num sample;
    //OUTPUT
/*while(1)
{
    getInt(a)
    DEBUG(BS(1,200,a))
}*/
    for(b=2;b<=200;b++)
    {
        for(c=b;;c++)
        {
            temp=b*b*b + c*c*c;
            if(temp>8000000)
                break;

            for(d=c;;d++)
            {
                temp=b*b*b + c*c*c + d*d*d;
                if(temp>8000000)
                    break;

                a=pow(temp,1/3.0);

                if(a*a*a==temp)
                {
                    sample.a=a;
                    sample.b=b;
                    sample.c=c;
                    sample.d=d;

                    ans.pb(sample);
                }

                else
                {
                    a++;
                    if(a*a*a==temp)
                    {
                        sample.a=a;
                        sample.b=b;
                        sample.c=c;
                        sample.d=d;

                        ans.pb(sample);
                    }
                    else
                    {
                        a-=2;
                        if(a*a*a==temp)
                        {
                            sample.a=a;
                            sample.b=b;
                            sample.c=c;
                            sample.d=d;

                            ans.pb(sample);
                        }
                    }
                }
            }
        }
    }

    sort(ans.begin(),ans.end(),isFirstSmaller);

    len=ans.size();

    for(i=0;i<len;i++)
        printf("Cube = %d, Triple = (%d,%d,%d)\n",ans[i].a,ans[i].b,ans[i].c,ans[i].d);

    return 0;
}
