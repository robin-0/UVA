/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005
#define MOD 1000000007

int distance(int x1,int y1,int z1,int x2,int y2,int z2);

int distance(int x1,int y1,int z1,int x2,int y2,int z2)
{
    return (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1);
}
int main ()
{
    int histogram[20]= {0,};
    int x[MAX],y[MAX],z[MAX],temp,min;
    int i=0,j,N;

    //OUTPUT

    while(scanf("%d%d%d",&x[i],&y[i],&z[i])!=EOF)
    {
        if(x[i]==0&&y[i]==0&&z[i]==0)
            break;
        i++;
    }
    N=i;

    for(i=0; i<N; i++)
    {
        min=10000;
        for(j=0; j<N; j++)
        {
            if(i==j)
                continue;

            temp=distance(x[i],y[i],z[i],x[j],y[j],z[j]);

            if(temp<min)
                min=temp;
        }

        if(min<1)
            histogram[0]++;
        else if(min<4)
            histogram[1]++;
        else if(min<9)
            histogram[2]++;
        else if(min<16)
            histogram[3]++;
        else if(min<25)
            histogram[4]++;
        else if(min<36)
            histogram[5]++;
        else if(min<49)
            histogram[6]++;
        else if(min<64)
            histogram[7]++;
        else if(min<81)
            histogram[8]++;
        else if(min<100)
            histogram[9]++;
    }

    for(i=0; i<=9; i++)
        printf("%4d",histogram[i]);
    printf("\n");

    return 0;

}
