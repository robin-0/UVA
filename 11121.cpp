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
    int T,tp=1,num,i,a=-2,array[1000],dig,pre;
    int absn,b,c;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&num);
        dig=0;
        pre=num;

        for(;;)
        {
            if(pre==0)
            {
                    array[dig++]=0;
                    break;
            }

            else if(pre==1)
            {
                    array[dig++]=1;
                    break;
            }

         
            else if(pre<0)
            {
                absn=-pre;
                pre=absn/2;
                if(absn%2==1)    pre++;
                array[dig++]=pre*2-absn;
            }
            else if(pre>1)
            {
                array[dig++]=pre % 2;
                pre/=2;
                pre=-pre;



            }

        }

        printf("Case #%d: ",tp);
        tp++;

        for(i=dig-1;i>=0;i--)
            printf("%d",array[i]);
        printf("\n");
    }



    return 0;
}
