/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

char field[200][200];
int war[200][200];
int r,c;

int fight(int i , int j , char type );
void change();

int main()
{
    int n,i,j,T,tp=1;

    scanf("%d",&T);
    while(T--)
    {
        if(tp>1)
            printf("\n");
        tp++;

        scanf("%d%d%d",&r,&c,&n);
        getchar();
        for(i=0;i<r;i++)
        {
            gets(field[i]);
        }

        while(n--)
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    war[i][j]=fight(i,j,field[i][j]);
                }
            }
            change();
        }

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%c",field[i][j]);
            }
            printf("\n");
        }
    }


    return 0;
}



int fight(int i , int j , char type )
{
    char weakness;

    if(type =='R')
        weakness='P';
    else if(type =='S')
        weakness='R';
    else
        weakness='S';

    if((i>0)&&(field[i-1][j]==weakness))
        return -1;
    if((j>0)&&(field[i][j-1]==weakness))
        return -1;
    if((i<(r-1))&&(field[i+1][j]==weakness))
        return -1;
    if((j<(c-1))&&(field[i][j+1]==weakness))
        return -1;

        return 1;

}

void change()
{
    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(war[i][j]==-1)
            {
                if(field[i][j]=='P')
                    field[i][j]='S';
                else if(field[i][j]=='S')
                    field[i][j]='R';
                else
                    field[i][j]='P';

            }
        }
    }
}
