/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


char sum[1000],prodct[1000],A[1000],B[1000],temps[1000];
int nA,nB,len,lensum;

void product (int j);
void add (int j);

int main()
{
    int i,j,k;

    while(gets(A))
    {
        gets(B);

        nA=strlen(A);
        nB=strlen(B);

        for(i=0;i<600;i++)
            {
                sum[i]='0';


            }

        for(i=nB-1;i>=0;i--)
            {
                product(i);
            }

        for(i=lensum-1;i>0;i--)
            if(sum[i]!=48)
                break;

        for(;i>=0;i--)
            printf("%c",sum[i]);
        printf("\n");



    }

    return 0;

}

void product (int j)
{

    int carry=0,temp;
    int multiplier=B[j]-48;
    int i;
    len=nA;



    for(i=0;i<nA;i++)
    {
        temp=(A[nA-1-i]-48)*multiplier + carry;

        if(temp>9)
        {
            carry=temp/10;
            prodct[i]=temp%10+48;
        }
        else
        {
            carry=0;
            prodct[i]=temp+48;
        }

    }

    while(carry!=0)
    {
        prodct[len]=carry%10+48;
        carry/=10;
        len++;
    }

  /*  for(i=0;i<len;i++)
    printf("%c",prodct[i]);
    printf("\n");
*/




    add(j);


}

void add (int j)
{
    int i,carry=0,temp;
    j=nB-1-j;
    lensum=len+j;


    for(i=j;i<lensum;i++)
    {
        temp=sum[i]+prodct[i-j]-96 + carry ;

        if(temp>9)
        {
            sum[i]=temp%10 + 48;
            carry=temp/10;
        }
        else
        {
            carry=0;
            sum[i]=temp+ 48;
        }

    }

    while(carry!=0)
    {
        temp=sum[lensum]+carry-48;

        if(temp>9)
        {
            sum[lensum]=temp%10 + 48;
            carry/=10;
        }
        else
        {
            carry=0;
            sum[lensum]=temp + 48;
        }


        lensum++;
    }
}


