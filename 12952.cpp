/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

int my_max (int a , int b);

int main()
{
    int a,b;

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        printf("%d\n",my_max(a,b));
    }



    return 0;
}



int my_max (int a , int b)
{
    if (a>=b)
        return a;
    else
        return b;
}
