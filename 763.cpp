/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n1,n2,i,j,k,len,change,tp=1;
    char num1[1005],num2[1005];

    while(scanf("%s%s",num1,num2)!=EOF)
    {

        if(tp>1)
            printf("\n");
        tp++;
        int sum[2005]={0,};
        n1=strlen(num1);
        n2=strlen(num2);

        i=n1-1;
        j=n2-1;

        n1=num1[i]-48;
        n2=num2[j]-48;

        for(k=0;;k++)
        {
            sum[k]=n1+n2;

            if(i>0)
            {
                i--;
                n1=num1[i]-48;
            }
            else if(i==0)
            {
                i=-1;
                n1=0;
            }

            if(j>0)
            {
                j--;
                n2=num2[j]-48;
            }
            else if(j==0)
            {
                j=-1;
                n2=0;
            }

            if(i==-1&&j==-1)
                break;
        }

        len=k;


        while(1)
        {
            change=0;
            for(i=0;i<=len;i++)
            {
                if(sum[i]>=1&&sum[i+1]>=1)
                {
                    sum[i+2]++;
                    sum[i+1]--;
                    sum[i]--;

                    if(i+2>len)
                        len++;

                    change++;

                }

                if(sum[i]>=2)
                {
                    sum[i]-=2;
                    sum[i+1]++;

                    if(i>1)
                        sum[i-2]++;
                    if(i==1)
                        sum[i-1]++;
                    if(i+1>len)
                        len++;

                    change++;

                }

            }
            if(change==0)
                break;
        }

        for(i=len;i>=0;i--)
            printf("%d",sum[i]);
        printf("\n");



    }



    return 0;
}
