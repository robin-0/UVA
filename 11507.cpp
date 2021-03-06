/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005


int main()
{
    int len,i,pre;
    char inp[5];

    /**
        +x = 1
        -x = -1
        +y = 2
        -y = -2
        +z = 3
        -z = -3
    */

    while(1)
    {
        scanf("%d",&len);
        if(len==0)
            break;

        pre=1;

        for(i=1;i<len;i++)
        {
            scanf("%s",inp);

            if(inp[0]=='+'&&inp[1]=='y')
            {
                if(pre==1)
                    pre=2;
                else if(pre==-1)
                    pre=-2;
                else if(pre==2)
                    pre=-1;
                else if(pre==-2)
                    pre=1;
            }
            else if(inp[0]=='-'&&inp[1]=='y')
            {
                if(pre==1)
                    pre=-2;
                else if(pre==-1)
                    pre=2;
                else if(pre==2)
                    pre=1;
                else if(pre==-2)
                    pre=-1;
            }
            else if(inp[0]=='+'&&inp[1]=='z')
            {
                if(pre==1)
                    pre=3;
                else if(pre==-1)
                    pre=-3;
                else if(pre==3)
                    pre=-1;
                else if(pre==-3)
                    pre=1;
            }
            else if(inp[0]=='-'&&inp[1]=='z')
            {
                if(pre==1)
                    pre=-3;
                else if(pre==-1)
                    pre=3;
                else if(pre==3)
                    pre=1;
                else if(pre==-3)
                    pre=-1;
            }
        }

        if(pre==1)
            printf("+x\n");
        else if(pre==-1)
            printf("-x\n");
        else if(pre==2)
            printf("+y\n");
        else if(pre==-2)
            printf("-y\n");
        else if(pre==3)
            printf("+z\n");
        else if(pre==-3)
            printf("-z\n");
    }



    return 0;
}
