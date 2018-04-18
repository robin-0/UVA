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
#define MAX 100005

char haab[20][20]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax",
"koyab", "cumhu","uayet"};
char tzolkin[25][20]={"","imix", "ik", "akbal", "kan", "chicchan","cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};


int main()
{
    int T,dp[270][2]={0,},i,j,day,month,year,total,new_day,new_month,new_year,temp;
    char inp[200];


    for(day=1;day<261;day++)
    {
        dp[day][0]=((day)%20);
        if(dp[day][0]==0)
            dp[day][0]=20;
        dp[day][1]=((day)%13);
        if(dp[day][1]==0)
            dp[day][1]=13;
    }

    scanf("%d",&T);
    printf("%d\n",T);
    while(T--)
    {
        scanf("%d%s%s%d",&day,inp,inp,&year);

        for(i=0;i<19;i++)
        {
            if(!strcmp(inp,haab[i]))
            {
                month=i;
                break;
            }
        }

        total=day+month*20+1+year*365;

        new_year=total/260;
        temp=total%260;
        if(temp==0)
        {
            temp=260;
            new_year--;
        }
        new_day=dp[temp][0];
        new_month=dp[temp][1];


        printf("%d %s %d\n",new_month,tzolkin[new_day],new_year);



    }



    return 0;

}

