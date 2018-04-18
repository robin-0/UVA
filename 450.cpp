/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct book
{
    char title[100];
    char fname[100];
    char lname[100];
    char add[100];
    char dep[100];
    char homef[100];
    char workf[100];
    char box[100];
}person[10000],temp;


int main()
{
    int n,i,j,k,t;
    char inp[10000],dept[100];

    scanf("%d",&t);
    gets(inp);

    k=0;
    while(t--)
    {

        gets(dept);
        while(gets(inp))
        {
            n=strlen(inp);
            if(n==0)
                break;

            strcpy(person[k].dep,dept);

            j=0;
            for(i=0;i<n;i++)
            {
                if(inp[i]==',')
                    break;
                person[k].title[j++]=inp[i];
            }
            person[k].title[j]='\0';

            i++;
            j=0;
            for(;i<n;i++)
            {
                if(inp[i]==',')
                    break;
                person[k].fname[j++]=inp[i];
            }
            person[k].fname[j]='\0';

            i++;
            j=0;
            for(;i<n;i++)
            {
                if(inp[i]==',')
                    break;
                person[k].lname[j++]=inp[i];
            }
            person[k].lname[j]='\0';

            i++;
            j=0;
            for(;i<n;i++)
            {
                if(inp[i]==',')
                    break;
                person[k].add[j++]=inp[i];
            }
            person[k].add[j]='\0';

            i++;
            j=0;
            for(;i<n;i++)
            {
                if(inp[i]==',')
                    break;
                person[k].homef[j++]=inp[i];
            }
            person[k].homef[j]='\0';

            i++;
            j=0;
            for(;i<n;i++)
            {
                if(inp[i]==',')
                    break;
                person[k].workf[j++]=inp[i];
            }
            person[k].workf[j]='\0';

            i++;
            j=0;
            for(;i<n;i++)
            {
                if(inp[i]==',')
                    break;
                person[k].box[j++]=inp[i];
            }
            person[k].box[j]='\0';

            k++;
        }

    }

    for(i=0;i<k;i++)
    {
        temp=person[i];

        for(j=i-1;j>=0;j--)
        {
            if(strcmp(temp.lname,person[j].lname)>0)
                break;
            else
                person[j+1]=person[j];
        }
        person[j+1]=temp;
    }

    for(i=0;i<k;i++)
        {
            printf("----------------------------------------\n");
            printf("%s %s %s\n",person[i].title,person[i].fname,person[i].lname);
            printf("%s\n",person[i].add);
            printf("Department: %s\n",person[i].dep);
            printf("Home Phone: %s\n",person[i].homef);
            printf("Work Phone: %s\n",person[i].workf);
            printf("Campus Box: %s\n",person[i].box);
        }

    return 0;
}
