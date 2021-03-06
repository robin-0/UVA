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
    int T,N,M,teams,ans,i,j,steps;

    scanf("%d",&T);
    while(T--)
    {
      scanf("%d%d",&N,&M);

      teams=1<<N;

      int games[12][1030]={0,};

      for(i=0;i<teams;i++)
      {
        games[0][i]=1;
      }

      for(i=0;i<M;i++)
      {
        scanf("%d",&j);
        games[0][j-1]=0;
      }

      ans=0;


      for(j=1;j<=N;j++)
      {
        steps=1<<(N-j);
        for(i=0;i<steps;i++)
        {
          if((games[j-1][i*2]+games[j-1][i*2+1])==2)
          {
            games[j][i]=1;
          }
          else if((games[j-1][i*2]+games[j-1][i*2+1])==1)
          {
            games[j][i]=1;
            ans++;
          }
          else
          {
            games[j][i]=0;
          }
        }
      }

      /*for(i=0;i<=N;i++)
      {
        for(j=0;j<(1<<(N-i));j++)
          printf("%d ",games[i][j]);
        printf("\n");
      }*/

      printf("%d\n",ans);

    }


    return 0;

}
