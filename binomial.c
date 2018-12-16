#include<stdio.h>
int bin(int ,int);
int min(int,int);
int count = 0;
int main()
{
	int v,n,k;
	printf("Enter teh value of n and k\n");
	scanf("%d %d",&n,&k);
	v = bin(n,k);
	printf("bin coefficient value =%d\n,number of comparison=%d\n",v,count);
	return 0;
}
int bin(int n ,int k)
{
	int c[100][100],i,j,m;
	for(i = 0;i<=n;i++)
	{
		m = min(i,k);
		for(j = 0;j<=m;j++)
		{
			if(j == 0||j ==i)
			{
				c[i][j] = 1;
				count = count+1;
			}
			else
			{
				c[i][j] = c[i-1][j-1] + c[i-1][j];
				count = count+1;
			}
		}
	}
	return c[n][k];

}
int min(int i,int k)
{
	if(i>k)
	{
		count = count +1;
		return k;
	}
	else
	{
		count = count+1;
		return i;
	}
}
