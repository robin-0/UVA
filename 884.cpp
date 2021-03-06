/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int main()
{
   int sieve[32000]={0,},prime[78600]={0,},primo=0,i,j,pre,num;
   int ans[1000005]={0,},cnt;

   sieve[0]=3;

   for(i=2;i<1010;i++)
   {
       if( (sieve[i>>5]&(1<<(i&31))) ==0  )
       {
           prime[primo++]=i;

           for(j=i*i;j<1000005;j+=i)
           {
               sieve[j>>5]|=1<<(j&31);
           }
       }
   }

   


   for(i=2;i<1000002;i++)
   {
       cnt=0;
       pre=i;

       if( (sieve[pre>>5]&(1<<(pre&31))) ==0 )
       {
           cnt=1;
           ans[i]=ans[i-1]+cnt;
           continue;
       }

       else
       {
           for(j=0;j<primo;j++)
           {
               if(prime[j]*prime[j]>pre)
                break;

               while(pre%prime[j]==0)
               {
                   pre/=prime[j];
                   cnt++;
               }
           }

            if( pre!=1)
            {
                cnt++;

            }
             ans[i]=ans[i-1]+cnt;

       }
   }

   while(scanf("%d",&num)!=EOF)
   {
       printf("%d\n",ans[num]);
   }


    return 0;

}
