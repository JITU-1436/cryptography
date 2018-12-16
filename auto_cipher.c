#include"jitendra.h"
#include"prototype.h"
int auto_cipher()
{
	 printf("In %s\n",__func__);
	 int i=0,j,k,a,b,key[100],count;
	 char c[100],p[ ] = "hello this is plain text";
	 printf("key domain is always greater than number\n");
	 printf("enter the agrred key \n");
	 scanf("%d",&key[1]);
	 a = strlen(p);
	 for(j = 0;j<a;j++)
	 {
	 	if(p[j] != 32)
			key[j+2] = (p[j]-97);
	 }
	 
	 while(p[i])
	 {
	 	if(p[i] != 32)
			c[i] = ((((p[i]-97) + key[i+1]) % 26)+97);
		else
			 c[i] = p[i];
		count = i++;
	 }
	 printf("cipher text is: \n");
	 for(i = 0;i<count;i++)
	 {
	 	 printf("%c",c[i]);
	 }

}
