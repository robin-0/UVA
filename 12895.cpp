/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

long long int my_pow(int p , int n);

int main()
{
    int T,i,n;
    long long int in , out;
    char inp[100];

    scanf("%d",&T);
    gets(inp);

    while(T--)
    {
        gets(inp);
        n=strlen(inp);
        in=0;
        out=0;

        for(i=0;i<n;i++)
        {
            in=in*10+inp[i]-'0';
            out+=my_pow(inp[i]-'0',n);
        }

        if(in==out)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");

    }


    return 0;
}


long long int my_pow(int p , int n)
{
    long long int a;

    if(n==0)
        return 1;

    else if (n==1)
        return p;

    else if(n%2==0)
        {
            a = my_pow(p,n/2);
            return a*a;
        }
    else
        return my_pow(p,n-1)*p;

}
