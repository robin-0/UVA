/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    long long int num;
    int array[1000],i;

    while(1)
    {
        scanf("%lld",&num);

        if(num<0)
            break;

        for(i=0;;i++)
        {
            array[i]=num%3;
            num/=3;

            if(num==0)
                break;
        }
        for(;i>=0;i--)
            printf("%d",array[i]);
        printf("\n");


    }
    return 0;
}

