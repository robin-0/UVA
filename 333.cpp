/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9


int main ()
{
    char inp[MAX];
    int i,start,len,num[20],j,test,sum;

    while(gets(inp))
    {
        start=0;
        len=strlen(inp);

        for(i=0;i<len;i++)
        {
            if(inp[i]==' ')
                start++;
            else
                break;
        }

        for(i=len-1;i>=start;i--)
        {
            if(inp[i]==' ')
                len--;
            else
                break;
        }

        j=0;

        for(i=start;i<len;i++)
        {
            if((inp[i]>='0'&&inp[i]<='9'))
                num[j++]=inp[i]-'0';
            else if(inp[i]=='X')
                num[j++]=10;
        }

        if(j==10)
        {
            test=1;
            for(i=0;i<9;i++)
            {
                if(num[i]==10)
                    test=0;
            }
        }

        else
            test=0;

        if(test==0)
        {
            for(i=start;i<len;i++)
                printf("%c",inp[i]);

            printf(" is incorrect.\n");
        }

        else
        {
            sum=0;

            for(i=0;i<10;i++)
            {
                sum+=num[i]*(10-i);
            }
        //printf("%d\n",sum);
            if(sum%11==0)
            {
                for(i=start;i<len;i++)
                    printf("%c",inp[i]);

                printf(" is correct.\n");
            }

            else
            {
                for(i=start;i<len;i++)
                    printf("%c",inp[i]);

                printf(" is incorrect.\n");
            }
        }

    }

    return 0;

}

