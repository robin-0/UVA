/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main()
{
    int N,A,B,C,D,E,done;
    char ans;

    while(1)
    {
        scanf("%d",&N);
        if(N==0)
            break;

        while(N--)
        {
            scanf("%d%d%d%d%d",&A,&B,&C,&D,&E);
            done=-1;
            ans='*';

            if(A<=127)
            {
                if(done==-1)
                {
                    ans='A';
                    done=1;
                }
                else
                {
                    ans='*';
                }
            }

            if(B<=127)
            {
                if(done==-1)
                {
                    ans='B';
                    done=1;
                }
                else
                {
                    ans='*';
                }
            }

            if(C<=127)
            {
                if(done==-1)
                {
                    ans='C';
                    done=1;
                }
                else
                {
                    ans='*';
                }
            }

            if(D<=127)
            {
                if(done==-1)
                {
                    ans='D';
                    done=1;
                }
                else
                {
                    ans='*';
                }
            }

            if(E<=127)
            {
                if(done==-1)
                {
                    ans='E';
                    done=1;
                }
                else
                {
                    ans='*';
                }
            }

            printf("%c\n",ans);
        }
    }

    return 0;

}

