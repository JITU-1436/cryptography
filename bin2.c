#include<stdio.h>
int bin2(int ,int);
int factorial(int);
int count = 0;
int main()
{
	int v,n,k;
	printf("Enter teh value of n and k\n");
	scanf("%d %d",&n,&k);
	v = bin2(n,k);
	printf("bin coefficient value =%d\n,number of comparison =%d\n",v,count);
	return 0;
}
int bin2(int n ,int k)
{
	int c[100][100],i,j,m;
	i = factorial(n);
	j = factorial(k);
	m = factorial(n-k);
	i  = i/(j*m);
	return i;

}
int factorial(int n)
{
	int fact = 1;
	int i;
	for(i = n;i>0;i--)
	{
		fact = fact*i;
		count = count +1;
	}
	return fact;

}
