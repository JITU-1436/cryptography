#include<stdio.h>
int bin3(int ,int);
int count = 0;
int main()
{
	int v,n,k;
	printf("Enter teh value of n and k\n");
	scanf("%d %d",&n,&k);
	v = bin3(n,k);
	printf("bin coefficient value =%d\n,number of comparison=%d\n",v,count);
	return 0;
}
int bin3(int n ,int k)
{
	int c,i,j,m;
	{
		if(k == 0||k ==n)
		{
			c = 1;
			return c;
		}
		else
		{
			return bin3(n-1,k-1) + bin3(n-1,k);
			count = count+1;
		}
	}
}


