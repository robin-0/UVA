/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005


int get_day ( int day , int month , int leap_year);

int main()
{
    int T,tp=1,day,month,year,leap_year,total_days,birth_day , day2 , month2 , year2  , leap_year2 , i;
    char inp[MAX],op[50],day3[50],month3[50],year3[50];

    scanf("%d",&T);
    gets(inp);

    while(T--)
    {
      gets(inp);

      month= (inp[0]-48)*10 + (inp[1]-48) ;
      day  = (inp[2]-48)*10 + (inp[3]-48) ;
      year = (inp[4]-48)*1000 + (inp[5]-48)*100 + (inp[6]-48)*10 + (inp[7]-48) ;

      if((year%4==0 && year%100!=0) || (year%400==0))
        leap_year=1;
      else
        leap_year=0;

      total_days= get_day ( day , month , leap_year);
      birth_day=total_days + 280 ;

      if((birth_day>365 && leap_year==0) || (birth_day>366 && leap_year==1))
        {
          year2=year+1;
          birth_day-=365;
          if(leap_year==1)
            birth_day--;
        }
      else
        {
          year2=year;
        }

      if((year2%4==0 && year2%100!=0) || (year2%400==0))
        leap_year2=1;
      else
        leap_year2=0;



      if(leap_year2==0)
      {
        if(1<=birth_day && birth_day<=31)
        {
          day2=birth_day;
          month2 = 1;
        }

        else if(32<=birth_day && birth_day<=59)
        {
          day2=birth_day - 31;
          month2 = 2;
        }

        else if(60<=birth_day && birth_day<=90)
        {
          day2=birth_day - 59;
          month2 = 3;
        }

        else if(91<=birth_day && birth_day<=120)
        {
          day2=birth_day - 90;
          month2 = 4;
        }

        else if(121<=birth_day && birth_day<=151)
        {
          day2=birth_day - 120;
          month2 = 5;
        }

        else if(152<=birth_day && birth_day<=181)
        {
          day2=birth_day - 151;
          month2 = 6;
        }

        else if(182<=birth_day && birth_day<=212)
        {
          day2=birth_day - 181;
          month2 = 7;
        }

        else if(213<=birth_day && birth_day<=243)
        {
          day2=birth_day - 212;
          month2 = 8;
        }

        else if(244<=birth_day && birth_day<=273)
        {
          day2=birth_day - 243;
          month2 = 9;
        }

        else if(274<=birth_day && birth_day<=304)
        {
          day2=birth_day - 273;
          month2 = 10;
        }

        else if(305<=birth_day && birth_day<=334)
        {
          day2=birth_day - 304;
          month2 = 11;
        }

        else if(335<=birth_day && birth_day<=365)
        {
          day2=birth_day - 334;
          month2 = 12;
        }

        //rashi ber kori
        if( 21<=birth_day && birth_day<=50)
          strcpy(op,"aquarius");
        else if( 51<=birth_day && birth_day<=79)
          strcpy(op,"pisces");
        else if( 80<=birth_day && birth_day<=110)
          strcpy(op,"aries");
        else if( 111<=birth_day && birth_day<=141)
          strcpy(op,"taurus");
        else if( 142<=birth_day && birth_day<=172)
          strcpy(op,"gemini");
        else if( 173<=birth_day && birth_day<=203)
          strcpy(op,"cancer");
        else if( 204<=birth_day && birth_day<=233)
          strcpy(op,"leo");
        else if( 234<=birth_day && birth_day<=266)
          strcpy(op,"virgo");
        else if( 267<=birth_day && birth_day<=296)
          strcpy(op,"libra");
        else if( 297<=birth_day && birth_day<=326)
          strcpy(op,"scorpio");
        else if( 327<=birth_day && birth_day<=356)
          strcpy(op,"sagittarius");
        else
          strcpy(op,"capricorn");



      }

      else
      {
        if(1<=birth_day && birth_day<=31)
        {
          day2=birth_day;
          month2 = 1;
        }

        else if(32<=birth_day && birth_day<=60)
        {
          day2=birth_day - 31;
          month2 = 2;
        }

        else if(61<=birth_day && birth_day<=91)
        {
          day2=birth_day - 60;
          month2 = 3;
        }

        else if(92<=birth_day && birth_day<=121)
        {
          day2=birth_day - 91;
          month2 = 4;
        }

        else if(122<=birth_day && birth_day<=152)
        {
          day2=birth_day - 121;
          month2 = 5;
        }

        else if(153<=birth_day && birth_day<=182)
        {
          day2=birth_day - 152;
          month2 = 6;
        }

        else if(183<=birth_day && birth_day<=213)
        {
          day2=birth_day - 182;
          month2 = 7;
        }

        else if(214<=birth_day && birth_day<=244)
        {
          day2=birth_day - 213;
          month2 = 8;
        }

        else if(245<=birth_day && birth_day<=274)
        {
          day2=birth_day - 244;
          month2 = 9;
        }

        else if(275<=birth_day && birth_day<=305)
        {
          day2=birth_day - 274;
          month2 = 10;
        }

        else if(306<=birth_day && birth_day<=335)
        {
          day2=birth_day - 305;
          month2 = 11;
        }

        else if(336<=birth_day && birth_day<=366)
        {
          day2=birth_day - 335;
          month2 = 12;
        }

        //rashi ber kori
        if( 21<=birth_day && birth_day<=50)
          strcpy(op,"aquarius");
        else if( 51<=birth_day && birth_day<=80)
          strcpy(op,"pisces");
        else if( 81<=birth_day && birth_day<=111)
          strcpy(op,"aries");
        else if( 112<=birth_day && birth_day<=142)
          strcpy(op,"taurus");
        else if( 143<=birth_day && birth_day<=173)
          strcpy(op,"gemini");
        else if( 174<=birth_day && birth_day<=204)
          strcpy(op,"cancer");
        else if( 205<=birth_day && birth_day<=234)
          strcpy(op,"leo");
        else if( 235<=birth_day && birth_day<=267)
          strcpy(op,"virgo");
        else if( 268<=birth_day && birth_day<=297)
          strcpy(op,"libra");
        else if( 298<=birth_day && birth_day<=327)
          strcpy(op,"scorpio");
        else if( 328<=birth_day && birth_day<=357)
          strcpy(op,"sagittarius");
        else
          strcpy(op,"capricorn");

      }

      for(i=1;i>=0;i--)
      {
          day3[i]=day2%10+48;
          day2/=10;
      }

      for(i=1;i>=0;i--)
      {
          month3[i]=month2%10+48;
          month2/=10;
      }

      for(i=3;i>=0;i--)
      {
          year3[i]=year2%10+48;
          year2/=10;
      }

      day3[2]='\0';
      month3[2]='\0';
      year3[4]='\0';



      printf("%d %s/%s/%s %s\n",tp,month3,day3,year3,op);

      tp++;



    }

    return 0;

}


int get_day ( int day , int month , int leap_year)
{
  int total_days;



  switch(month)
  {
    case 1 :
    {
      total_days= day;
      break;
    }

    case 2 :
    {
      total_days= day + 31;
      break;
    }

    case 3 :
    {
      total_days= day + 59;

      if(leap_year==1)
        total_days++;

      break;
    }

    case 4 :
    {
      total_days= day + 90;

      if(leap_year==1)
        total_days++;

      break;
    }

    case 5 :
    {
      total_days= day + 120;

      if(leap_year==1)
        total_days++;

      break;
    }

    case 6 :
    {
      total_days= day + 151;

      if(leap_year==1)
        total_days++;

      break;
    }

    case 7 :
    {
      total_days= day + 181;

      if(leap_year==1)
        total_days++;

      break;
    }

    case 8 :
    {
      total_days= day + 212;

      if(leap_year==1)
        total_days++;

      break;
    }

    case 9 :
    {
      total_days= day + 243;

      if(leap_year==1)
        total_days++;

      break;
    }

    case 10 :
    {
      total_days= day + 273;

      if(leap_year==1)
        total_days++;

      break;
    }

    case 11 :
    {
      total_days= day + 304;

      if(leap_year==1)
        total_days++;

      break;
    }

    case 12 :
    {
      total_days= day + 334;

      if(leap_year==1)
        total_days++;

      break;
    }
  }

  return total_days;

}
