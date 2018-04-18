/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005




int main()
{
    int magic[20][20][20]={0,};
    int sum[20]={0,};
    int n,i,j,x,y;

    for(i=3;i<16;i+=2)
    {
        sum[i]=(i*(i*i+1))/2;
        x=(i/2);
        y=0;

        for(j=1;j<=i*i;j++)
        {
                if(magic[i][y][x]==0)
                {
                    magic[i][y][x]=j;


                }
                else
                {
                    y+=2;
                    x--;

                    if(y==i)
                        y=0;
                    else if(y==i+1)
                        y=1;
                    if(x<0)
                        x=i-1;
                    magic[i][y][x]=j;

                }

                x++;
                y--;
                if(x==i)
                    x=0;
                if(y<0)
                    y=i-1;
            }
        }

        x=0;
        while(scanf("%d",&n)!=EOF)
        {
            if(x==1)
                printf("\n");
            x=1;
            printf("n=%d, sum=%d\n",n,sum[n]);
            if(n<4)
            {
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n;j++)
                        printf("%2d",magic[n][i][j]);

                    printf("\n");
                }
            }

            else if(n<10)
            {
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n;j++)
                        printf("%3d",magic[n][i][j]);

                    printf("\n");
                }
            }

            else
            {
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n;j++)
                        printf("%4d",magic[n][i][j]);

                    printf("\n");
                }
            }

        }





    return 0;
}

