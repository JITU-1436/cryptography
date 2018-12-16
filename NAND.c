#include"jitendra.h"
#include"prototype.h"
int NAND()
{
	printf("IN %s\n",__func__);
	printf("two valid number\n");
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(a>=2 || b>=2)
	{
		printf("one of two number is invalid\n");
	}
	else if(a==1&&b==1)
	{
		c = 0;
		printf("c = %d\n",c);
	}
	else
	{
		c = 1;
		printf("Output =%d\n",c);
	}
	return 0;
}
