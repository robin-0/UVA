/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define EPS 1e-8



void mergesort(int p,int r);
void merge (int p ,int q ,int r);
int L[1000005],R[1000005],array[1000005];
void mergesort(int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        mergesort(p,q);
        mergesort(q+1,r);
        merge(p,q,r);
    }

}

void merge (int p ,int q ,int r)
{

    int n1=q-p+1;
    int n2=r-q;
    int i,j,k;

    for(i=0;i<n1;i++)
    {
        L[i]=array[i+p];
    }


    for(j=0;j<n2;j++)
    {
        R[j]=array[j+q+1];
    }

    i=0;
    j=0;

    for(k=p;k<=r;k++)
    {
       if(i<n1&&j<n2)
       {
           if(L[i]<=R[j])
           {
               array[k]=L[i];
               i++;
           }
           else
           {
               array[k]=R[j];
               j++;
           }

       }
       else if(i<n1)
       {

               array[k]=L[i];
               i++;

       }
       else
       {
               array[k]=R[j];
               j++;
       }
    }
}

int main()
{
    int T,N,K,i,j,tp=1;
    long long int sum;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d%d",&N,&K);
        for(i=0;i<N;i++)
        {
            scanf("%d",&array[i]);
        }

        for(i=0;i<N;i++)
        {
            scanf("%d",&j);
            array[i]=j-array[i];
        }

        mergesort(0,N-1);

        sum=0;

        for(i=0;i<K;i++)
            {
                if(array[i]>=0)
                    break;

                sum+=array[i];
            }

        if(sum<0)
            sum=0;

        for(;i<N;i++)
            sum+=array[i];

        if(sum<=0)
            printf("Case %d: No Profit\n",tp);
        else
            printf("Case %d: %lld\n",tp,sum);

        tp++;

    }



    return 0;
}


