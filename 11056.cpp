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


int main()
{
    int n,i,j,key1,time[1000],m,s,ms;
    char name[1000][50],small_name[1000][50],moyla[50],key2[50],key3[50];

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%s",name[i]);
            for(j=0;name[i][j]!='\0';j++)
                small_name[i][j]=tolower(name[i][j]);

            scanf("%s",moyla);

            small_name[i][j]='\0';

            scanf("%d%s",&m,moyla);
            scanf("%d%s",&s,moyla);
            scanf("%d%s",&ms,moyla);

            time[i]=ms+s*1000+m*60000;
        }

        //for(i=0;i<n;i++)
            //printf("%s %s %d\n",name[i],small_name[i],time[i]);

        for(i=0;i<n;i++)
        {
            key1=time[i];
            strcpy(key2,name[i]);
            strcpy(key3,small_name[i]);

            for(j=i-1;j>=0;j--)
            {
                if(time[j]>key1)
                {
                    time[j+1]=time[j];
                    strcpy(name[j+1],name[j]);
                    strcpy(small_name[j+1],small_name[j]);
                }

                else if(time[j]==key1)
                {
                    if(strcmp(key3,small_name[j])<0)
                    {
                        time[j+1]=time[j];
                        strcpy(name[j+1],name[j]);
                        strcpy(small_name[j+1],small_name[j]);
                    }
                    else
                        break;
                }

                else
                    break;
            }

            time[j+1]=key1;
            strcpy(name[j+1],key2);
            strcpy(small_name[j+1],key3);
        }

        for(i=0;i<(n/2);i++)
        {
            printf("Row %d\n",i+1);
            printf("%s\n%s\n",name[2*i],name[2*i+1]);
        }

        if(n%2==1)
        {
            printf("Row %d\n",(n/2)+1);
            printf("%s\n",name[n-1]);
        }

        printf("\n");
    }
    return 0;

}




