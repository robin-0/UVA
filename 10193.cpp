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
    int T,n1,a,b,i,two,tp=1;
    char S1[105];

    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",S1);
        n1=strlen(S1);

        a=0;
        two=1;

        for(i=n1-1;i>=0;i--)
        {
            a+=(S1[i]-48)*two;
            two<<=1;
        }

        scanf("%s",S1);
        n1=strlen(S1);

        b=0;
        two=1;

        for(i=n1-1;i>=0;i--)
        {
            b+=(S1[i]-48)*two;
            two<<=1;
        }

        if(b>a)
        {
            a=a^b;
            b=a^b;
            a=a^b;
        }

        while(b)
        {
            n1=b;
            b=a%b;
            a=n1;
        }

        if(a==1)
            printf("Pair #%d: Love is not all you need!\n",tp);
        else
            printf("Pair #%d: All you need is love!\n",tp);

        tp++;
    }

    return 0;

}
