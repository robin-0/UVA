/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main()
{
    long long int coef[100000],x,y,b;
    int state,n,m,i,j,len,nega;
    char inp[1000005];
    while(scanf("%lld",&x)!=EOF)
    {
        gets(inp);
        gets(inp);
        len=strlen(inp);
        n=0;
        state=0;
        nega=0;

        for(i=0;i<len;i++)
        {
            if(inp[i]<=57&&inp[i]>=48)
            {
                if(state==0)
                {
                    coef[n]=(inp[i]-48);
                    state=1;
                }
                else
                {
                    coef[n]=coef[n]*10+(inp[i]-48);
                }
            }

            else if(inp[i]=='-')
            {
                nega=1;
            }

            else
            {
                if(state==1)
                {
                    if(nega==1)
                        coef[n]=-coef[n];

                    n++;
                    nega=0;
                    state=0;
                }
            }
        }

        if(state==1)
                {

                    if(nega==1)
                        coef[n]=-coef[n];
                    n++;
                    nega=0;
                    state=0;
                }




       //output




       if(n>1)
    {

       n--;

       for(i=0;i<n;i++)
       {
           coef[i]*=(n-i);
       }


       b=coef[0];

       for(i=1;i<n;i++)
       {
           b=coef[i]+b*x;
       }




    }

else
    b=0;
                 printf("%lld\n",b);



    }


    return 0;

}



