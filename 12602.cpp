/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int a,b,t;
    char c;

    scanf("%d",&t);
    getchar();
    while(t--)
    {
        a=0;
        b=0;

        c=getchar();
        a+=(c-'A')*26*26;
        c=getchar();
        a+=(c-'A')*26;
        c=getchar();
        a+=(c-'A');
        c=getchar();

        scanf("%d",&b);
        getchar();

        if(abs(a-b)<=100)
            printf("nice\n");
        else
            printf("not nice\n");


    }


    return 0;
}

