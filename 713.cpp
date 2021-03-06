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
    int i,j,lena,lenb,digit,maxdig,T,m,sum,carry;
    char a[10005],b[10005],ans[10005];

    scanf("%d",&T);
    while(T--)
    {
        scanf("%s%s",a,b);

        lena=strlen(a);
        lenb=strlen(b);
        maxdig = lena >= lenb ? lena : lenb;

        for(i=lena;i<maxdig;i++)
        {
            a[i]='0';
        }
        a[i]='\0';

        for(i=lenb;i<maxdig;i++)
        {
            b[i]='0';
        }
        b[i]='\0';

        m=maxdig/2;

        for(i=0;i<m;i++)
        {
            a[i]=a[i]^a[maxdig-1-i];
            a[maxdig-1-i]=a[i]^a[maxdig-1-i];
            a[i]=a[i]^a[maxdig-1-i];
        }


        for(i=0;i<m;i++)
        {
            b[i]=b[i]^b[maxdig-1-i];
            b[maxdig-1-i]=b[i]^b[maxdig-1-i];
            b[i]=b[i]^b[maxdig-1-i];

        }

        for(i=0;i<maxdig;i++)
        {
            a[i]-=48;
            b[i]-=48;
        }

        j=0;
        carry=0;

        for(i=maxdig-1;i>=0;i--)
        {
            sum=a[i]+b[i]+carry;

            if(sum>9)
            {
                ans[j++]=sum-10;
                carry=1;
            }
            else
            {
                ans[j++]=sum;
                carry=0;
            }
        }
        if(carry!=0)
            ans[j++]=carry;

        digit=0;

        for(i=0;i<j;i++)
        {
            if(ans[i]!=0)
                digit=1;

            if(digit==1)
                printf("%d",ans[i]);
        }

        printf("\n");



    }

    return 0;
}

