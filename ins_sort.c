#include<stdio.h>
int main()
{
	int i,j,k,a[100],temp,n;
	printf("enter the number of aray\n");
	scanf("%d",&n);
	printf("enter the aray\n");
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0;i<n;i++)
	{
		for(j = 1;j<n;j++)
		{
			if(a[j] < a[j-1])
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	for(i = 0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
