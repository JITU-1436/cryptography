#include<stdio.h>
int main()
{
	int i,j,k,e[100],v,c[100][500];
	printf("enter the number of vertices\n");
	scanf("%d",&v);
	int max[v];
	for(i = 0;i<v-1;i++)
	{
		printf("enter the number edges for %d vertices\n",i);
		scanf("%d",&e[i]);
	}
	for(i = 0;i<v-1;i++)
	{
		for(j = 0;j<e[i];j++)
		{
			printf("enter the cost of %d edges of %d vertex\n",j,i);
			scanf("%d",&c[i][j]);
		}
	}
	j = 0;
	for(i = 0;i<v-1;i++)
	{
		max[i] = c[i][j];
		for(j = 0;j<e[i];j++)
		{
			if(max[i]>c[i][j])
			max[i] = c[i][j];	
		}
		j = 0;
	}
	int sum = 0;
	for(i = 0;i<v-1;i++)
	{
		sum = sum +max[i];
	}
	printf("shortest path =%d\n",sum);
}
