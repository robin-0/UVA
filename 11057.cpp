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

int n,m;
int array[MAX];

bool BS(int lo , int hi , int ase , int lagbe);

bool BS(int lo , int hi , int ase , int lagbe)
{
    int mid;

    while(lo<=hi)
    {
        mid=(lo+hi)/2;

        if(lagbe==array[mid])
        {
            if(ase!=lagbe)
                return true;
            else
            {
                if(mid>0)
                {
                    if(array[mid-1]==lagbe)
                        return true;
                }

                if(mid<n-1)
                {
                    if(array[mid+1]==lagbe)
                        return true;
                }

                return false;
            }
        }

        else if(lagbe>array[mid])
            lo=mid+1;
        else
            hi=mid-1;
    }

    return false;
}

int main()
{
    int i,j,a,b;

//OUTPUT
    while(scanf("%d",&n)!=EOF)
    {
        //if(n==-1)
          //  break;
        for(i=0;i<n;i++)
            getInt(array[i])
        getInt(m)

        sort(array,array+n);

        a=-1;
        b=-1;

        for(i=0;i<n;i++)
        {
            if(BS(0,n,array[i],m-array[i])==true)
            {
                if(a==-1 && b==-1)
                {
                    a=array[i];
                    b=m-array[i];
                }

                else
                {
                    if(abs(a-b)>abs(m-2*array[i]))
                    {
                        a=array[i];
                        b=m-array[i];
                    }
                }
            }
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n",SMALLER(a,b),BIGGER(a,b));
    }

    return 0;
}

