/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mergesort(int p,int r);
void merge (int p ,int q ,int r);
int L[100005],R[100005],array[100005],mod[100005],Lm[100005],Rm[100005];
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
        L[i]=mod[i+p];
        Lm[i]=array[i+p];
    }


    for(j=0;j<n2;j++)
    {
        R[j]=mod[j+q+1];
        Rm[j]=array[j+q+1];
    }

    i=0;
    j=0;

    for(k=p;k<=r;k++)
    {
       if(i<n1&&j<n2)
       {
           if(L[i]>R[j])
           {
               array[k]=Rm[j];
               mod[k]=R[j];
               j++;
           }
           else if(L[i]<R[j])
           {
               array[k]=Lm[i];
               mod[k]=L[i];
               i++;
           }
           else
           {
               if(abs(Lm[i])%2==0&&abs(Rm[j])%2==1)
               {
                    array[k]=Rm[j];
                    mod[k]=R[j];
                    j++;
               }

               else if(abs(Lm[i])%2==1&&abs(Rm[j])%2==0)
               {
                    array[k]=Lm[i];
                    mod[k]=L[i];
                    i++;
               }

               else if(abs(Lm[i])%2==0&&abs(Rm[j])%2==0)
               {
                    if(Lm[i]<Rm[j])
                    {
                        array[k]=Lm[i];
                        mod[k]=L[i];
                        i++;
                    }
                    else
                    {
                        array[k]=Rm[j];
                        mod[k]=R[j];
                        j++;
                    }
               }

               else if(abs(Lm[i])%2==1&&abs(Rm[j])%2==1)
               {
                    if(Lm[i]>Rm[j])
                    {
                        array[k]=Lm[i];
                        mod[k]=L[i];
                        i++;
                    }
                    else
                    {
                        array[k]=Rm[j];
                        mod[k]=R[j];
                        j++;
                    }
               }


           }

       }
       else if(i<n1)
       {

               array[k]=Lm[i];
               mod[k]=L[i];
               i++;

       }
       else
       {
               array[k]=Rm[j];
               mod[k]=R[j];
               j++;
       }
    }
}

int main()
{
    int N,M,i;

    while(scanf("%d%d",&N,&M)!=EOF)
    {

        if(N==0&&M==0)
        {
            printf("%d %d\n",N,M);
            break;
        }

        for(i=0;i<N;i++)
        {
            scanf("%d",&array[i]);
            mod[i]=array[i]%M;
        }
        mergesort(0,N-1);

        printf("%d %d\n",N,M);
        for(i=0;i<N;i++)
            printf("%d\n",array[i]);
    }
    return 0;
}
