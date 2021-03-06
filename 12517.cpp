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

long long int digits[20]={0,1,20,300,4000,50000,600000,7000000,80000000,900000000,10000000000};
long long int first_number[20]={0,};
long long int second_number[20]={0,};
long long int ten_power[20]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};


int main()
{
    long long int a,b,sum,c,i,divider,mod,j;
    int digit_a,digit_b;

    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
    	if(a==0&&b==0)
    		break;
    	if(a>0)
    		a--;
    	for(i=0;i<10;i++)
    	{
    		first_number[i]=0;
    		second_number[i]=0;
    	}

    	if(a>=1)
            digit_a=log10(a)+1;
        else
            digit_a=1;

    	if(b>=1)
            digit_b=log10(b)+1;
        else
            digit_b=1;

    	if(digit_a==1)
        {
            for(i=1;i<=a;i++)
            {
                first_number[i]=1;
            }

        }
        else
        {
            for(i=digit_a-1;i>=0;i--)
            {
                divider=a/ten_power[i];
                mod=a%ten_power[i];

                for(j=1;j<10;j++)
                {
                    first_number[j]+=divider*digits[i];
                }
                for(j=1;j<divider;j++)
                {
                    first_number[j]+=ten_power[i];
                }
                first_number[divider]+=mod+1;

                a=mod;
            }
        }

    	//for(i=1;i<10;i++)
            //printf("%lld %lld\n",i,first_number[i]);

        if(digit_b==1)
        {
            for(i=1;i<=b;i++)
            {
                second_number[i]=1;
            }

        }

    	else
        {
            for(i=digit_b-1;i>=0;i--)
            {
                divider=b/ten_power[i];
                mod=b%ten_power[i];

                for(j=1;j<10;j++)
                {
                    second_number[j]+=divider*digits[i];
                }
                for(j=1;j<divider;j++)
                {
                    second_number[j]+=ten_power[i];
                }
                second_number[divider]+=mod+1;

                b=mod;
            }
        }

        //printf("\n\n\n");
    	//for(i=1;i<10;i++)
            //printf("%lld\n",second_number[i]);

    	sum=0;

    	for(i=1;i<10;i++)
    	{
    		sum+=(second_number[i]-first_number[i])*i;
    	}

    	printf("%lld\n",sum);



    }

    return 0;

}

