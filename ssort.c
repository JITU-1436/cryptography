#include"jitendra.h"
#include"prototype.h"
int ssort()
{
	printf("In  %s\n",__func__);
	int i,a[100],n,min,temp,j;
	printf("enter the number of aray\n");
	scanf("%d",&n);
	printf("enter the  aray\n");
	int low = 0,high = n-1;
        for(i = 0;i<n;i++)
	{
		 scanf("%d",&a[i]);
	}
	min = a[0];
	for(i = 0;i<n;i++)
	{
		for(j = i+1;j<n-1;j++)
		{
			if(a[min] > a[j])
			{
			
				temp = a[j];
				a[j+1] = a[min];
				a[j +1] = temp;	
			}
		}

	}
	printf("sorted aray\n");
        for(i = 0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
