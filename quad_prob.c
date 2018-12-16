#include<stdio.h>
int quad_prob()
{
	int i,num,size,hash[100],r,count = 0;
	printf("enter the size of hash table\n");
	scanf("%d",&size);
	for(i = 0;i<size;i++)
	{
		hash[i] = 0;
	}
	i =1;
	int j =0;
	while(i)
	{
		printf("enter the number;\n");
		scanf("%d",&num);
		r = num%size;
		while(hash[(r+j*j)%size]!=0)
		{
			j = j+1;
			count = count+1;
		}
		hash[r+j*j] = num;
		printf("number of collision %d\n",count);
		count = 0;
		printf("for continue press 1\n");
		printf("for exit press zero\n");
		scanf("%d",&i);	
	}
}
