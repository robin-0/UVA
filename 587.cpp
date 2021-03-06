/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9


int main ()
{
    int tp=1,i,len,num;
    char inp[MAX],ch;
    double x1,y1,r;

    //OUTPUT

    while(1)
    {
        i=0;
        while(1)
        {
            ch=getchar();

            if(ch=='\n')
                break;
            if(ch==' ')
                continue;
            else
                inp[i++]=ch;
        }
        len=i;
        inp[len]='\0';

        if(!strcmp(inp,"END"))
            break;

        //for(i=0; i<len; i++)
          //  printf("%c",inp[i]);
        //printf("\n");
        //printf("%d\n",len);
        x1=EPS;
        y1=EPS;
        r=EPS;
        num=0;

        for(i=0; i<len; i++)
        {
            num=0;
            while(1)
            {
                //printf("%c\n",inp[i]);

                if(inp[i]=='.'||inp[i]==',')
                    break;

                else if('0'<=inp[i]&&inp[i]<='9')
                    num=num*10+(inp[i]-'0');

                else if(inp[i]=='E')
                {
                    x1+=(double)num;
                }

                else if(inp[i]=='W')
                {
                    x1-=(double)num;
                }

                else if(inp[i]=='S')
                {
                    if( (i+1<len) && (inp[i+1]=='E'))
                    {
                        x1+=num/sqrt(2.0);
                        y1-=num/sqrt(2.0);
                        i++;
                    }

                    else if( (i+1<len) && (inp[i+1]=='W'))
                    {
                        x1-=num/sqrt(2.0);
                        y1-=num/sqrt(2.0);
                        i++;
                    }

                    else
                    {
                        y1-=(double)num;
                    }
                }

                else if(inp[i]=='N')
                {
                    if( (i+1<len) && (inp[i+1]=='E'))
                    {
                        x1+=num/sqrt(2.0);
                        y1+=num/sqrt(2.0);
                        i++;
                    }

                    else if( (i+1<len) && (inp[i+1]=='W'))
                    {
                        x1-=num/sqrt(2.0);
                        y1+=num/sqrt(2.0);
                        i++;
                    }

                    else
                    {
                        y1+=(double)num;
                    }
                }

                i++;

            }

            //printf("%d\n",num);
        }

        printf("Map #%d\n",tp);
        tp++;

        r=sqrt(x1*x1+y1*y1);

        if(fabs(x1)<EPS)
            x1=0.0;

        if(fabs(y1)<EPS)
            y1=0.0;

        if(fabs(r)<EPS)
            r=0.0;

        printf("The treasure is located at (%.3lf,%.3lf).\n",x1,y1);
        printf("The distance to the treasure is %.3lf.\n\n",r);


    }


    return 0;

}
