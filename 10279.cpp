/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

void take_input(int n);
int make_output(int n);
void check_bomb (int n);


char field[15][15],input[15][15],output[15][15];

int main()
{

    int T,n,i,j,bomb,tp=1;

    scanf("%d",&T);
    while(T--)
    {

        if(tp>1)
            printf("\n");

        scanf("%d",&n);

        getchar();
        take_input(n);
        bomb=make_output(n);
        if(bomb==1)
            check_bomb(n);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                printf("%c",output[i][j]);
            printf("\n");
        }


        tp++;
    }

    return 0;
}

void take_input(int n)
{
    int i;

    for(i=0;i<n;i++)
        gets(field[i]);

    for(i=0;i<n;i++)
        gets(input[i]);
}

int make_output(int n)
{
    int i,j,bomb=0,cnt,m=n-1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(input[i][j]=='x')
            {
                if(field[i][j]=='*')
                {
                    bomb=1;
                }
                else
                {
                    cnt=0;

                    if((i>0)&&(j>0)&&(field[i-1][j-1]=='*'))
                        cnt++;
                    if((i>0)&&(field[i-1][j]=='*'))
                        cnt++;
                    if((j>0)&&(field[i][j-1]=='*'))
                        cnt++;
                    if((i<m)&&(j>0)&&(field[i+1][j-1]=='*'))
                        cnt++;
                    if((i<m)&&(field[i+1][j]=='*'))
                        cnt++;
                    if((i<m)&&(j<m)&&(field[i+1][j+1]=='*'))
                        cnt++;
                    if((j<m)&&(field[i][j+1]=='*'))
                        cnt++;
                    if((i>0)&&(j<m)&&(field[i-1][j+1]=='*'))
                        cnt++;

                    output[i][j]=cnt+'0';

                }
            }
            else
            {
                output[i][j]='.';
            }
        }
    }

    return bomb;
}


void check_bomb (int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(field[i][j]=='*')
                output[i][j]='*';
        }
    }
}
