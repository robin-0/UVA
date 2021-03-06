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

struct Hands
{
    int C[15],CT,CJ,CQ,CK,CA;
    int D[15],DT,DJ,DQ,DK,DA;
    int S[15],ST,SJ,SQ,SK,SA;
    int H[15],HT,HJ,HQ,HK,HA;
}North,South,East,West;

struct Hands initializeHand();
struct Hands takeInput(struct Hands Hand, char a,char b);
void giveOutput(struct Hands Hand);


int main()
{
    char inp[MAX],inp2[MAX];
    int i  ;

    while(1)
    {
        scanf("%s",inp);

        if(inp[0]=='#')
            break;

        else
        {
            North=initializeHand();
            South=initializeHand();
            East=initializeHand();
            West=initializeHand();


            if(inp[0]=='N')
            {
                scanf("%s",inp);
                scanf("%s",inp2);
                strcat(inp,inp2);

                for(i=0;inp[i];i++)
                {
                    switch(i%8)
                    {
                        case 0 : East=takeInput(East,inp[i],inp[i+1]);  break;
                        case 2 : South=takeInput(South,inp[i],inp[i+1]); break;
                        case 4 : West=takeInput(West,inp[i],inp[i+1]); break;
                        case 6 : North=takeInput(North,inp[i],inp[i+1]); break;
                    }

                    i++;
                }

            }

            else if(inp[0]=='E')
            {
                scanf("%s",inp);
                scanf("%s",inp2);
                strcat(inp,inp2);

                for(i=0;inp[i];i++)
                {
                    switch(i%8)
                    {
                        case 0 : South=takeInput(South,inp[i],inp[i+1]); break;
                        case 2 : West=takeInput(West,inp[i],inp[i+1]); break;
                        case 4 : North=takeInput(North,inp[i],inp[i+1]); break;
                        case 6 : East=takeInput(East,inp[i],inp[i+1]); break;

                    }

                    i++;
                }

            }

            else if(inp[0]=='S')
            {
                scanf("%s",inp);
                scanf("%s",inp2);
                strcat(inp,inp2);

                for(i=0;inp[i];i++)
                {
                    switch(i%8)
                    {
                        case 0 : West=takeInput(West,inp[i],inp[i+1]); break;
                        case 2 : North=takeInput(North,inp[i],inp[i+1]); break;
                        case 4 : East=takeInput(East,inp[i],inp[i+1]); break;
                        case 6 : South=takeInput(South,inp[i],inp[i+1]); break;

                    }

                    i++;
                }

            }

            else
            {
                scanf("%s",inp);
                scanf("%s",inp2);
                strcat(inp,inp2);

                for(i=0;inp[i];i++)
                {
                    switch(i%8)
                    {
                        case 0 : North=takeInput(North,inp[i],inp[i+1]); break;
                        case 2 : East=takeInput(East,inp[i],inp[i+1]); break;
                        case 4 : South=takeInput(South,inp[i],inp[i+1]); break;
                        case 6 : West=takeInput(West,inp[i],inp[i+1]); break;

                    }

                    i++;
                }

            }

            printf("S:");
            giveOutput(South);

            printf("W:");
            giveOutput(West);

            printf("N:");
            giveOutput(North);

            printf("E:");
            giveOutput(East);




        }
    }


    return 0;

}


struct Hands takeInput(struct Hands Hand, char a,char b)
{
    if(a=='C')
    {
        if('2'<=b && b<='9')
            Hand.C[b-'0']=1;
        else if(b=='T')
            Hand.CT=1;
        else if(b=='A')
            Hand.CA=1;
        else if(b=='K')
            Hand.CK=1;
        else if(b=='Q')
            Hand.CQ=1;
        else if(b=='J')
            Hand.CJ=1;
    }

    else if(a=='D')
    {
        if('2'<=b && b<='9')
            Hand.D[b-'0']=1;
        else if(b=='T')
            Hand.DT=1;
        else if(b=='A')
            Hand.DA=1;
        else if(b=='K')
            Hand.DK=1;
        else if(b=='Q')
            Hand.DQ=1;
        else if(b=='J')
            Hand.DJ=1;
    }

    else if(a=='S')
    {
        if('2'<=b && b<='9')
            Hand.S[b-'0']=1;
        else if(b=='T')
            Hand.ST=1;
        else if(b=='A')
            Hand.SA=1;
        else if(b=='K')
            Hand.SK=1;
        else if(b=='Q')
            Hand.SQ=1;
        else if(b=='J')
            Hand.SJ=1;
    }

    else
    {
        if('2'<=b && b<='9')
            Hand.H[b-'0']=1;
        else if(b=='T')
            Hand.HT=1;
        else if(b=='A')
            Hand.HA=1;
        else if(b=='K')
            Hand.HK=1;
        else if(b=='Q')
            Hand.HQ=1;
        else if(b=='J')
            Hand.HJ=1;
    }

    return Hand;
}

void giveOutput(struct Hands Hand)
{
    int i;

    for(i=2;i<10;i++)
    {
        if(Hand.C[i]==1)
            printf(" C%d",i);
    }

    if(Hand.CT==1)
        printf(" CT");
    if(Hand.CJ==1)
        printf(" CJ");
    if(Hand.CQ==1)
        printf(" CQ");
    if(Hand.CK==1)
        printf(" CK");
    if(Hand.CA==1)
        printf(" CA");


    for(i=2;i<10;i++)
    {
        if(Hand.D[i]==1)
            printf(" D%d",i);
    }

    if(Hand.DT==1)
        printf(" DT");
    if(Hand.DJ==1)
        printf(" DJ");
    if(Hand.DQ==1)
        printf(" DQ");
    if(Hand.DK==1)
        printf(" DK");
    if(Hand.DA==1)
        printf(" DA");


    for(i=2;i<10;i++)
    {
        if(Hand.S[i]==1)
            printf(" S%d",i);
    }

    if(Hand.ST==1)
        printf(" ST");
    if(Hand.SJ==1)
        printf(" SJ");
    if(Hand.SQ==1)
        printf(" SQ");
    if(Hand.SK==1)
        printf(" SK");
    if(Hand.SA==1)
        printf(" SA");


    for(i=2;i<10;i++)
    {
        if(Hand.H[i]==1)
            printf(" H%d",i);
    }

    if(Hand.HT==1)
        printf(" HT");
    if(Hand.HJ==1)
        printf(" HJ");
    if(Hand.HQ==1)
        printf(" HQ");
    if(Hand.HK==1)
        printf(" HK");
    if(Hand.HA==1)
        printf(" HA");


    printf("\n");
}

struct Hands initializeHand()
{
    struct Hands Hand;
    int i;

    for(i=2;i<10;i++)
    {
        Hand.C[i]=0;
        Hand.D[i]=0;
        Hand.S[i]=0;
        Hand.H[i]=0;
    }

    Hand.CT=0;
    Hand.DT=0;
    Hand.ST=0;
    Hand.HT=0;

    Hand.CA=0;
    Hand.DA=0;
    Hand.SA=0;
    Hand.HA=0;


    Hand.CK=0;
    Hand.DK=0;
    Hand.SK=0;
    Hand.HK=0;

    Hand.CQ=0;
    Hand.DQ=0;
    Hand.SQ=0;
    Hand.HQ=0;

    Hand.CJ=0;
    Hand.DJ=0;
    Hand.SJ=0;
    Hand.HJ=0;


    return Hand;
}
