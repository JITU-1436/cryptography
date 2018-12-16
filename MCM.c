#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	printf("enter the number of matrix\n");
	scanf("%d",&n);
	int i,j,size1[100],m[n][n],l,q,k;
	for(i =0;i<=n;i++)
	{
		printf("enter the %d matrix size\n",i);
		scanf("%d",&size1[i]);
	}
	for(i = 0;i<n;i++)
	{
		m[i][i] = 0;
	}
	for (l=2; l<n; L++) 
    	{ 
        	for (i=1; i<n-L+1; i++) 
        	{ 
            		j = i+l-1; 
           		m[i][j] = INT_MAX; 
            		for (k=i; k<=j-1; k++) 
            		{ 
                	// q = cost/scalar multiplications 
                		q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]; 
                		if (q < m[i][j]) 
                	    	m[i][j] = q; 
            		} 
        	}
	} 
	
	printf("qi_final = %d\n",m[i][j:]);
}
