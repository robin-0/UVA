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


int main()
{
    int T,i,len,top;
    char inp[MAX],stack[MAX];

    scanf("%d",&T);
    gets(inp);

    while(T--)
    {
        gets(inp);
        len=strlen(inp);

        top=-1;

        for(i=0;i<len;i++)
        {
            if( inp[i]=='(' || inp[i]=='[' )
            {
                top++;
                stack[top]=inp[i];
            }
            else if ( inp[i]==')' )
            {
                if(stack[top] == '(')
                {
                    top--;
                }
                else
                {
                    top=MAX;
                    goto shesh;
                }
            }
            else if ( inp[i]==']' )
            {
                if(stack[top] == '[')
                {
                    top--;
                }
                else
                {
                    top=MAX;
                    goto shesh;
                }
            }
        }


        shesh:

        if(top==-1)
            printf("Yes\n");

        else
            printf("No\n");

        //printf("%d\n",top);
    }


    return 0;

}




