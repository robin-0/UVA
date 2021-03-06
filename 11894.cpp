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
#define MOD 1000000007
#define EPS 1e-9



void mergesort(int p,int r);
void merge (int p ,int q ,int r);
int lessThan(short int x1,short int y1,short int x2,short int y2);
int test(int N);

short int L[MAX][2],R[MAX][2],array[MAX][2],given_pin[MAX][2],given_port[MAX][2];

int lessThan(short int x1,short int y1,short int x2,short int y2)
{
    if(x1<x2)
    {
        return 1;
    }

    else if(x1==x2)
    {
        if(y1<y2)
            return 1;
        else
            return 2;
    }

    else
    {
        return 2;
    }
}
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

    for(i=0; i<n1; i++)
    {
        L[i][0]=array[i+p][0];
        L[i][1]=array[i+p][1];
    }


    for(j=0; j<n2; j++)
    {
        R[j][0]=array[j+q+1][0];
        R[j][1]=array[j+q+1][1];
    }

    i=0;
    j=0;

    for(k=p; k<=r; k++)
    {
        if(i<n1&&j<n2)
        {
            if(lessThan(L[i][0],L[i][1],R[j][0],R[j][1])==1)
            {
                array[k][0]=L[i][0];
                array[k][1]=L[i][1];
                i++;
            }
            else
            {
                array[k][0]=R[j][0];
                array[k][1]=R[j][1];
                j++;
            }

        }
        else if(i<n1)
        {

            array[k][0]=L[i][0];
            array[k][1]=L[i][1];
            i++;

        }
        else
        {
            array[k][0]=R[j][0];
            array[k][1]=R[j][1];
            j++;
        }
    }
}

int main ()
{
    int T,N,i,j,tes;
    short int temp1,temp2,temp;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&N);

        for(i=0; i<N; i++)
            scanf("%hd%hd",&given_port[i][0],&given_port[i][1]);

        for(i=0; i<N; i++)
            scanf("%hd%hd",&given_pin[i][0],&given_pin[i][1]);

        for(i=0; i<N; i++)
        {
            array[i][0]=given_port[i][0];
            array[i][1]=given_port[i][1];
        }

        mergesort(0,N-1);

        //for(i=0; i<N; i++)
          //  printf("%hd\t%hd\n",given_port[i][0],given_port[i][1]);

        temp1=array[0][0];
        temp2=array[0][1];

        for(i=0; i<N; i++)
        {
            given_port[i][0]=array[i][0]-temp1;
            given_port[i][1]=array[i][1]-temp2;
        }

        //for(i=0; i<N; i++)
            //printf("%hd\t%hd\n",given_port[i][0],given_port[i][1]);
        //port shesh kaaj

        for(i=0; i<N; i++)
        {
            array[i][0]=given_pin[i][0];
            array[i][1]=given_pin[i][1];
        }


        mergesort(0,N-1);

        //for(i=0; i<N; i++)
            //printf("%hd\t%hd\n",array[i][0],array[i][1]);


        temp1=array[0][0];
        temp2=array[0][1];

        for(i=0; i<N; i++)
        {
            array[i][0]-=temp1;
            array[i][1]-=temp2;
        }

        //for(i=0; i<N; i++)
            //printf("%hd\t%hd\n",array[i][0],array[i][1]);


        tes=0;
        tes=test(N);

        for(j=0;j<3;j++)
        {
            if(tes==1)
                break;

            for(i=0; i<N; i++)
            {

                temp=given_pin[i][0];

                given_pin[i][0]=-given_pin[i][1];
                given_pin[i][1]=temp;


                array[i][0]=given_pin[i][0];
                array[i][1]=given_pin[i][1];
            }



            mergesort(0,N-1);

            //for(i=0; i<N; i++)
            //printf("%hd\t%hd\n",array[i][0],array[i][1]);

            temp1=array[0][0];
            temp2=array[0][1];

            for(i=0; i<N; i++)
            {
                array[i][0]-=temp1;
                array[i][1]-=temp2;
            }

            //for(i=0; i<N; i++)
            //printf("%hd\t%hd\n",array[i][0],array[i][1]);

            tes=test(N);
        }

        if(tes==1)
            printf("MATCHED\n");
        else
            printf("NOT MATCHED\n");





    }

    return 0;

}


int test(int N)
{
    int i,cnt=0;

    for(i=0; i<N; i++)
    {
        if((array[i][0]==given_port[i][0])&&(array[i][1]==given_port[i][1]))
            cnt++;
        else
            break;
    }

    if(cnt==N)
        return 1;
    else
        return 0;
}
