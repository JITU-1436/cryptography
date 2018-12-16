#include<stdio.h>
int love_orange();
int main()
{
	love_orange();

}
int love_orange()
{
	int a[100],i,j,k,n,sum=0;
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i = 0;i<n;i++)
	{
		sum = sum + a[i];
		if(sum>=k)
		break;
	}
	printf("%d",i);
}
