#include<stdio.h>
int main()
{
	int i,mid,j,k=0,n,a[100],c[100],temp;
	printf("enter The number of aray\n ");
	scanf("%d",&n);
	int b[2*n+1];
	for(i  =0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mid =(2*n+1)/2;
	b[mid] = a[0];
	for(i = 1;i<n;i++)
	{
		if(a[i] < b[mid])
		{
			for(j =mid + 1;j<(2*n+1);j++)
			{
				 if(a[j] < a[j-1])
				 {
					temp = a[j];
					a[j] = a[j-1];
					a[j-1] = temp;
					c[k] = b[j-1] = a[j-1];		
					k++;
				 }
			}
		}
		else
		{
			for(j = 1;j<mid;j++)
			{
				 if(a[j] < a[j-1])
				 {
					temp = a[j];
					a[j] = a[j-1];
					a[j-1] = temp;
					c[k] = b[j-1] = a[j-1];
					k++;		
				 }
			}
		}
	}
	for(i = 0;i<n;i++)
	{
		printf("%d\t",c[i]);
	}
	

}
