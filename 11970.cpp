/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005



int main()
{
	long long int squares[40000],T,N,X,i,sq,tp=1;


	for(i=1;;i++)
    {
        sq=i*i;
        if(sq>1000000000)
            break;
        squares[i]=sq;
    }

    scanf("%lld",&T);
    while(T--)
    {
        long long int ans[40000]={0,},ans_len=0;

        scanf("%lld",&N);

        for(i=1;;i++)
        {
            if(squares[i]>=N)
                break;
            X=N-squares[i];

            if(X%i==0)
                ans[ans_len++]=X;
        }

        printf("Case %lld:",tp);
        tp++;

        for(i=ans_len-1;i>=0;i--)
        {
            printf(" %lld",ans[i]);
        }
        printf("\n");

    }

    return 0;


}
