/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 10005




int main()
{
    int bank[MAX]={0,},i,j,k1,k2,cnt=0,temp,min,T,N;

    for(i=1;i<=100;i++)
    {
        k1=i*i;
        bank[k1]=1;

        for(j=1;j<=100;j++)
        {
            k2=j*j+k1;
            if(k2>10000)
                break;
            bank[k2]=2;

        }
    }

    for(i=1;i<=10000;i++)
    {
        if(bank[i]==0)
        {
            min=100005;
            for(j=1;j<=100;j++)
            {
                k1=i-j*j;
                if(k1>0)
                {
                    temp=bank[k1]+1;
                }
                if(temp<min)
                    min=temp;
                if(min==3)
                    break;
            }
            bank[i]=min;
        }
    }

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        printf("%d\n",bank[N]);
    }




    return 0;
}

