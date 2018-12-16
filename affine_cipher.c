#include"jitendra.h"
#include"prototype.h"
int affine_cipher()
{
	 printf("In %s\n",__func__);
	 int i=0,a,k,b,key,count,key1;
	 char c[1000],p[ ] = "hello this is crypto class";
	 printf("key domain is always greater than number\n");
	 scanf("%d",&key);
	 printf("enter the second key \n");
	 scanf("%d",&key1);
	 
	 while(p[i])
	 {
		 if(p[i] != 32)
	 		c[i] = (((((p[i]-97) * key) + key1) % 26)+97);
		 else
			 c[i] = p[i];
		count = i++;

	 }
	 printf("cipher text is: \n");
	 for(i = 0;i<count;i++)
	 {
	 	printf("%c",c[i]);
	 }
	 printf(" \n");



}
