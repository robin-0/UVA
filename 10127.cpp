/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */
 
 
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main(void) {
	
	int num,ten_mod,digit,a,b;

	while(scanf("%d",&num)!=EOF)
	{
		ten_mod=10%num;
		digit=1;
		
		if(num>1)
			a=1;
		else
			a=0;
		while(1)
		{
			if(a==0)
				break;
			
			a*=ten_mod;
			
			if(a>=num)
				a%=num;
			
			a++;
			
			if(a>=num)
				a%=num;
			
			digit++;
		}
		
		printf("%d\n",digit);
		
	}
	
	return 0;
}
