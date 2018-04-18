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



int main ()
{

    int T,len,n,i,j,max,tp=1,type;
    char inp[MAX];


    scanf("%d",&T);

    while(T--)
    {
        scanf("%s",inp);
        n=strlen(inp);

        max=-1;

        for(i=0;i<n;i++)
        {
            if(inp[i]=='>')
            {
                len=1;
                max = len > max ? len : max ;
            }

            else if(inp[i]=='-')
            {
                len=1;

                if(i+1<n)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(inp[j]=='=' || inp[j]=='<')
                        {
                            //if(j!=n-1)
                                j--;
                            i=j;
                            break;
                        }

                        else if(inp[j]=='-')
                        {
                            len++;
                        }

                        else if(inp[j]=='>')
                        {
                            len++;
                            max = len > max ? len : max ;
                            i=j;
                            break;
                        }
                    }
                }
            }

            else if(inp[i]=='=')
            {
                len=1;

                if(i+1<n)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(inp[j]=='-' || inp[j]=='<')
                        {
                            //if(j!=n-1)
                                j--;
                            i=j;
                            break;
                        }

                        else if(inp[j]=='=')
                        {
                            len++;
                        }

                        else if(inp[j]=='>')
                        {
                            len++;
                            max = len > max ? len : max ;
                            i=j;
                            break;
                        }
                    }
                }
            }

            else if(inp[i]=='<')
            {
                len=1;

                if((i+1<n)&&(inp[i+1]=='-'))
                {
                    len=2;

                    j=i+1;

                    if(i+2<n)
                    {
                        for(j=i+2;j<n;j++)
                        {
                            if(inp[j]=='-')
                                len++;
                            else
                                break;
                        }
                    }

                    max = len > max ? len : max ;
                    //if(j!=n-1)
                                j--;
                    i=j;
                }

                else if((i+1<n)&&(inp[i+1]=='='))
                {
                    len=2;

                    j=i+1;

                    if(i+2<n)
                    {
                        for(j=i+2;j<n;j++)
                        {
                            if(inp[j]=='=')
                                len++;
                            else
                                break;
                        }
                    }
                    max = len > max ? len : max ;
                    //if(j!=n-1)
                                j--;
                    i=j;
                }

                else
                {
                    max = len > max ? len : max ;
                }
            }
        }

        printf("Case %d: %d\n",tp,max);
        tp++;
    }

    return 0;

}
