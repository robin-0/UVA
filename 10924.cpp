/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sieve[3000];

int main()
{
    int i,j,n,sum;
    char inp[30];

    sieve[0]=1;
    sieve[1]=0;

    for(i=2;i<2950;i++)
    {
        if(sieve[i]==0)
        {
            for(j=i*i;j<2950;j+=i)
            {
                sieve[j]=1;
            }
        }
    }

    while(gets(inp))
    {
        n=strlen(inp);
        if(n==0)
            continue;
        sum=0;
        for(i=0;i<n;i++)
        {
            if(inp[i]>='a'&&inp[i]<='z')
                sum+=inp[i]-'a'+1;
            else if(inp[i]>='A'&&inp[i]<='Z')
                sum+=inp[i]-'A'+27;
        }

        if(sieve[sum]==0)
            printf("It is a prime word.\n");

        else
            printf("It is not a prime word.\n");
    }




    return 0;
}
