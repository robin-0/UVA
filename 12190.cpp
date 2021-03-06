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


int bisectionSearch(int A,int B);
int billToConsumption(int bill);
int consumptionToBill(int consumption);
int comparison(int A,int B, int mine, int total);


int main ()
{
    int A,B;

    //OUTPUT
    /*while(1)
    {
        scanf("%d",&A);
        printf("%d\n",billToConsumption(A));
    }*/
    while(scanf("%d%d",&A,&B)!=EOF)
    {
        if(A==0 && B==0)
            break;
        printf("%d\n",bisectionSearch(A,B));
    }


    return 0;

}

int bisectionSearch(int A,int B)
{
    int total=billToConsumption(A);
    int low=0;
    int high=total;
    int mid;
    int compare;

    //printf("%d\n",total);

    while(low<=high)
    {
        mid=(high+low)/2;

        //printf("new mine %d\n",mid);
        //printf("other %d\n",total-mid);
        //printf("my bill %d\n",consumptionToBill(mid));
        //printf("other bill %d\n",consumptionToBill(total-mid));
        //printf("difference %d\n",consumptionToBill(total-mid)-consumptionToBill(mid));
        //printf("\n\n");



        compare=comparison(A,B,mid,total);

        if(compare==0)
            return consumptionToBill(mid);

        else if(compare==-1)
            high=mid;

        else
            low=mid;
    }
}

int billToConsumption(int bill)
{
    int consumption=0;

    if(bill>=200)
    {
        consumption+=100;
        bill-=200;
    }

    else
    {
        consumption+=bill/2;
        return consumption;
    }


    if(bill>=29700)
    {
        consumption+=9900;
        bill-=29700;
    }

    else
    {
        consumption+=bill/3;
        return consumption;
    }

    if(bill>=4950000)
    {
        consumption+=990000;
        bill-=4950000;
    }

    else
    {
        consumption+=bill/5;
        return consumption;
    }

    consumption+=bill/7;
    return consumption;
}

int consumptionToBill(int consumption)
{
    int bill=0;

    if(consumption>1000000)
    {
        bill+=(consumption-1000000)*7;
        consumption=1000000;
    }
    //printf("%d\n",bill);
    if(consumption>10000)
    {
        bill+=(consumption-10000)*5;
        consumption=10000;
    }
    //printf("%d\n",bill);
    if(consumption>100)
    {
        bill+=(consumption-100)*3;
        consumption=100;
    }
    //printf("%d\n",bill);
    bill+=consumption*2;

    return bill;
}

int comparison(int A,int B, int mine, int total)
{
    int other=total-mine;
    int otherBill=consumptionToBill(other);
    int myBill=consumptionToBill(mine);
    int difference=otherBill-myBill;

    if(difference==B)
        return 0;

    else if(mine>total ||  difference<B)
        return -1;
    else
        return 1;
}
