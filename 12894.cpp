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

    int T,x1,y1,x2,y2,cx,cy,r,len,wid,test;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&cx,&cy,&r);

        test=0;

        len=x2-x1;
        wid=y2-y1;

        if(len>0)               test++;
        if(wid>0)               test++;
        if(r>0)                 test++;
        if(5*r==len)            test++;
        if(10*wid==6*len)       test++;
        if(2*cy==(y1+y2))       test++;
        if((cx-x1)*20==9*len)   test++;

        if(test==7)
            printf("YES\n");
        else
            printf("NO\n");
    }



    return 0;

}
