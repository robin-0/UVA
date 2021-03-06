/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005




int main()
{
    long long int file_size , transfered , remaining , i ,tp=1 , time ,data  ;

    while(scanf("%lld",&file_size)!=EOF)
    {
        if(file_size==0)
            break;

        printf("Output for data set %lld, %lld bytes:\n",tp,file_size);
        transfered=0;
        remaining=file_size;

        for(i=1;remaining!=0;i++)
        {
            scanf("%lld",&data);

            transfered+=data;
            remaining-=data;

            if(i%5==0)
            {

                if(transfered==0)
                {
                    printf("   Time remaining: stalled\n");
                }

                else
                {
                    time = (remaining*5)/transfered;
                    if(((remaining*5)%transfered))
                    time++;
                    printf("   Time remaining: %lld seconds\n",time);
                    transfered=0;
                }
            }

        }
        printf("Total time: %lld seconds\n\n",i-1);
        tp++;
    }

    return 0;
}

