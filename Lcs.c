#include<stdio.h>
int lcs(int ,int,char*, char *);
int main()
{
	int s1,s2,a;
	printf("enter the size1 and size2\n");
	scanf("%d %d",&s1,&s2);
	char arr1[s1],arr2[s2];
	int b,i,j;
	printf("enter the 1st aray\n");
	for(i = 0;i<s1;i++)
	{
		scanf("%c",&arr1[i]);
	}
	printf("aray is \n");
	for(i = 0;i<s1;i++)
	{
		printf("%c",arr1[i]);
	}
	printf("enter the second aray\n");
	for(i = 0;i<s2;i++)
	{
		scanf("%c",&arr2[i]);
	}
	printf("aray is \n");
        for(i = 0;i<s1;i++)
	{
		printf("%c",arr2[i]);
	}

	a = lcs(s1,s2,arr1,arr2);
	printf("lcs =%d",a);
}
int lcs (int m,int n,char *arr1, char *arr2)
{
	int a,b;
	if(m==0 || n == 0)
		return 0;
	else if( arr1[m] = arr2[n])
		return 1 + lcs((m-1),(n-1),arr1,arr2);
	else
	{
		a = lcs(m-1,n,arr1,arr2);
		b = lcs(m,n-1,arr1,arr2);
		if(a>b)
			return a;
		else 
			return b;
	}
}
