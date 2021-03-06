/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int r[20005],c[20005];

int check (int N,int x,int y);

int main()
{
    int R,C,N,test,i,x,y,tp=1;

    while(scanf("%d%d%d",&R,&C,&N)!=EOF)
    {
        if(R==0&&C==0&&N==0)
            break;

        test=1;

        for(i=0;i<N;i++)
            scanf("%d%d",&r[i],&c[i]);

        scanf("%d%d",&x,&y);

        if(check(N,x,y)==0)
            test=0;

        if(test==1)
        {

            if(x>0)
            {
                if(check(N,x-1,y)==0)
                    test=0;
            }
        }

        if(test==1)
        {
            if(y>0)
            {
                if(check(N,x,y-1)==0)
                    test=0;
            }
        }

        if(test==1)
        {
            if(x<R)
            {
                if(check(N,x+1,y)==0)
                    test=0;
            }
        }

        if(test==1)
        {
            if(y<C)
            {
                if(check(N,x,y+1)==0)
                    test=0;
            }
        }
        
        

        if(test==0)
            printf("Case %d: Escaped again! More 2D grid problems!\n",tp);
        else
            printf("Case %d: Party time! Let's find a restaurant!\n",tp);

        tp++;
    }

    return 0;

}

int check (int N,int x,int y)
{
    int i;

    for(i=0;i<N;i++)
    {
        if(r[i]==x||c[i]==y)
            return 1;
    }

    return 0;
}
