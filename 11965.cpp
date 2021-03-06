/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

char line[5005];

void format();

int main()
{
    int T,L,tp=1;
    scanf("%d",&T);
    while(T--)
    {

        scanf("%d",&L);
        gets(line);

        if(tp>1)
            printf("\n");

        printf("Case %d:\n",tp);

        while(L--)
        {
            gets(line);
            format();
        }
        tp++;
    }

    return 0;
}


void format()
{
    int i,len=strlen(line),space=0;

    for(i=0;i<len;i++)
    {
        if(line[i]!=' ')
            {
                if(space!=0)
                    printf(" ");
                space=0;
                printf("%c",line[i]);
            }
        else
            space++;
    }

    if(space!=0)
        printf(" ");

    printf("\n");
}

