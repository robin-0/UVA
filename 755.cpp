/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include<algorithm>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9


int convertToNumber(char inp[]);

int main ()
{
    int T,N,tp=1;
    char inp[MAX];
    int directory[MAX];
    int i,distinct,last,test;

    //OUTPUT

    scanf("%d",&T);

    while(T--)
    {
        if(tp>1)
            printf("\n");

        scanf("%d",&N);
        gets(inp);

        for(i=0; i<N; i++)
        {
            gets(inp);
            directory[i]=convertToNumber(inp);
        }

        sort(directory,directory+N);
        test=0;

        //for(i=0;i<N;i++)
        //  printf("%d\n",directory[i]);

        last=directory[0];
        distinct=1;

        for(i=1; i<N; i++)
        {
            if(directory[i]==last)
            {
                distinct++;
            }

            else
            {
                if(distinct>1)
                {
                    int a=last/10000,b=last%10000;

                    if(a==0)
                        printf("000-");
                    else if(a<10)
                        printf("00%d-",a);
                    else if(a<100)
                        printf("0%d-",a);
                    else
                        printf("%d-",a);

                    if(b==0)
                        printf("0000 ");
                    else if(b<10)
                        printf("000%d ",b);
                    else if(b<100)
                        printf("00%d ",b);
                    else if(b<1000)
                        printf("0%d ",b);
                    else
                        printf("%d ",b);

                    printf("%d\n",distinct);
                    test=1;
                }

                last=directory[i];
                distinct=1;
            }
        }

        if(distinct>1)
        {
            int a=last/10000,b=last%10000;

            if(a==0)
                printf("000-");
            else if(a<10)
                printf("00%d-",a);
            else if(a<100)
                printf("0%d-",a);
            else
                printf("%d-",a);

            if(b==0)
                printf("0000 ");
            else if(b<10)
                printf("000%d ",b);
            else if(b<100)
                printf("00%d ",b);
            else if(b<1000)
                printf("0%d ",b);
            else
                printf("%d ",b);

            printf("%d\n",distinct);
            test=1;
        }

        if(test==0)
            printf("No duplicates.\n");

        tp++;


    }

    return 0;

}


int convertToNumber(char inp[])
{
    int i,len=strlen(inp);

    int num=0,temp;

    for(i=0; i<len; i++)
    {
        if('0'<=inp[i] && inp[i]<='9')
            temp=inp[i]-'0';

        else
        {
            switch(inp[i])
            {
            case 'A':
                temp=2;
                break;
            case 'B':
                temp=2;
                break;
            case 'C':
                temp=2;
                break;
            case 'D':
                temp=3;
                break;
            case 'E':
                temp=3;
                break;
            case 'F':
                temp=3;
                break;
            case 'G':
                temp=4;
                break;
            case 'H':
                temp=4;
                break;
            case 'I':
                temp=4;
                break;
            case 'J':
                temp=5;
                break;
            case 'K':
                temp=5;
                break;
            case 'L':
                temp=5;
                break;
            case 'M':
                temp=6;
                break;
            case 'N':
                temp=6;
                break;
            case 'O':
                temp=6;
                break;
            case 'P':
                temp=7;
                break;
            case 'R':
                temp=7;
                break;
            case 'S':
                temp=7;
                break;
            case 'T':
                temp=8;
                break;
            case 'U':
                temp=8;
                break;
            case 'V':
                temp=8;
                break;
            case 'W':
                temp=9;
                break;
            case 'X':
                temp=9;
                break;
            case 'Y':
                temp=9;
                break;
            default:
                temp=-1;
                break;
            }
        }

        if(temp!=-1)
            num=num*10+temp;
    }

    return num;
}
