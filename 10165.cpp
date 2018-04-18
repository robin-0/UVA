/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005


int main()
{
	int n,p,xorr,i;

	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}

		else
		{
			scanf("%d",&p);
			xorr=p;

			for(i=1;i<n;i++)
			{
				scanf("%d",&p);
				xorr=xorr^p;

			}

			if(xorr==0)
			{
				printf("No\n");
			}

			else
			{
				printf("Yes\n");
			}

		}
	}

    return 0;

}
