#include"jitendra.h"
#include"prototype.h"
int cipher()
{
	printf("In %s\n",__func__);
	int i=1,j,k,a,b,c,choice;
//	while(i)
//	{
		printf("enter the choice what u want to do?\n");
		printf("1 . Implement  Additive cipher?\n");
		printf("2 . Multiplicative cipher\n");
		printf("3 . Affine Cipher?\n");
		printf("4 . Autokey Cipher?\n");
		printf("5 . vigenere cipher?\n");
		printf("6 . Hill cipher?\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				add_cipher();
				break;
			case 2:
				mul_cipher();
				break;
			case 3:
				affine_cipher();
				break;
			case 4:
				auto_cipher();
				break;
			case 5:
				vigenere_cipher();
				break;
			case 6:
				hill_cipher();
				break;
		}

//	}
}
