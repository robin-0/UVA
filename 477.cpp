/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 10005
#define EPS 1e-11


int main()
{
    double rect[15][5],circ[15][4],x,y;
    int nrect=0,ncirc=0,i=1,j,test,point=1,orect[15],ocirc[15];
    char ch;

    while(1)
    {
        ch=getchar();
        if(ch=='*')
            break;
        else if(ch=='c')
        {
            ocirc[ncirc]=i;
            scanf("%lf%lf%lf",&circ[ncirc][1],&circ[ncirc][2],&circ[ncirc][3]);

            getchar();
            i++;
            ncirc++;
        }
        else
        {
            orect[nrect]=i;
            scanf("%lf%lf%lf%lf",&rect[nrect][1],&rect[nrect][2],&rect[nrect][3],&rect[nrect][4]);

            getchar();
            i++;
            nrect++;
        }
    }

    while(1)
    {
        scanf("%lf%lf",&x,&y);

        if(x==9999.9&&y==9999.9)
            break;

        test=0;
        int checklist[30]={0,};

        for(i=0;i<nrect;i++)
        {
            if(((x<=rect[i][3])&&(x>=rect[i][1]))&&((y>=rect[i][4])&&(y<=rect[i][2])))
            {
                checklist[orect[i]]=1;
            }
        }

        for(i=0;i<ncirc;i++)
        {
            if( (x-circ[i][1])*(x-circ[i][1]) + (y-circ[i][2])*(y-circ[i][2]) <= circ[i][3]*circ[i][3]  )
            {
                checklist[ocirc[i]]=1;
            }
        }

        for(i=0;i<30;i++)
        {
            if(checklist[i]==1)
            {
                printf("Point %d is contained in figure %d\n",point,i);
                test=1;
            }
        }

        if(test==0)
            printf("Point %d is not contained in any figure\n",point);

        point++;
    }


    return 0;
}


