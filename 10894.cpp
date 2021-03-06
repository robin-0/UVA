/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005


char string_vertical[100][10]={
                    "*****",
                    "*....",
                    "*****",
                    "....*",
                    "*****",
                    ".....",
                    ".***.",
                    "*...*",
                    "*****",
                    "*...*",
                    "*...*",
                    ".....",
                    "*...*",
                    "*...*",
                    "*...*",
                    ".*.*.",
                    "..*..",
                    ".....",
                    "*****",
                    "*....",
                    "***..",
                    "*....",
                    "*****",
                    ".....",
                    ".....",
                    ".....",
                    "*...*",
                    "*...*",
                    "*****",
                    "*...*",
                    "*...*",
                    ".....",
                    "*****",
                    "*...*",
                    "*****",
                    "*.*..",
                    "*..**",
                    ".....",
                    "*****",
                    "..*..",
                    "..*..",
                    "..*..",
                    "*****",
                    ".....",
                    "***..",
                    "*..*.",
                    "*...*",
                    "*..*.",
                    "***..",
                    ".....",
                    "*****",
                    "*...*",
                    "*...*",
                    "*...*",
                    "*****",
                    ".....",
                    "*...*",
                    ".*.*.",
                    "..*..",
                    "..*..",
                    "..*..",
};

void vertical(int n);


char string_horizontal[10][100]={
"*****..***..*...*.*****...*...*.*****.*****.***...*****.*...*",
"*.....*...*.*...*.*.......*...*.*...*...*...*..*..*...*..*.*.",
"*****.*****.*...*.***.....*****.*****...*...*...*.*...*...*..",
"....*.*...*..*.*..*.......*...*.*.*.....*...*..*..*...*...*..",
"*****.*...*...*...*****...*...*.*..**.*****.***...*****...*..",
};

void horizontal(int n);


int main()
{
    int n;


    while(1)
    {
        scanf("%d",&n);

        if(n==0)
            break;

        if(n>0)
            horizontal(n);
        else
            vertical(-n);
        
        printf("\n\n");
    }


    return 0;
}

void vertical(int n)
{
    int i,j,i2,j2;

    for(i=0;i<61;i++)
    {
        for(i2=0;i2<n;i2++)
        {
            for(j=0;j<5;j++)
            {
                for(j2=0;j2<n;j2++)
                {
                    printf("%c",string_vertical[i][j]);
                }
            }
            printf("\n");
        }
    }
}



void horizontal(int n)
{
    int i,j,i2,j2;

    for(i=0;i<5;i++)
    {
        for(i2=0;i2<n;i2++)
        {
            for(j=0;j<61;j++)
            {
                for(j2=0;j2<n;j2++)
                {
                    printf("%c",string_horizontal[i][j]);
                }
            }
            printf("\n");
        }
    }
}

