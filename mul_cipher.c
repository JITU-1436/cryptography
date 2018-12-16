#include"jitendra.h"
#include"prototype.h"
int mul_cipher()
{
	 printf("In %s\n",__func__);
	 int i=0,j = 0,a,k,b,key,count;
	 char c[1000];

	  char p[ ] = "hello this is crypto class";
	 printf("key domain is always greater than number\n");
	 printf("enter the key \n");
	 scanf("%d",&key);
	 
	 while(p[i])
	 {
		 if(p[i]!= 32)
	 		c[i] = ((((p[i]-97) * key) % 26)+97);
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
	 for(i = 0;i<k;i++)
	 {
	 	 b = (a*i)%k;
		 if(b == 1)
			 break;
	 }
	if(i<26)
		printf("Multiplicative Inverse =%d\n",i);
	else
		printf("multiplicative inverse doent exist\n");



}
