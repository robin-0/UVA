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
#define MAX 200005



int main()
{
    int a,b,c;
    int set,pair,extra;

    while(1)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
            break;

        if(a==b && b==c)
        {
            set=a;

            if(set==13)
                printf("*\n");
            else
                printf("%d %d %d\n",set+1,set+1,set+1);
        }

        else if(a!=b && a!=c && b!=c)
        {
            printf("1 1 2\n");
        }

        else
        {
            if(a==b && a!=c)
            {
                pair=a;
                extra=c;
            }

            else if(a==c && a!=b)
            {
                pair=a;
                extra=b;
            }

            else
            {
                pair=b;
                extra=a;
            }


            if(extra<13)
            {
                extra++;

                if(extra>pair)
                    printf("%d %d %d\n",pair,pair,extra);
                else if(extra<pair)
                    printf("%d %d %d\n",extra,pair,pair);
                else if(extra==pair)
                {
                    if(extra<13)
                    {
                        extra++;
                            printf("%d %d %d\n",pair,pair,extra);
                    }

                    else
                    {
                        if(pair==13)
                            printf("1 1 1\n");
                        else
                            printf("1 %d %d\n",pair+1,pair+1);
                    }

                }
            }



            else
                printf("1 %d %d\n",pair+1,pair+1);
        }

    }


    return 0;

}
