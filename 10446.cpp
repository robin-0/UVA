/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

unsigned long long int trib ( int n , int base) ;

int main()
{
    int n,base,tp=1;

    while(1)
    {
        scanf("%d%d",&n,&base);
        if(n>60)
            break;
        printf("Case %d: %llu\n",tp,trib(n,base));
        tp++;
    }

    return 0;
}


unsigned long long int trib ( int n , int base)
{
    unsigned long long int array[100]={0,},stack=base;
    int i,j;

    if(n<2)
        return 1;

    for (i=2;i<=n;i++)
    {
        array[i]=1+stack;

        if((i-base)<2)
            stack--;
        else
            stack-=array[i-base];

        stack+=array[i];

    }

    return array[n];

}
