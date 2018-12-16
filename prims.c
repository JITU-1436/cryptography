#include<stdio.h>
int main()
{
	int v,c[100][100],i,j,adj[100],l,k;
	int p[100][100];
	int mincost;
	printf("enter the number of vertices\n");
	scanf("%d",&v);
	for(i = 1;i<=v;i++)
	{
		for(j = 1;j<=v;j++)
		{
			c[i][j] = 1000000000;
		}
	}
	int min = c[1][1];
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
	for(i = 1;i<=v;i++)
	{
		for(j = 1;j<=v;j++)
		{
			printf("cost matric = %d\t",c[i][j]);
		}
		printf("\n");
	}
	
	for(i = 1;i<=v;i++)
	{
		for(j = 1;j<=v;j++)
		{
			if(min>c[i][j])
			{
				min = c[i][j];
				k = i;l = j;
			}
		}
	}
	mincost = min;
	printf("mincost = %d\n",mincost);
	for(i = 1;i<=v;i++)
	{
		if(c[i][l]<c[i][k])
			adj[i] = l;
		else
			adj[i] = k;
	}
	adj[l] = adj[k] = 0;
	int b;
	for(i =2;i<=v-1;i++)
	{
		min = 10000;
		for(j =1;j<=v;j++)
		{
			printf("value j = %d,adj[j]=%d, c[j][adj[j]] =%d\n",j,adj[j],c[j][adj[j]]);
			if(min>c[j][adj[j]])
			{
				if(adj[j]!=0)
				{
					min = c[j][adj[j]];
					printf("min =%d\n",min);
					b = j;
				}
			
			}
		}
		mincost = mincost + min;
		printf("mincost = %d\n",mincost);
		adj[b] = 0;
		for(k =1;k<=v;k++)
		{
			if(adj[k]!=0 && c[k][adj[k]]>c[k][b])
				adj[k] = b;
		}
	}
		printf("mincost = %d\n",mincost);
	return 0;
}
