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
#define MAX 200005
#define MOD 1000000007
#define INF 1000000

int matrix[600][600];
int N,M;

int binary_search_diagonal(int row, int column, int element, int length, int mode);
void transpose();
int query(int elementLow , int elementHigh);

int main ()
{
    int Q,L,U;
    int i,j,ans;

    //OUTPUT

    while(scanf("%d%d",&N,&M)!=EOF)
    {
        if(N==0 && M==0)
            break;

        for(i=0; i<N; i++)
        {
            for(j=0; j<M; j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }


        if(N>M)
            transpose();

        /*   while(1)
           {
               scanf("%d %d",&i,&j);
               Q=query(i,j);
           }*/
        /*printf("%d %d\n",N,M);
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                printf("%d ",matrix[i][j]);
            }
            printf("\n");
        }*/

        scanf("%d",&Q);

        while(Q--)
        {
            scanf("%d%d",&L,&U);

            if(L>U)
            {
                L=L^U;
                U=L^U;
                L=L^U;
            }

            ans=query(L,U);

            printf("%d\n",ans);
        }
        printf("-\n");
    }

    return 0;

}



int binary_search_diagonal(int row, int column, int element, int length, int mode)
{
    int i,j;

    int high=length-1;
    int low=0;
    int mid;


    //for(i=low;i<=high;i++)
    //  printf("%d ",matrix[i+row][i+column]);
    //printf("\n");


    if(mode==1) //less than binary search
    {
        if(matrix[low+row][low+column]>=element)
            return low;
        if(matrix[high+row][high+column]<element)
            return -1;

        mid=(low+high)/2;

        while(low<high)
        {
            if(element<=matrix[mid+row][mid+column])
                high=mid;

            else
                low=mid+1;

            mid=(low+high)/2;
        }

        return mid;

    }

    else //greater than binary search
    {
        if(matrix[low+row][low+column]>element)
            return -1;
        if(matrix[high+row][high+column]<=element)
            return high;

        mid=(low+high+1)/2;

        while(low<high)
        {
            if(element>=matrix[mid+row][mid+column])
                low=mid;

            else
                high=mid-1;

            mid=(low+high+1)/2;
        }

        return mid;

    }

}

void transpose()
{
    int i,j;
    int half=M/2;

    for(i=0; i<M; i++)
    {
        for(j=0; j<i; j++)
        {
            matrix[i][j] = matrix[i][j]^matrix[j][i];
            matrix[j][i] = matrix[i][j]^matrix[j][i];
            matrix[i][j] = matrix[i][j]^matrix[j][i];
        }
    }

    int extra=N-M;

    for(i=0; i<extra; i++)
    {
        for(j=0; j<M; j++)
        {
            matrix[j][M+i]=matrix[M+i][j];
        }
    }

    N=N^M;
    M=N^M;
    N=N^M;
}


int query(int elementLow , int elementHigh)
{
    int i,j,max=0,pos1,pos2,len,extra=M-N;

    if(elementLow>matrix[N-1][M-1])
        return 0;
    if(elementHigh<matrix[0][0])
        return 0;


    //lower triangle
    for(i=0; i<N; i++)
    {
        pos1=binary_search_diagonal(N-1-i,0,elementLow,1+i,1);
        pos2=binary_search_diagonal(N-1-i,0,elementHigh,1+i,2);

        if(pos1!=-1&&pos2!=-1)
        {
            len=pos2-pos1+1;
            if(len>max)
                max=len;
        }
        //printf("%d\t%d\n",pos1,pos2);

    }

    // shift diagonal
    for(i=0; i<extra; i++)
    {
        if(max==N)
            return max;

        pos1=binary_search_diagonal(0,i+1,elementLow,N,1);
        pos2=binary_search_diagonal(0,i+1,elementHigh,N,2);

        if(pos1!=-1&&pos2!=-1)
        {
            len=pos2-pos1+1;
            if(len>max)
                max=len;
        }
        //printf("%d\t%d\n",pos1,pos2);

    }

    //upper triangle
    int temp=N-1;

    for(i=0; i<temp; i++)
    {
        int temp=N-1-i;

        if(max>temp)
            return max;

        pos1=binary_search_diagonal(0,extra+i+1,elementLow,temp,1);
        pos2=binary_search_diagonal(0,extra+i+1,elementHigh,temp,2);

        //printf("%d\t%d\n",pos1,pos2);

        if(pos1!=-1&&pos2!=-1)
        {
            len=pos2-pos1+1;
            if(len>max)
                max=len;
        }

        //printf("%d\t%d\n",pos1,pos2);

    }

    return max;

}
