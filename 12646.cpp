/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int a,b,c;

    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a!=b&&b==c)
            printf("A\n");
        else if(a!=b&&a==c)
            printf("B\n");
        else if(a==b&&a!=c)
            printf("C\n");
        else
            printf("*\n");

    }

    return 0;
}
