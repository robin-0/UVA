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

struct Point
{
    int x;
    int y;
    double x1;
    double y1;
};

struct StraightLine
{
    double a;
    double b;
    double c;
};

struct Point assignPoints (int x , int y);
struct StraightLine formLineFromPoints (struct Point P1 , struct Point P2);
int doubleAreaPolygon (struct Point P1 , struct Point P2 , struct Point P3);
int areParallel(struct Point P1 , struct Point P2 , struct Point P3 , struct Point P4);
struct Point pointOfIntersection(struct Point P1 , struct Point P2 , struct Point P3 , struct Point P4);


struct Point assignPoints (int x , int y)
{
    struct Point temp;

    temp.x=x;
    temp.y=y;
    temp.x1=(double)x;
    temp.y1=(double)y;

    return temp;
}

struct StraightLine formLineFromPoints (struct Point P1 , struct Point P2)
{
    struct StraightLine temp;

    if(P1.x==P2.x)
    {
        temp.a = 1.0;
        temp.b = 0.0;
        temp.c = P1.x1;
    }

    else if(P1.y==P2.y)
    {
        temp.a = 0.0;
        temp.b = 1.0;
        temp.c = P1.y1;
    }

    else
    {
        temp.a = (1.0/(P1.x1 - P2.x1));
        temp.b = (1.0/(P2.y1 - P1.y1));
        temp.c = (P1.x1/(P1.x1-P2.x1)) - (P1.y1/(P1.y1-P2.y1));
    }

    return temp;
}

int doubleAreaPolygon (struct Point P1 , struct Point P2 , struct Point P3)
{
    return (P1.x*P2.y + P2.x*P3.y + P3.x*P1.y) - (P1.y*P2.x + P2.y*P3.x + P3.y*P1.x);
}

int areParallel(struct Point P1 , struct Point P2 , struct Point P3 , struct Point P4)
{
    if(  (P1.x-P2.x)*(P3.y-P4.y) == (P1.y-P2.y)*(P3.x-P4.x)  )
        return 1;
    else
        return 0;
}

struct Point pointOfIntersection(struct Point P1 , struct Point P2 , struct Point P3 , struct Point P4)
{
    struct StraightLine L1,L2;
    double delta,deltaX,deltaY;
    struct Point temp;

    L1=formLineFromPoints(P1,P2);
    L2=formLineFromPoints(P3,P4);

    delta  = L1.a*L2.b - L1.b*L2.a;
    deltaX = L1.c*L2.b - L1.b*L2.c;
    deltaY = L1.a*L2.c - L1.c*L2.a;

    temp.x1=deltaX/delta;
    temp.y1=deltaY/delta;

    return temp;
}


int main ()
{
    int T;
    struct Point P1,P2,P3,P4;

    //OUTPUT

    scanf("%d",&T);

    printf("INTERSECTING LINES OUTPUT\n");

    while(T--)
    {
        int x,y;

        scanf("%d%d",&x,&y);
        P1=assignPoints(x,y);

        scanf("%d%d",&x,&y);
        P2=assignPoints(x,y);

        scanf("%d%d",&x,&y);
        P3=assignPoints(x,y);

        scanf("%d%d",&x,&y);
        P4=assignPoints(x,y);

        if( (doubleAreaPolygon(P1,P2,P4)==0) && (doubleAreaPolygon(P1,P2,P3)==0))
            printf("LINE\n");
        else if(areParallel(P1,P2,P3,P4)==1)
            printf("NONE\n");
        else
        {
            struct Point P=pointOfIntersection(P1,P2,P3,P4);

            if(fabs(P.x1)<EPS)
                P.x1=0.0;
            if(fabs(P.y1)<EPS)
                P.y1=0.0;

            printf("POINT %.2lf %.2lf\n",P.x1,P.y1);
        }

    }

    printf("END OF OUTPUT\n");


    return 0;

}
