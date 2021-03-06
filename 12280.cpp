/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

int weight[30]={2250,2250,2500,2250,2500,2500,2750,2250,2500,2500,2750,2500,2750,2750,3000,2250,2500,2500,2750,2500,2750,2750,3000,2500,2750,2750,};
char dots[100]="........",level1[100]=".../\\...",level2[100]="../..\\..",level3[100]="./....\\.",level4[100]="\\______/";

int main()
{
    int T,tp=1,i,j,h1,h2,w1,w2,th1,th2;
    char inp[100][100],line1[100],line2[100],garbage[MAX],op[100];

    scanf("%d",&T);
    gets(garbage);

    for(;tp<=T;tp++)
    {

        for(i=0;i<7;i++)
        {
            gets(inp[i]);
            if(inp[i][3]=='/'&&inp[i][4]=='\\')
                h1=i;
            if(inp[i][13]=='/'&&inp[i][14]=='\\')
                h2=i;
        }

        gets(garbage);

        //printf("%d\t%d\n",h1,h2);
        w1=0;
        j=h1+3;

        for(i=0;i<8;i++)
        {
            line1[i]=inp[j][i];
            if(inp[j][i]<='Z'||inp[j][i]>='A')
                w1+=weight[inp[j][i]-65];
        }
        line1[i]='\0';
        //printf("%d\n",w1);

        w2=0;
        j=h2+3;

        for(i=10;i<18;i++)
        {
            line2[i-10]=inp[j][i];
            if(inp[j][i]<='Z'||inp[j][i]>='A')
                w2+=weight[inp[j][i]-65];
        }
        line2[i-10]='\0';
        //printf("%d\n",w2);

        if(w1>w2)
        {
            th1=2;
            th2=0;
        }
        else if(w1<w2)
        {
            th1=0;
            th2=2;
        }
        else
        {
            th1=1;
            th2=1;
        }

        if(th1==h1&&th2==h2)
        {
            printf("Case %d:\nThe figure is correct.\n",tp);
        }
        else
        {
            printf("Case %d:\n",tp);

            for(j=0;j<7;j++)
            {
                if(j<th1)
                    printf("%s",dots);
                else if(j==th1)
                    printf("%s",level1);
                else if(j==th1+1)
                    printf("%s",level2);
                else if(j==th1+2)
                    printf("%s",level3);
                else if(j==th1+3)
                    printf("%s",line1);
                else if(j==th1+4)
                    printf("%s",level4);
                else
                    printf("%s",dots);


                printf("||");


                if(j<th2)
                    printf("%s",dots);
                else if(j==th2)
                    printf("%s",level1);
                else if(j==th2+1)
                    printf("%s",level2);
                else if(j==th2+2)
                    printf("%s",level3);
                else if(j==th2+3)
                    printf("%s",line2);
                else if(j==th2+4)
                    printf("%s",level4);
                else
                    printf("%s",dots);


                printf("\n");

            }

        }

    }


    return 0;
}
