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
    char HEXA[20]="0123456789ABCDEF";
    char inp[100],op[100];
    long long int num;
    int len,i;

    while(1)
    {
        scanf("%s",inp);
        if(inp[0]=='-')
            break;
        len=strlen(inp);

        if(len>2&&inp[1]=='x')
        {
            num=0;
            for(i=2;i<len;i++)
            {
                switch(inp[i])
                {
                case 'A':
                    num+=(10)<<(4*(len-i-1));
                    break;
                case 'B':
                    num+=(11)<<(4*(len-i-1));
                    break;
                case 'C':
                    num+=(12)<<(4*(len-i-1));
                    break;
                case 'D':
                    num+=(13)<<(4*(len-i-1));
                    break;
                case 'E':
                    num+=(14)<<(4*(len-i-1));
                    break;
                case 'F':
                    num+=(15)<<(4*(len-i-1));
                    break;
                default:
                    num+=(inp[i]-48)<<(4*(len-i-1));
                    break;


                }
            }
            printf("%lld\n",num);
        }
        else
        {
            num=0;
            for(i=0;i<len;i++)
            {
                num=(inp[i]-48)+num*10;
            }

            i=0;
            for(;;)
            {
                op[i++]=HEXA[num%16];
                num/=16;

                if(num==0)
                    break;
            }
            i--;
            printf("0x");
            for(;i>=0;i--)
                printf("%c",op[i]);
            printf("\n");

        }

    }

    return 0;
}

