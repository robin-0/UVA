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

long long int cubes[1005]={0,};

int main()
{
    long long int low,range,high,i,start,j,temp,cnt;

    for(i=0;i<1003;i++)
        cubes[i]=i*i*i;

    //for(i=0;i<1003;i++)
        //printf("%lld\n",cubes[i]);
	while(scanf("%lld%lld",&low,&range)!=EOF)
    {
        high=low+range;
        int check[100005]={0,};
        //start=pow((double)low,1.0/3.0);
        //start-=2;
//printf("%lld\n",start);
        for(i=1;i<1003;i++)
        {
            if(cubes[i]>high)
                break;
            for(j=1;j<1003;j++)
            {
                temp=cubes[i]+cubes[j];
                if(temp>high)
                    break;
                else if( (temp<=high)&&(temp>=low))
                    check[temp-low]++;
            }
        }

        cnt=0;
        for(i=0;i<=range;i++)
        {
            if(check[i]>2)
            {
                printf("%lld\n",low+i);
                cnt=1;
            }
        }

        if(cnt==0)
            printf("None\n");

    }

    return 0;

}

