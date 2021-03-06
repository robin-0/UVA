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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9


int main ()
{
    long long int n;
    vector <long long int> array,twos,threes;
    long long int temp;
    int i,j,len=0;
//OUTPUT
    twos.push_back(1);
    threes.push_back(1);

    for(i=1;;i++)
    {
        temp=twos[i-1]*2;

        if(temp>2147483649)
            break;
        else
            twos.push_back(temp);
    }

    for(i=1;;i++)
    {
        temp=threes[i-1]*3;

        if(temp>2147483649)
            break;
        else
            threes.push_back(temp);
    }

    int a=twos.size(),b=threes.size();

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            temp=twos[i]*threes[j];

            if(temp<0 || temp>2147483649)
                break;
            else
                array.push_back(temp);
        }
    }

    sort(array.begin(),array.end());

    /*for(i=0;;i++)
    {

        printf("%lld\n",array[i]);
        char ch=getchar();
    }*/

    //DEBUG(array[array.size()- 1 ]);


    while(1)
    {
        scanf("%lld",&n);

        if(n==0)
            break;

        i=lower_bound(array.begin(),array.end(),n) - array.begin();

        printf("%lld\n",array[i]);


    }



    return 0;

}


