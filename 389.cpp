/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("C-small-practice.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back


int inp[MAX];
char in[MAX];
char op[MAX];
int lenInp,lenOp;

long long int toDec(int base);
void toBase(int base,long long int num);

long long int toDec(int base)
{
    long long int ans=0;
    int i;

    for(i=0;i<lenInp;i++)
    {
        ans=ans*base+(inp[i]);
    }

    return ans;
}

void toBase(int base,long long int num)
{
    int i=0,temp;
    lenOp=0;

    while(1)
    {
        temp=num%base;

        switch(temp)
        {
            case 0 : op[lenOp]='0'; break;
            case 1 : op[lenOp]='1'; break;
            case 2 : op[lenOp]='2'; break;
            case 3 : op[lenOp]='3'; break;
            case 4 : op[lenOp]='4'; break;
            case 5 : op[lenOp]='5'; break;
            case 6 : op[lenOp]='6'; break;
            case 7 : op[lenOp]='7'; break;
            case 8 : op[lenOp]='8'; break;
            case 9 : op[lenOp]='9'; break;
            case 10 : op[lenOp]='A'; break;
            case 11 : op[lenOp]='B'; break;
            case 12 : op[lenOp]='C'; break;
            case 13 : op[lenOp]='D'; break;
            case 14 : op[lenOp]='E'; break;
            case 15 : op[lenOp]='F'; break;
        }

        lenOp++;

        num/=base;

        if(num==0)
            break;
    }

}

int main()
{
    long long int num,given,wanted,i;

    //INPUT
    //OUTPUT

    while(scanf("%s",in)!=EOF)
    {
        getInt(given)
        getInt(wanted)
        lenInp=strlen(in);
        for(i=0;i<lenInp;i++)
        {
            switch(in[i])
            {
                case '0' : inp[i] = 0; break;
                case '1' : inp[i] = 1; break;
                case '2' : inp[i] = 2; break;
                case '3' : inp[i] = 3; break;
                case '4' : inp[i] = 4; break;
                case '5' : inp[i] = 5; break;
                case '6' : inp[i] = 6; break;
                case '7' : inp[i] = 7; break;
                case '8' : inp[i] = 8; break;
                case '9' : inp[i] = 9; break;
                case 'A' : inp[i] = 10; break;
                case 'B' : inp[i] = 11; break;
                case 'C' : inp[i] = 12; break;
                case 'D' : inp[i] = 13; break;
                case 'E' : inp[i] = 14; break;
                case 'F' : inp[i] = 15; break;
            }
        }

        toBase(wanted,toDec(given));
//DEBUG(lenOp)
        if(lenOp>7)
            printf("  ERROR\n");

        else
        {
            for(i=7;i>=1;i--)
            {
                if(i>lenOp)
                {
                    printf(" ");
                }

                else
                {
                    printf("%c",op[i-1]);
                }

            }

            printf("\n");
        }

    }

    return 0;
}

