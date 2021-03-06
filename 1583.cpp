/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 200005

int digitsum(int N);

int main()
{
    int T,N,digit,i;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&N);
        digit=log10(N)+1;

        for(i=N-digit*9;i<=N;i++)
        {
            if(i>0)
            {
                if(digitsum(i)==N)
                {
                    printf("%d\n",i);
                    break;
                }
            }
        }
        if(i>N)
            printf("0\n");

        //printf("%d\n",digit);
    }


    return 0;

}



int digitsum(int N)
{
    int ans=N;

    for(;;)
    {
        if(N==0)
            break;
        ans+=N%10;
        N/=10;
    }

    return ans;
}
