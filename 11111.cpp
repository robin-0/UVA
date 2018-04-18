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

int test=1;
int array[MAX] , array_len , len , function_call=0 , function_return=0;
char str[MAX];

int khabar_rakhi(int plate_index , int plate_value);
void maan_nei ();

int main()
{
    int i,j;
    while(gets(str))
    {
        test=1;
        function_call=0;
        function_return=0;

        len=strlen(str);
        maan_nei();

        //for(i=0;i<array_len;i++)
          //  printf("%d  ",array[i]);
        //printf("\n");

        for(i=0;i<array_len;i++)
        {
            if(array[i]<0)
            {
                function_call++;
                i= khabar_rakhi(i,-array[i]);
            }
            else
            {


    //printf("Case 4\n");
                test=0;
                break;
            }
        }
//printf("call %d\n",function_call);
        //printf("return %d\n",function_return);
        if(function_call!=function_return)
            test=0;

        if(test==1)
            printf(":-) Matrioshka!\n");
        else
            printf(":-( Try again.\n");


    }


    return 0;

}




int khabar_rakhi(int plate_index , int plate_value)
{
    int i;
    long long int total=0;

    //printf("%d\n",plate_value);

    for(i=plate_index+1 ; i < array_len ; i++)
    {
        //printf("%d \t %d\t %d\n",i,-array[i],plate_value);
        if(array[i]== plate_value)
        {
            function_return++;

    //printf("Case 1\n");
            break;
        }

        else if(array[i]<0)
        {
            function_call++;

    //printf("Case 2\n");
            total-=array[i];
            i= khabar_rakhi(i,-array[i]);

        }

        else
        {

    //printf("Case 3\n");
            test=0;
            break;
        }
    }

    if(total>=plate_value)
    {
        //printf("Case 5\n");

        test=0;
    }
    //if(i==array_len)
    //{
      //  printf("Case 6\n");

        //test=0;

    //}
    //printf("%value %d\n",i);
    return i ;
}


void maan_nei ()
{
    int i,current,taking=0,sign=1;

    array_len=0;


    current =0 ;

    for(i=0;i<len;i++)
    {
        if(str[i]=='-')
        {
            sign=-1;
            taking=1;
        }
        else if(str[i]<='9' && str[i]>='0')
        {
            current=current*10 + str[i] - '0';
            taking=1;
        }
        else
        {
            if(taking==1)
            {
                array[array_len++]=current*sign;
                current=0;
                taking=0;
                sign=1;
            }
        }

    }

    if(taking==1)
        array[array_len++]=current;

    return;
}
