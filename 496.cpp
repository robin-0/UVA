/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int A[1000],B[1000],nA,nB,i,j,c,temp;
    char ch,inp[100005];

    while(gets(inp))
    {
        j=strlen(inp);
        nA=0;
        temp=0;

        for(i=0;i<j;i++)
        {
            if(inp[i]<=57&&inp[i]>=48)
            {
                temp=temp*10+(inp[i]-48);
            }
            else
            {
                A[nA++]=temp;
                temp=0;
            }
        }
        if(temp!=0)
            A[nA++]=temp;



        gets(inp);

        j=strlen(inp);
        nB=0;
        temp=0;

        for(i=0;i<j;i++)
        {
            if(inp[i]<=57&&inp[i]>=48)
            {
                temp=temp*10+(inp[i]-48);
            }
            else
            {
                B[nB++]=temp;
                temp=0;
            }
        }
        if(temp!=0)
            B[nB++]=temp;


        c=0;

        for(i=0;i<nA;i++)
        {
            for(j=0;j<nB;j++)
            {
                if(A[i]==B[j])
                {
                    c++;
                    break;
                }
            }
        }





        if((nA==c)&&(nB==nA)&&(nB==c))
            printf("A equals B\n");
        else if((nA==c)&&(nA<nB))
            printf("A is a proper subset of B\n");
        else if((nB==c)&&(nA>nB))
            printf("B is a proper subset of A\n");
        else if(c==0)
            printf("A and B are disjoint\n");
        else
            printf("I'm confused!\n");
    }



    return 0;

}


