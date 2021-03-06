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



int main()
{
    int N,M,i,j,tp=1,len1,len2,text_match,number_match;
    char ans[105][125],team[105][125],num_ans[MAX],num_team[MAX];

    while(1)
    {
        scanf("%d",&N);
        if(N==0)
            break;

        len1=0;
        len2=0;
        text_match=1;
        number_match=1;

        gets(num_ans);

        for(i=0;i<N;i++)
        {
            gets(ans[i]);
        }

        scanf("%d",&M);

        gets(num_team);

        for(i=0;i<M;i++)
        {
            gets(team[i]);
        }

        //printf("%d\t%d\n",N,M);
        if(N!=M)
            text_match=0;
        else
        {
            for(i=0;i<N;i++)
            {
                if(strcmp(team[i],ans[i]))
                {
                    text_match=0;
                    //printf("%s\n%s\n\n",team[i],ans[i]);
                    break;
                }
            }
        }
        //printf("%d\n",text_match);
        for(i=0;i<N;i++)
        {
            for(j=0;ans[i][j];j++)
            {
                if(ans[i][j]<='9' && ans[i][j]>='0')
                {
                    num_ans[len1++]=ans[i][j];
                }
            }
        }

        for(i=0;i<M;i++)
        {
            for(j=0;team[i][j];j++)
            {
                if(team[i][j]<='9' && team[i][j]>='0')
                {
                    num_team[len2++]=team[i][j];
                }
            }
        }

        if(len1!=len2)
            number_match=0;

        else
        {
            for(i=0;i<len1;i++)
            {
                //printf("%c %c\n",num_ans[i],num_team[i]);
                if(num_team[i]!=num_ans[i])
                {
                    number_match=0;
                    break;
                }
            }
        }
        //printf("%d\n",number_match);


        if(number_match==1 && text_match==1)
            printf("Run #%d: Accepted\n",tp);
        else if(number_match==1)
            printf("Run #%d: Presentation Error\n",tp);
        else
            printf("Run #%d: Wrong Answer\n",tp);

        tp++;


    }


    return 0;

}

