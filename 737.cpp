/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

struct cube
{
    int xl,xh,yl,yh,zl,zh,a;
}box[2005];

int main()
{
    int n,xmin,xmax,ymin,ymax,zmin,zmax,i,V;


    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;

        scanf("%d%d%d%d",&box[0].xl,&box[0].yl,&box[0].zl,&box[0].a);
        box[0].xh=box[0].xl+box[0].a;
        box[0].yh=box[0].yl+box[0].a;
        box[0].zh=box[0].zl+box[0].a;

        xmin=box[0].xl;
        xmax=box[0].xh;
        ymin=box[0].yl;
        ymax=box[0].yh;
        zmin=box[0].zl;
        zmax=box[0].zh;

        for(i=1;i<n;i++)
        {
            scanf("%d%d%d%d",&box[i].xl,&box[i].yl,&box[i].zl,&box[i].a);
            box[i].xh=box[i].xl+box[i].a;
            box[i].yh=box[i].yl+box[i].a;
            box[i].zh=box[i].zl+box[i].a;

            if(box[i].xl>xmin)
                xmin=box[i].xl;
            if(box[i].xh<xmax)
                xmax=box[i].xh;
            if(box[i].yl>ymin)
                ymin=box[i].yl;
            if(box[i].yh<ymax)
                ymax=box[i].yh;
            if(box[i].zl>zmin)
                zmin=box[i].zl;
            if(box[i].zh<zmax)
                zmax=box[i].zh;
        }

        //printf("%d\n%d\n%d\n%d\n%d\n%d\n",xmin,xmax,ymin,ymax,zmin,zmax);

        if(xmin>=xmax)
            xmax=xmin;
        if(ymin>=ymax)
            ymax=ymin;
        if(zmin>=zmax)
            zmax=zmin;

        printf("%d\n",(xmax-xmin)*(ymax-ymin)*(zmax-zmin));
    }



    return 0;

}
