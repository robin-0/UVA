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


struct Circle
{
    int x,y,rad;
    int r,g,b;
}cir[200];

struct Square
{
    int x1,x2,y1,y2,length;
    int r,g,b;
}sqr[200];

int inSquare(int a,int b,int x1,int y1, int x2,int y2);
int inCircle(int a,int b,int x,int y, int r);

int main()
{
    int T,tp=1,R,P,cir_no,sqr_no,i,x,y,cnt,check;
    int r,g,b,rp,gp,bp;
    char inp[20];

    scanf("%d",&T);

    while(T--)
    {
        if(tp>1)
            printf("\n");
        scanf("%d%d",&R,&P);

        cir_no=0;
        sqr_no=0;

        for(i=0;i<R;i++)
        {
            scanf("%s",inp);

            if(!strcmp(inp,"SQUARE"))
            {
                scanf("%d%d%d%d%d%d",&sqr[sqr_no].x1,&sqr[sqr_no].y1,&sqr[sqr_no].length,&sqr[sqr_no].r,&sqr[sqr_no].g,&sqr[sqr_no].b);
                sqr[sqr_no].x2=sqr[sqr_no].x1+sqr[sqr_no].length;
                sqr[sqr_no].y2=sqr[sqr_no].y1+sqr[sqr_no].length;
                sqr_no++;
            }
            else
            {
                scanf("%d%d%d%d%d%d",&cir[cir_no].x,&cir[cir_no].y,&cir[cir_no].rad,&cir[cir_no].r,&cir[cir_no].g,&cir[cir_no].b);
                cir_no++;
            }

        }

        printf("Case %d:\n",tp);
        tp++;

        while(P--)
        {
            scanf("%d%d",&x,&y);

            cnt=0;
            r=0;
            g=0;
            b=0;

            for(i=0;i<sqr_no;i++)
            {
                check=inSquare(x,y,sqr[i].x1,sqr[i].y1,sqr[i].x2,sqr[i].y2);

                if(check==2)
                {
                    printf("(0, 0, 0)\n");
                    goto abar;
                }
                else if(check==1)
                {
                    r+=sqr[i].r;
                    g+=sqr[i].g;
                    b+=sqr[i].b;
                    cnt++;
                }
            }

            for(i=0;i<cir_no;i++)
            {
                check=inCircle(x,y,cir[i].x,cir[i].y,cir[i].rad);

                if(check==2)
                {
                    printf("(0, 0, 0)\n");
                    goto abar;
                }
                else if(check==1)
                {
                    r+=cir[i].r;
                    g+=cir[i].g;
                    b+=cir[i].b;
                    cnt++;
                }
            }

            if(cnt==0)
                printf("(255, 255, 255)\n");
            else
            {
                rp=(r/cnt);
                if(2*(r%cnt)>=cnt)
                    rp++;

                gp=(g/cnt);
                if(2*(g%cnt)>=cnt)
                    gp++;

                bp=(b/cnt);
                if(2*(b%cnt)>=cnt)
                    bp++;

                printf("(%d, %d, %d)\n",rp,gp,bp);
            }


            abar:
            ;

        }
    }


    return 0;

}


int inSquare(int a,int b,int x1,int y1, int x2,int y2)
{
    //0 for outside the square
    //1 for inside the square
    //2 for on the square

    if( (x1<=a && a<=x2) && (y1<=b && b<=y2) )
    {
        if(a==x1 || a==x2 || b==y1 || b==y2)
            return 2;
        else
            return 1;
    }

    return 0;
}


int inCircle(int a,int b,int x,int y, int r)
{
    //0 for outside the circle
    //1 for inside the circle
    //2 for on the circle

    int distance = (x-a)*(x-a) + (y-b)*(y-b);
    int rad2=r*r;

    if(distance==rad2)
        return 2;
    else if(distance<rad2)
        return 1;
    else
        return 0;
}
