/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 105
int main()
{
    int W,H,N,i,j,x1,y1,x2,y2,cnt;

    while(scanf("%d%d%d",&W,&H,&N)!=EOF)
    {
        if(W==0&&H==0&&N==0)
            break;

        int mat[505][505]={0,};
        cnt=W*H;

        while(N--)
        {
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

            if(x1>x2)
            {
                x1=x1^x2;
                x2=x1^x2;
                x1=x1^x2;
            }

            if(y1>y2)
            {
                y1=y1^y2;
                y2=y1^y2;
                y1=y1^y2;
            }

            if(x2>W)
                x2=W;
            if(y2>H)
                y2=H;

            //if(cnt!=0)
            {
                for(i=x1;i<=x2;i++)
                {
                    for(j=y1;j<=y2;j++)
                    {
                        if(mat[j][i]==0)
                        {
                            mat[j][i]=1;
                            cnt--;
                        }
                    }
                }
            }
        }

        if(cnt==0)
            printf("There is no empty spots.\n");
        else if(cnt==1)
            printf("There is one empty spot.\n");
        else
            printf("There are %d empty spots.\n",cnt);



    }

    return 0;
}
