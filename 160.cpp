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
    int prime[30]={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int bank[105][30]={0,};
    int i,pre,j;

    for(i=2;i<101;i++)
    {
        pre=i;

        for(j=0;j<25;j++)
        bank[i][j]=bank[i-1][j];

        for(j=0;j<25;j++)
        {

            if(prime[j]>pre)
                break;
            while(pre%prime[j]==0)
            {
                pre/=prime[j];
                bank[i][j]++;
            }
        }

    }



    while(scanf("%d",&j)!=EOF)
    {
        if(j==0)
            break;
            printf("%3d! =",j);
        for(i=0;i<15;i++)
        {
            if(bank[j][i]==0)
                break;
            printf("%3d",bank[j][i]);
        }
        printf("\n");


        if(bank[j][i]!=0)
        {
            printf("      ");
            for(;i<25;i++)
            {
                if(bank[j][i]==0)
                    break;
                printf("%3d",bank[j][i]);
            }
            printf("\n");
        }
    }



    return 0;
}

