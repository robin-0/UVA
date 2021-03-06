/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

char hexa[20]={"0123456789ABCDEF"};

int main()
{
    int T,tp=1,i,pos;
    char ch;

    scanf("%d",&T);
    while((ch=getchar())!=EOF)
    {
            if(ch=='\n')
                break;
    }

    for(;tp<=T;tp++)
    {
        int array[105]={0,};
        pos=0;
        while((ch=getchar())!=EOF)
        {
            if(ch=='\n')
                break;

            if(ch=='>')
            {
                pos++;
                if(pos==100)
                    pos=0;
            }
            else if(ch=='<')
            {
                pos--;
                if(pos<0)
                    pos=99;
            }
            else if(ch=='+')
            {
                array[pos]++;

                if(array[pos]==256)
                    array[pos]=0;
            }
            else if(ch=='-')
            {
                array[pos]--;

                if(array[pos]<0)
                    array[pos]=255;
            }

        }

        printf("Case %d:",tp);
        for(i=0;i<100;i++)
        {

            printf(" %c%c",hexa[array[i]/16],hexa[array[i]%16]);
        }
        printf("\n");
    }

    return 0;
}
