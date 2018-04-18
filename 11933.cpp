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
    int num,a,b,i,j,cnt;

    while(scanf("%d",&num)!=EOF)
    {
        if(num==0)
            break;
        a=0;
        b=0;
        cnt=0;

        for(i=0;i<32;i++)
        {
            if((num&(1<<i))!=0)
                {
                    if(cnt%2==0)
                    {
                        a+=1<<i;
                    }
                    cnt++;
                }
        }

        b=num-a;

        printf("%d %d\n",a,b);
    }



    return 0;

}
