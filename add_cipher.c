#include"jitendra.h"
#include"prototype.h"
int add_cipher()
{
	 printf("In %s\n",__func__);
	 int i=0,j,k,a,b,key,count;
	 char c[100],p[ ] = "hello this is plain text";
	 printf("key domain is always greater than number\n");
	 printf("enter the key \n");
	 scanf("%d",&key);
	 while(p[i])
	 {
	 	if(p[i] != 32)
			c[i] = ((((p[i]-97) + key) % 26)+97);
		else
			 c[i] = p[i];
		count = i++;
	 }
	 printf("cipher text is: \n");
	 for(i = 0;i<count;i++)
	 {
	 	 printf("%c",c[i]);
	 }
	 printf("\n enter the number which u find multiplicative inverse\n");
	 scanf("%d",&a);
	 a = k-a;
	 printf("\n additve inverse %d\n",a);

	 



}
