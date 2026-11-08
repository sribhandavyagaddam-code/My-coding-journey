#include<stdio.h>
int main()
{
	ont m1,m2,m3,m4,m5,t;
	float p;
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	t=m1+m2+m3+m4+m5;
	p=(t/500.0)*100;
	printf("Total Marks = %d\n",t);
	printf("Percentage = %0.2f\n",p);
	return 0;
}
