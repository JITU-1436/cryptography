#include"jitendra.h"
#include"prototype.h"
int bsort()
{
	printf("In  %s\n",__func__);
	int i,a[100],n,temp,j;
	printf("enter the number of aray\n");
	scanf("%d",&n);
	printf("ente the aray\n");
        for(i = 0;i<n;i++)
	{
		 scanf("%d",&a[i]);
	}
	for(i =0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if (a[j]> a[j+1])
			{
				temp = a[j];
			        a[j] = a[j+1];
				a[j+1] =temp;
			}
		}
	}
	printf("sortedaray\n");
        for(i = 0;i<n;i++)
	{
		 printf("%d",a[i]);
	}
	return 0;
}
