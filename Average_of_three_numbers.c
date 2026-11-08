#include<stdio.h>
int main()
{
	long long a,b,c;
	if(scanf("%d %d %d",&a,&b,&c))
	{
		long long average=(a+b+c)/3;
		printf("%lld\n",average);
	}
	return 0;
}
