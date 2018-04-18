/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

int my_max(int a  );

int main()
{
    int A,C,laser,i,h[10005];

    while(scanf("%d%d",&A,&C)!=EOF)
    {
        if(A==0&&C==0)
            break;

        laser=0;

        for(i=0;i<C;i++)
            scanf("%d",&h[i]);

        laser=A-h[0];

        for(i=1;i<C;i++)
        {
            laser+=my_max(h[i-1]-h[i]);
        }
        printf("%d\n",laser);
    }

    return 0;
}

int my_max(int a )
{
    if(a>=0)
        return a;
    else
        return 0;
}
