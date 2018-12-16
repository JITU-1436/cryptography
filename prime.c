#include<stdio.h>
int gcd(int , int,int [],int);
int *bsort(int [], int);
int j =0;
int main()
{
	int i,j,k,*a,c;
	int n;
	printf("enter the number of elemts\n");
	scanf("%d",&n);
	printf("enter the aray \n");
	for(i = 0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	a = bsort(a,n);
	c = gcd(a[0],a[1],a,n);
	printf("c =%d",c);
}
int gcd(int c, int b,int a[],int n)
{
	int r;
	//printf("c =%d,n=%d",c,n);
	if(n ==2)
		return c;
	if(b!=0)
	{
        	r = c%b;
                gcd(b,r,a,n);
        }
        else if(n!=2)
        {
		j = j+1;
        	gcd(c,a[j+2],a,n-1);
        }

}

int* bsort(int a[],int n)
{
	int i,j,temp;
	for(i =0;i<n;i++)
        {
                for(j=0;j<n-1;j++)
                {
                        if (a[j]> a[j+1])
                        {
                                temp = a[j];
                                a[j] = a[j+1];
                                a[j+1] =temp;
                        }
                }
        }

	return a;

}
