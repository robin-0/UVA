/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    char inp[100];
    int ans[15],i,j,n,tp=1;
    while(scanf("%s",inp)!=EOF)
    {
        n=strlen(inp);

        for(i=0;i<(n/2);i++)
        {
            inp[i]=inp[i]^inp[n-1-i];
            inp[n-1-i]=inp[i]^inp[n-1-i];
            inp[i]=inp[i]^inp[n-1-i];
        }

        for(i=0;i<9;i++)
            ans[i]=0;

        //dosh
        if(n>0)
            ans[0]=(inp[0]-48);
        if(n>1)
            ans[0]+=10*(inp[1]-48);
        //shata
        if(n>2)
            ans[1]=(inp[2]-48);
        //hajar
        if(n>3)
            ans[2]=(inp[3]-48);
        if(n>4)
            ans[2]+=10*(inp[4]-48);
        //lakh
        if(n>5)
            ans[3]=(inp[5]-48);
        if(n>6)
            ans[3]+=10*(inp[6]-48);
        //kuti
        if(n>7)
            ans[4]=(inp[7]-48);
        if(n>8)
            ans[4]+=10*(inp[8]-48);
        //shata
        if(n>9)
            ans[5]=(inp[9]-48);
        //hajar
        if(n>10)
            ans[6]=(inp[10]-48);

        if(n>11)
            ans[6]+=10*(inp[11]-48);
        //lakh
        if(n>12)
            ans[7]=(inp[12]-48);
        if(n>13)
            ans[7]+=10*(inp[13]-48);
        //kuti
        if(n>14)
            ans[8]=(inp[14]-48);
        if(n>15)
            ans[8]+=10*(inp[15]-48);



        for(i=8;i>=0;i--)
        {
            if(ans[i]>0)
                break;
        }
        if(i<0)
        {
            printf("%4d. 0\n",tp);
            tp++;
            continue;
        }

        printf("%4d.",tp);

        if(ans[8]!=0)
            printf(" %d kuti",ans[8]);
     //   if(ans[8]==0&&i<=8)
       //     printf(" kuti");

        if(ans[7]!=0)
            printf(" %d lakh",ans[7]);
        //if(ans[7]==0&&i<=7)
         //   printf(" lakh");

        if(ans[6]!=0)
            printf(" %d hajar",ans[6]);
        //if(ans[6]==0&&i<=6)
          //  printf(" hajar");

        if(ans[5]!=0)
            printf(" %d shata",ans[5]);
        //if(ans[5]==0&&i<=5)
          //  printf(" shata");

        if(ans[4]!=0)
            printf(" %d kuti",ans[4]);
        if(ans[4]==0&&i>=4)
            printf(" kuti");

        if(ans[3]!=0)
            printf(" %d lakh",ans[3]);
       // if(ans[3]==0&&i<=3)
         //   printf(" lakh");

        if(ans[2]!=0)
            printf(" %d hajar",ans[2]);
        //if(ans[2]==0&&i<=2)
          //  printf(" hajar");

        if(ans[1]!=0)
            printf(" %d shata",ans[1]);
        //if(ans[1]==0&&i<=1)
          //  printf(" shata");

        if(ans[0]!=0)
            printf(" %d",ans[0]);

        printf("\n");
        tp++;
    }


    return 0;
}
