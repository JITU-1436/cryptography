#include<stdio.h>
int knapsack(int obj, int capacity);
int obj,capacity,profit[100],weight[100];
int main()
{
	printf("enter the number of obj and capacity\n");
	scanf("%d %d",&obj,&capacity);
	int i,m_profit;
	printf("enter the profit and weight\n");
	for(i = 0;i<obj;i++)
	{
		scanf("%d %d",&profit[i],&weight[i]);
	}
	m_profit = knapsack(obj,capacity);
	printf("max_profit =%d",m_profit);
}

int knapsack(int obj,int capacity)
{
	int a,b;
	if(capacity==0 || obj==0)
	{
		return 0;
	}
	else if(weight[obj-1]>capacity)
	{
		return knapsack(obj-1,capacity);
	}
	else
	{
		a = knapsack(obj-1,capacity-weight[obj-1]) + profit[obj-1];
		b = knapsack(obj-1,capacity);
		if(a>b)
			return a;
		else
			return b;

	}
}
