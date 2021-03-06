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


char months[20][50]={"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};
int day_number(int day , int month , int leapyear);
int is_leap_year(int year);

int main()
{
     int T,tp=1,k,day1,day2,month1,month2,year1,year2,i,len,leap_year1,leap_year2,day_no1,day_no2;
     char inp[50];

     scanf("%d",&T);
     while(T--)
     {
        scanf("%d-%s",&year1,inp);
        scanf("%d",&k);

        len=strlen(inp);

        day1=(inp[len-1]-'0') + (inp[len-2]-'0')*10;
        inp[len-3]='\0';

        for(i=0;i<12;i++)
        {
            if(!strcmp(inp,months[i]))
            {
                month1=i+1;
                break;
            }
        }

        //printf("%d\t%d\t%d\t%s\n",day1,month1,year1,inp);

        leap_year1=is_leap_year(year1);
        day_no1=day_number(day1,month1,leap_year1);

        k+=day_no1;

        //printf("%d\n",day_no1);

        for(year2=year1;;year2++)
        {
            leap_year2=is_leap_year(year2);

            if(leap_year2==1)
            {
                if(k<=366)
                {
                    if(1<=k && k<=31)
                    {
                      day2=k;
                      month2 = 1;
                    }

                    else if(32<=k && k<=60)
                    {
                      day2=k - 31;
                      month2 = 2;
                    }

                    else if(61<=k && k<=91)
                    {
                      day2=k - 60;
                      month2 = 3;
                    }

                    else if(92<=k && k<=121)
                    {
                      day2=k - 91;
                      month2 = 4;
                    }

                    else if(122<=k && k<=152)
                    {
                      day2=k - 121;
                      month2 = 5;
                    }

                    else if(153<=k && k<=182)
                    {
                      day2=k - 152;
                      month2 = 6;
                    }

                    else if(183<=k && k<=213)
                    {
                      day2=k - 182;
                      month2 = 7;
                    }

                    else if(214<=k && k<=244)
                    {
                      day2=k - 213;
                      month2 = 8;
                    }

                    else if(245<=k && k<=274)
                    {
                      day2=k - 244;
                      month2 = 9;
                    }

                    else if(275<=k && k<=305)
                    {
                      day2=k - 274;
                      month2 = 10;
                    }

                    else if(306<=k && k<=335)
                    {
                      day2=k - 305;
                      month2 = 11;
                    }

                    else if(336<=k && k<=366)
                    {
                      day2=k - 335;
                      month2 = 12;
                    }

                    break;
                }
                else
                {
                    k-=366;
                    continue;
                }
            }

            else
            {
                if(k<=365)
                {
                    if(1<=k && k<=31)
                    {
                      day2=k;
                      month2 = 1;
                    }

                    else if(32<=k && k<=59)
                    {
                      day2=k - 31;
                      month2 = 2;
                    }

                    else if(60<=k && k<=90)
                    {
                      day2=k - 59;
                      month2 = 3;
                    }

                    else if(91<=k && k<=120)
                    {
                      day2=k - 90;
                      month2 = 4;
                    }

                    else if(121<=k && k<=151)
                    {
                      day2=k - 120;
                      month2 = 5;
                    }

                    else if(152<=k && k<=181)
                    {
                      day2=k - 151;
                      month2 = 6;
                    }

                    else if(182<=k && k<=212)
                    {
                      day2=k - 181;
                      month2 = 7;
                    }

                    else if(213<=k && k<=243)
                    {
                      day2=k - 212;
                      month2 = 8;
                    }

                    else if(244<=k && k<=273)
                    {
                      day2=k - 243;
                      month2 = 9;
                    }

                    else if(274<=k && k<=304)
                    {
                      day2=k - 273;
                      month2 = 10;
                    }

                    else if(305<=k && k<=334)
                    {
                      day2=k - 304;
                      month2 = 11;
                    }

                    else if(335<=k && k<=365)
                    {
                      day2=k - 334;
                      month2 = 12;
                    }
                    break;
                }
                else
                {
                    k-=365;
                    continue;
                }
            }

        }

        printf("Case %d: %d-%s-%d%d\n",tp,year2,months[month2-1],day2/10,day2%10);
        tp++;

     }



    return 0;

}




int day_number(int day , int month , int leapyear)
{
    int ans;

    switch(month)
    {
        case 1 :
            ans = day;
            break;
        case 2 :
            ans = 31 + day ;
            break;
        case 3 :
            ans = 59 + day ;
            if(leapyear==1)
                ans++;
            break;
        case 4 :
            ans = 90 + day ;
            if(leapyear==1)
                ans++;
            break;
        case 5 :
            ans = 120 + day ;
            if(leapyear==1)
                ans++;
            break;
        case 6 :
            ans = 151 + day ;
            if(leapyear==1)
                ans++;
            break;
        case 7 :
            ans = 181 + day ;
            if(leapyear==1)
                ans++;
            break;
        case 8 :
            ans = 212 + day ;
            if(leapyear==1)
                ans++;
            break;
        case 9 :
            ans = 243 + day ;
            if(leapyear==1)
                ans++;
            break;
        case 10 :
            ans = 273 + day ;
            if(leapyear==1)
                ans++;
            break;
        case 11 :
            ans = 304 + day ;
            if(leapyear==1)
                ans++;
            break;
        case 12 :
            ans = 334 + day ;
            if(leapyear==1)
                ans++;
            break;
    }

    return ans;
}


int is_leap_year(int year)
{
    if((year%4==0 && year%100!=0)||(year%400==0))
        return 1;
    else
        return 0;

}
