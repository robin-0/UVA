/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main()
{
    int num;
    long long int ans,temp;

    while(scanf("%lld",&temp)!=EOF)
    {
        ans=temp*(temp+1);
   
        ans/=2;

        
        temp=ans*ans;


        printf("%lld\n",temp);
    }

}
