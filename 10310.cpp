/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005




int main()
{
    int n,found,i;
    double x_gof,y_gof,x_dog,y_dog,x[MAX],y[MAX],t_dog,t_gof;

    while(scanf("%d",&n)!=EOF)
    {
        scanf("%lf%lf%lf%lf",&x_gof,&y_gof,&x_dog,&y_dog);

        for(i=0;i<n;i++)
        {
            scanf("%lf%lf",&x[i],&y[i]);
        }

        found=-1;
        for(i=0;i<n;i++)
        {
            t_dog = sqrt( (x[i]-x_dog)*(x[i]-x_dog) + (y[i]-y_dog)*(y[i]-y_dog) ) / 2.00;
            t_gof = sqrt( (x[i]-x_gof)*(x[i]-x_gof) + (y[i]-y_gof)*(y[i]-y_gof) ) ;

            if(t_dog>=t_gof)
            {
                found=i;
                break;
            }
        }

        if(found==-1)
        {
            printf("The gopher cannot escape.\n");
        }
        else
        {
            printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",x[found],y[found]);
        }
    }

    return 0;
}

