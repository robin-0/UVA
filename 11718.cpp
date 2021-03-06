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

long long int big_mod(long long int base,long long int power, long long int mod);

int main()
{
	long long int sum,n,k,mod,T,inp,ans,i,tp=1;

	scanf("%lld",&T);

	while(T--)
	{
		scanf("%lld%lld%lld",&n,&k,&mod);
		ans=0;
		sum=0;

		for(i=0;i<n;i++)
		{
			scanf("%lld",&inp);
			sum+=inp;
		}
		ans=sum%mod;
		ans=((ans)*(k%mod))%mod;
		ans=((ans)*(big_mod(n,k-1,mod)))%mod;

		printf("Case %lld: %lld\n",tp,ans);
		tp++;



	}



    return 0;

}



long long int big_mod(long long int base,long long int power, long long int mod)
{
	long long int temp;

	if(power==1)
		return (base);

	else if(power==0)
		return 1;

	else if(power%2==0)
	{
		temp=big_mod(base,power/2,mod);
		return (temp*temp)%mod;
	}

	else
	{
		temp=big_mod(base,power/2,mod);
		return (temp*temp*base)%mod;
	}
}
