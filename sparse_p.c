#include<stdio.h>
struct my_file
{
	int base;
	int exp;
};
int main()
{
	int n1,n2;
	printf("enter the number of terms of 1st poly\n");
	scanf("%d",&n1);
	printf("enter the number of terms of 2nd poly\n");
	scanf("%d",&n2);
	struct	my_file poly1[n1],poly2[n2],result[n1*n2];
	int i;
	printf("enter the terms of 1st poly\n");
	for(i =0;i<n1;i++)
	{
		scanf("%d",&poly1[i].base);
		scanf("%d",&poly1[i].exp);
	}
	printf("enter the terms of 2nd poly\n");
	for(i =0;i<n2;i++)
	{
		scanf("%d",&poly2[i].base);
		scanf("%d",&poly2[i].exp);
	}
	int j,k=0;
	for(i =0;i<n1;i++)
	{
		for(j = 0;j<n2;j++)
		{
			result[i+j].base = 0;
			result[i+j].exp = 0;
		}
	}
	for(i =0;i<n1;i++)
	{
		for(j = 0;j<n2;j++)
		{
			result[k].base = poly1[i].base * poly2[j].base;
			result[k].exp = poly1[i].exp + poly2[j].exp;
			k = k+1;
		}
	}
	for(i =0;i<k;i++)
	{
			printf("%d\t",result[i].base);
			printf("%d\t",result[i].exp);
	}
	
	for(i =0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(result[i].exp == result[j].exp)
			{
				result[i].base = result[i].base +result[j].base;
				result[j].exp = 0;result[j].base=0;
			}
	
		}
	}
	for(i =0;i<k;i++)
	{
		if(result[i].exp!=0 || result[i].base!=0)
		{
			printf("%dx^%d + ",result[i].base,result[i].exp);
		}
	}


}
