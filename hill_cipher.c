#include"jitendra.h"
#include"prototype.h"
int hill_cipher()
{
	printf("In %s\n",__func__);
	int i=0,a,b,d,j,sum =0;
	int c[20][30],p[20][30],k[20][20],row1,row2,col1,col2,row3,col3;
	printf("enter the first row and column\n");
	scanf("%d %d",&row1,&col1);
	printf("enter the plain text integer value\n");
	for(i = 0;i<row1;i++)
	{
		for(j = 0;j<col1;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	printf("enter the key row and column\n");
	scanf("%d %d",&row2,&col2);
	if(col1!=row2)
	{
		printf("conversion is not possible\n");
	}	
	printf("enter the key integer value\n");
	for(i = 0;i<row2;i++)
	{
		for(j = 0;j<col2;j++)
		{
			scanf("%d",&k[i][j]);
		}
	}
	for(i = 0;i<row1;i++)
	{
		for(j = 0;j<col1;j++)
		{
			for(d=0;d<col1;d++)
			{
				sum = sum + p[i][d] *k[d][j];
			}
			c[i][j] = sum%26;
			sum =0;			
		}
	}
	printf("cipher text integer value is\n");
	for(i = 0;i<row1;i++)
	{
		for(j = 0;j<col2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}


}
