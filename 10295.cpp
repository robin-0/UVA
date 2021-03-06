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
    int m,n,i,j;
    int hash[26][1005]={0,},hash_index[26]={0,};
    char dict[1005][20];
    int point[2005];
    char inp[100];
    unsigned long long int ans;

    scanf("%d%d",&m,&n);

    for(i=0;i<m;i++)
    {
        scanf("%s%d",dict[i],&point[i]);
        j=dict[i][0]-'a';
        hash[j][hash_index[j]++]=i;
    }

    while(n--)
    {
        ans=0;
        while(1)
        {
            scanf("%s",inp);
            if(inp[0]=='.')
                break;

            else
            {
                j=inp[0]-'a';
                for(i=0;i<hash_index[j];i++)
                {
                    if(!strcmp(dict[hash[j][i]],inp))
                    {
                        ans+=point[hash[j][i]];
                        break;
                    }
                }
            }
        }

        printf("%llu\n",ans);
    }

    return 0;
}

