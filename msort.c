#include"jitendra.h"
#include"prototype.h"
int msort()
{
	printf("In  %s\n",__func__);
	int i,a[100],n;
	printf("enter the number of aray\n");
	scanf("%d",&n);
	int low = 0,high = n-1;
	printf("ente the aray\n");
        for(i = 0;i<n;i++)
	{
		 scanf("%d",&a[i]);
	}
//	ms(a,low,high,n);
	
}
/*
int ms(int a[],int low,int high)
{

	int n1,temp,mid;
	if(low == high)
		return a[low];
	else if(low < high && n==2)
	{
		if(a[low] >a[high])
		{
			temp = a[low];
			a[low] = a[high];
			a[high] =temp;
		}
	}
	else if(low<high)
	{
		mid = (low +high)/2;
		n1 = (low+mid)/2;
		ms(a,low,mid);
		ms(a,mid+1,high);
		merge(a,low,mid,high)
	}
}
int msort(int a[], int low,int mid,int high)
{
	int i,j,k,n1,n2;
	n1 = m-l+1;
	n2 = high-mid;
	int b[n1],c[n2];
	for (i = 0; i < n1; i++)
		b[i] = a[l + i];
	for (j = 0; j < n2; j++)
		c[j] = a[m + 1+ j];

	while()
}*/
