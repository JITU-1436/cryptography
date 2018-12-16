#include<stdio.h>
int main()
{
        int i,j,k,n1,n2,sum1= 0,sum2=0,sum3=0,sum4=0,sum5=0;
        printf("enter the number of terms in 1st polynomial\n");
        scanf("%d",&n1);
        printf("enter the number of terms in 2nd polynomial\n");
        scanf("%d",&n2);
        int a[n1],b[n2],sum[n1+n2];
        printf("enter the coefficient of 1st polynomial\n");
        for(i = 0;i<n1;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("enter the coefficient of 1st polynomial\n");
        for(i =0;i<n2;i++)
        {
                scanf("%d",&b[i]);
        }

        for(i=0;i<n1;i++)
        {
                for(j =i;j<n2;j++)      
                {
			if(i==j)
			{
				sum[i+j]= a[i]*b[j];
			}
			else
			{
				sum[i+j] = a[i]*b[j] + a[j]*b[i];
			}
			if(i+j==0)
			{
				sum1 = sum[0];
			}
			if(i+j==1)
			{
				sum2 = sum2 +sum[i+j];
			}
			if(i+j==2)
			{
				sum3 = sum3 +sum[i+j];
			}
			if(i+j==3)
			{
				sum4 = sum4 +sum[i+j];
			}
			if(i+j==4)
			{
				sum5 = sum5 +sum[i+j];
			}
			
		}

        }
	printf("sum1 =%d,sum2=%d,sum3=%d,sum4=%d,sum5=%d\n",sum1,sum2,sum3,sum4,sum5);

}
