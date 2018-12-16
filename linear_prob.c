#include<stdio.h>
int linear_probing()
{
	int i,num,size,hash[100],r,count = 0;
	printf("enter the size of hash table\n");
	scanf("%d",&size);
	for(i = 0;i<size;i++)
	{
		hash[i] = 0;
	}
	i =1;
	while(i)
	{
		printf("enter the number;\n");
		scanf("%d",&num);
		r = num%size;
		while(hash[r]!=0)
		{
			r = r+1;
			 if(r>=size)
                                r = r%size;
			count = count+1;
		}
		hash[r] = num;
		printf("number of collision %d\n",count);
		count = 0;
		printf("for continue press 1\n");
		printf("for exit press zero\n");
		scanf("%d",&i);	
	}
}
