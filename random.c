#include"jitendra.h"
#include"prototype.h"
int randum()
{
	int i,j,k=0,a,b,n,m,arr[100];
	printf("enter the number, how many random number u want to genrate\n");
	scanf("%d",&n);
	printf("enetr two constant number\n");
	scanf("%d %d",&a,&b);
	printf("enter the max number of rndom number\n");
	scanf("%d",&m);
	for(i =0;i<n;i++)
	{
		k =( a*k +b) % m;
		arr[i] = k;
	}
	printf("random number is\n");
	for(i = 0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}


}
