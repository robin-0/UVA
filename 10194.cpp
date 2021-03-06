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
#define MAX 1000005


struct football_team initialize(char name[]);
void space_eater ();
int which_is_bigger( struct football_team a , struct football_team b);

struct football_team
{
    int games;
    int goal_korse;
    int goal_khaise;
    int goal_diff;
    int win;
    int lose;
    int draw;
    int points;
    char name[50];
    char choto_name[50];
}team[50],key;


struct football_team initialize(char *t_name)
{
    int i;
    struct football_team temp;
    temp.games=0;
    temp.goal_korse=0;
    temp.goal_khaise=0;
    temp.goal_diff=0;
    temp.win=0;
    temp.lose=0;
    temp.draw=0;
    temp.points=0;

    strcpy(temp.name,t_name);
    strcpy(temp.choto_name,t_name);

    for(i=0;temp.choto_name[i];i++)
        temp.choto_name[i]=tolower(temp.choto_name[i]);


    return temp;

}


int main()
{
    int T,n_teams,i,G,len,goal1,goal2,j1,j2,mode,paisi1,paisi2,j,tp=1;
    char title[1000],blank[100005],temp1[1000],temp2[1000];

    scanf("%d",&T);
    space_eater();

    while(T--)
    {
        if(tp>1)
            printf("\n");
        tp++;

       gets(title);

       scanf("%d",&n_teams);
       space_eater();

       for(i=0;i<n_teams;i++)
       {
            gets(blank);
            team[i]=initialize(blank);
       }


        scanf("%d",&G);
        space_eater();

        while(G--)
        {
            gets(blank);
            len=strlen(blank);
            goal1=0;
            goal2=0;
            j1=0;
            j2=0;
            mode=1;
            for(i=0;i<len;i++)
            {
                if(mode==1)
                {
                    if(blank[i]=='#')
                    {
                        mode=2;
                        temp1[j1]='\0';
                        continue;
                    }

                    else
                    {
                        temp1[j1++]=blank[i];
                    }
                }

                else if(mode==2)
                {
                    if(blank[i]=='@')
                    {
                        mode=3;
                        continue;
                    }

                    else
                    {
                        goal1=goal1*10+(blank[i]-'0');
                    }
                }

                else if(mode==3)
                {
                    if(blank[i]=='#')
                    {
                        mode=4;
                        continue;
                    }

                    else
                    {
                        goal2=goal2*10+(blank[i]-'0');
                    }
                }

                else
                {
                    temp2[j2++]=blank[i];
                }

            }

            temp2[j2]='\0';

            paisi1=-1;
            paisi2=-1;

            for(i=0;i<n_teams;i++)
            {
                if(paisi1!=-1 && paisi2!=-1)
                    break;
                else if(!strcmp(team[i].name,temp1))
                    paisi1=i;
                else if(!strcmp(team[i].name,temp2))
                    paisi2=i;
            }

            team[paisi1].goal_korse+=goal1;
            team[paisi1].goal_khaise+=goal2;
            team[paisi1].games++;

            team[paisi2].goal_korse+=goal2;
            team[paisi2].goal_khaise+=goal1;
            team[paisi2].games++;

            if(goal1>goal2)
            {
                team[paisi1].win++;
                team[paisi2].lose++;
            }

            else if(goal1<goal2)
            {
                team[paisi1].lose++;
                team[paisi2].win++;
            }

            else
            {
                team[paisi1].draw++;
                team[paisi2].draw++;
            }

        }

        for(i=0;i<n_teams;i++)
        {
            team[i].points=team[i].win*3 + team[i].draw ;
            team[i].goal_diff = team[i].goal_korse - team[i].goal_khaise;
        }

        /*for(i=0;i<n_teams;i++)
        {
            printf("%s\n",team[i].name);
            printf("%s\n",team[i].choto_name);
            printf("%d\n",team[i].games);
            printf("%d\n",team[i].goal_korse);
            printf("%d\n",team[i].goal_khaise);
            printf("%d\n",team[i].goal_diff);
            printf("%d\n",team[i].win);
            printf("%d\n",team[i].lose);
            printf("%d\n",team[i].draw);
            printf("%d\n",team[i].points);
            printf("\n\n");
        }*/

        for(i=0;i<n_teams;i++)
        {
            key=team[i];

            for(j=i-1;j>=0;j--)
            {
                if(which_is_bigger(team[j],key)==-1)
                    team[j+1]=team[j];
                else
                    break;
            }

            team[j+1]=key;
        }

        printf("%s\n",title);

        for(i=n_teams-1;i>=0;i--)
        {
            printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",n_teams-i,team[i].name,team[i].points,team[i].games,team[i].win,team[i].draw,team[i].lose,team[i].goal_diff,team[i].goal_korse,team[i].goal_khaise);
        }



    }


    return 0;

}



void space_eater ()
{
    char ch;

    for(;;)
    {
        ch=getchar();
        if(ch=='\n')
            return;
    }
}



int which_is_bigger( struct football_team a , struct football_team b)
{
    if(a.points>b.points)
        return -1;
    else if(a.points<b.points)
        return 1;
    else
    {
        if(a.win>b.win)
            return -1;
        else if(a.win<b.win)
            return 1;
        else
        {
            if(a.goal_diff>b.goal_diff)
                return -1;
            else if(a.goal_diff<b.goal_diff)
                return 1;
            else
            {
                if(a.goal_korse>b.goal_korse)
                    return -1;
                else if(a.goal_korse<b.goal_korse)
                    return 1;
                else
                {
                   if(a.games>b.games)
                        return 1;
                    else if(a.games<b.games)
                        return -1;
                    else
                    {
                        if(strcmp(a.choto_name,b.choto_name)<0)
                            return -1;
                        else
                            return 1;
                    }
                }
            }
        }
    }
}
