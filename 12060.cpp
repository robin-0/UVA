/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

void pos_number(int a );
void neg_number(int a );
void pos_fraction (int b , int c );
void neg_fraction (int b , int c );
void pos_somosto_fraction (int a , int b , int c );
void neg_somosto_fraction (int a , int b , int c );
int gcd(int a , int b);

int main()
{
    int n,array,a,b,c,d,i,sum,tp=1;

    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;

        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&array);
            sum+=array;
        }
        if(sum<0)
            i=-sum;
        else
            i=sum;
        d=gcd(i,n);
        b=i/d;
        c=n/d;
        a=b/c;
        b=b%c;

        printf("Case %d:\n",tp);
        tp++;

        if(b==0)
        {
            if(sum>=0)
                pos_number(a);
            else
                neg_number(a);
        }
        else if(a==0)
        {
            if(sum>=0)
                pos_fraction(b,c);
            else
                neg_fraction(b,c);
        }
        else
        {
            if(sum>0)
                pos_somosto_fraction(a,b,c);
            else
                neg_somosto_fraction(a,b,c);
        }

    }

    return 0;
}
int gcd(int a , int b)
{
    int c;

    if(b>a)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }

    while(1)
    {
        if(b==0)
            return a;
        c=b;
        b=a%b;
        a=c;
    }
}
void pos_number(int a )
{
    printf("%d\n",a);
}
void neg_number(int a )
{
    printf("- %d\n",a);
}
void pos_fraction (int b , int c )
{
    int dig_b,dig_c,i;
    dig_b=(int)(log10(b))+1;
    dig_c=(int)(log10(c))+1;
    i=dig_c-dig_b;
    while(i--)
        printf(" ");
    printf("%d\n",b);
    for(i=0;i<dig_c;i++)
        printf("-");
    printf("\n");
    printf("%d\n",c);

}
void neg_fraction (int b , int c )
{
    int dig_b,dig_c,i;
    dig_b=(int)(log10(b))+1;
    dig_c=(int)(log10(c))+1;
    i=dig_c-dig_b+2;
    while(i--)
        printf(" ");
    printf("%d\n",b);

    printf("- ");
    for(i=0;i<dig_c;i++)
        printf("-");
    printf("\n");
    printf("  %d\n",c);

}
void pos_somosto_fraction (int a , int b , int c )
{
    int dig_a,dig_b,dig_c,i;
    dig_a=(int)(log10(a))+1;
    dig_b=(int)(log10(b))+1;
    dig_c=(int)(log10(c))+1;
    i=dig_c-dig_b+dig_a;
    while(i--)
        printf(" ");
    printf("%d\n",b);

    printf("%d",a);
    for(i=0;i<dig_c;i++)
        printf("-");
    printf("\n");
    for(i=0;i<dig_a;i++)
        printf(" ");
    printf("%d\n",c);

}
void neg_somosto_fraction (int a , int b , int c )
{
    int dig_a,dig_b,dig_c,i;
    dig_a=(int)(log10(a))+1;
    dig_b=(int)(log10(b))+1;
    dig_c=(int)(log10(c))+1;
    i=dig_c-dig_b+dig_a+2;
    while(i--)
        printf(" ");
    printf("%d\n",b);

    printf("- %d",a);
    for(i=0;i<dig_c;i++)
        printf("-");
    printf("\n");
    printf("  ");
    for(i=0;i<dig_a;i++)
        printf(" ");
    printf("%d\n",c);

}
