/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int t,i,n,M,A,R,G,I,T,min;
    char inp[100005];

    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",inp);
        M=0;
        A=0;
        R=0;
        G=0;
        I=0;
        T=0;

        n=strlen(inp);

        for(i=0;i<n;i++)
        {
            if(inp[i]=='M')
                M++;
            else if(inp[i]=='A')
                A++;
            else if(inp[i]=='R')
                R++;
            else if(inp[i]=='G')
                G++;
            else if(inp[i]=='I')
                I++;
            else if(inp[i]=='T')
                T++;
        }
        A/=3;
        R/=2;

        min=M;

        if(A<min)
            min=A;

        if(R<min)
            min=R;

        if(G<min)
            min=G;

        if(I<min)
            min=I;

        if(T<min)
            min=T;

        printf("%d\n",min);
    }

    return 0;

}
