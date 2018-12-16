#include"jitendra.h"
#include"prototype.h"
int vigenere_cipher()
{
	 printf("In %s\n",__func__);
	 int i=0,j,k=0,a,b,key[100],count;
	 char c[100],p[ ] = "hello this is plain text";
	 printf("key domain is always greater than number\n");
	 printf("enter the number of key \n");
	 scanf("%d",&k);
	 printf("enter the all key \n");
	 for(j = 0;j<k;j++)
	 {
	 	scanf("%d",&key[j]);
	 }
	 
	 while(p[i])
	 {
	 	if(p[i] != 32)
		{
			c[i] = ((((p[i]-97) + key[k]) % 26)+97);
			k++;
		}
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
