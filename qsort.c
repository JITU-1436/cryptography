#include"jitendra.h"
#include"prototype.h"
int q_sort()
{
	int i,a[100],n;
	printf("enter the number of aray\n");
	scanf("%d",&n);
	int low = 0,high = n-1;
	printf("ente the aray\n");
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qs( a,low,high);
	printf(" aray is\n");
	for(i = 0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
int qs(int a[100],int low,int high)
{
	int pi;
	if(low<high)
	{
		pi = partition(a,low,high);	
		qs(a,low,pi-1);
		qs(a,pi+1,high);
	}
}

int partition(int a[100],int low,int high)
{
	int x,i,temp;
	x = a[low];
	i = low;
		//printf("%d",a[0]);
	for(int j = low+1;j<=high;j++)
	{
		if(x >= a[j])
		{
			i = i+1;
			temp = a[i];
			a[i]  = a[j];
			a[j] = temp;
		}
	}
	temp = a[i];
	a[i]  = a[low];
	a[low] = temp;
//	printf("i = %d",i);
	return i;


}
