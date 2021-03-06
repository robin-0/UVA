/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

int n,i,a,b;
int pile[35][35],stack[35],height[35],cnt[35];
char word1[205],word2[205];

void stack_khali(int a );
void print ();
void move_it(int a,int b);
void pile_it(int a,int b);

int main()
{


    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            pile[i][0]=i;
            height[i]=0;
            stack[i]=i;
            cnt[i]=0;   // kajer subidhar jonno cnt 1 kom dhorbo :p
        }


        while(1)
        {
            scanf("%s",word1);

            if(!strcmp(word1,"quit"))
                break;

            scanf("%d",&a);
            scanf("%s",word2);
            scanf("%d",&b);

            if((a==b)||(stack[a]==stack[b]))
                continue;

            if(!strcmp(word1,"move"))
            {
                if(!strcmp(word2,"onto"))
                {
                    stack_khali(a);
                    stack_khali(b);
                    move_it(a,b);

                }

                else if(!strcmp(word2,"over"))
                {
                    stack_khali(a);
                    move_it(a,b);
                }

            }

            else if(!strcmp(word1,"pile"))
            {
                if(!strcmp(word2,"onto"))
                {
                    stack_khali(b);
                    pile_it(a,b);

                }

                else if(!strcmp(word2,"over"))
                {
                    pile_it(a,b);
                }

            }
        }
        print();

    }

    return 0;
}


void stack_khali(int a )
{
    int x,i;

    for(i=height[a]+1;i<=cnt[stack[a]];i++)
    {
        x=pile[stack[a]][i];
        pile[x][0]=x;
        height[x]=0;
        cnt[x]=0;
        stack[x]=x;
    }

    cnt[stack[a]]=height[a];

}

void print ()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("%d:",i);

        for(j=0;j<=cnt[i];j++)
            printf(" %d",pile[i][j]);

        printf("\n");
    }

}


void move_it(int a,int b)
{
    cnt[stack[b]]++;
    pile[stack[b]][cnt[stack[b]]]=a;
    cnt[stack[a]]--;
    stack[a]=stack[b];
    height[a]=cnt[stack[b]];

}

void pile_it(int a,int b)
{
    int x=stack[a];
    int y=height[a];
    int num=cnt[x]-height[a];
    int i;

    for(i=0;i<=num;i++)
    {
        move_it(pile[x][y+i],b);
    }

}
