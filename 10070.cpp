/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

char inp[MAX];


int leap_test (int len);
int huluculu_test (int len);

int main()
{
    int len,a=-1,b,c,i;
    long long int odd_sum,even_sum;

    while(scanf("%s",inp)!=EOF)
    {
        if(a!=-1)
            printf("\n");
        odd_sum=0;
        even_sum=0;

        len=strlen(inp);

        for(i=0;i<len;i++)
        {
            inp[i]-=48;

            if(i%2==0)
                even_sum+=inp[i];
            else
                odd_sum+=inp[i];
        }

        a=leap_test(len);

        if(((even_sum+odd_sum)%3==0)&&(inp[len-1]==0||inp[len-1]==5))
            b=1;
        else
            b=0;

        c=0;
        if(a==1)
        {
            if(((even_sum-odd_sum)%11==0)&&(inp[len-1]==0||inp[len-1]==5))
                c=1;
        }

        if(a)
            printf("This is leap year.\n");
        if(b)
            printf("This is huluculu festival year.\n");
        if(c)
            printf("This is bulukulu festival year.\n");
        if(!(a||b||c))
            printf("This is an ordinary year.\n");

    }


    return 0;
}

int leap_test (int len)
{
    int test=0;
    int num;

    if(inp[len-2]!=0||inp[len-1]!=0)
    {
        num=(inp[len-2])*10+inp[len-1];
    }
    else
    {
        num=(inp[len-4])*10+inp[len-3];
    }

    if(num%4==0)
        return 1;
    else
        return 0;

}

