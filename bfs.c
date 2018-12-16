#include<stdio.h>
int v,c[100][100],i,count=0;
int find_adj(int);
int print(int);
int main()
{
	int j;
	printf("enter the number of vertices\n");
	scanf("%d",&v);
	for(i = 1;i<=v;i++)
	{
		for(j = 1;j<=v;j++)
		{
			c[i][j] = 0;
		}
	}
	int e =1;
	while(e)
	{
		printf("enter the value of i and j\n");
		scanf("%d %d",&i,&j);
		printf("enter the cost between %d and %d\n",i,j);
		scanf("%d",&c[i][j]);
		c[j][i]= c[i][j];
		printf("add edges press 1-9 otherwise press 0\n");
		scanf("%d",&e);
	}
	/*for(i = 1;i<=v;i++)
	{
		for(j = 1;j<=v;j++)
		{
			printf("cost matric = %d\t",c[i][j]);
		}
		printf("\n");
	}*/
	i = 1;
	print(i);
	count++;
	while(i<v)
	{	
		j =i;
		printf("i= %d,cont=%d",i,count);
		i = find_adj(i);
		c[j][i] = 0;c[i][j] = 0;
		print(i);
		count++;
		if(count<v)
		{
			if(i == v)
				i = 1;
		}
		if(count==v)
			return 0;
	}

	return 0;
}
int find_adj(int n)
{
	int i,k;
	for(i = 2;i<=v;i++)
	{
		if(c[n][i] == 1)
		{
			if(n!=i)
			return i;
		}
		else
		{
			find_adj(n+1);
		}	
	}
}
int print(int n)
{
	printf("%d",n);
}
