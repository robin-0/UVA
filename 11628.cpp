/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int gcd(int a, int b);

int main()
{
    int n,m , ticket[10005][35] ,i,j,temp;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            break;

        int sum[35]={0,};
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                {
                    scanf("%d",&ticket[i][j]);
                    sum[j]+=ticket[i][j];
                }
        }

        for(j=m-1;j>=0;j--)
            if(sum[j]!=0)
                break;

        for(i=0;i<n;i++)
        {
            if(ticket[i][j]==0)
                printf("0 / 1\n");
            else
            {
                temp=gcd(sum[j],ticket[i][j]);
                printf("%d / %d\n",ticket[i][j]/temp,sum[j]/temp);
            }

        }



    }


    return 0;
}


int gcd(int a, int b)
{
    int c;

    while(1)
    {

        if(b==0)
            return a;

        c=b;
        b=a%b;
        a=c;
    }
}
