#include"jitendra.h"
#include"prototype.h"
int gate()
{
	printf("In %s\n",__func__);
	int i=1,j,k,a,b,c,choice;
//	while(i)
//	{
		printf("enter the choice what u want to do?\n");
		printf("1 . Implement OR gate ?\n");
		printf("2 . implement AND gate \n");
		printf("3 . Implement NAND gate?\n");
		printf("4 . Implement NOR gate?\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				OR();
				break;
			case 2:
				AND();
				break;
			case 3:
				OR();
				break;
			case 4:
				NOR();
				break;
		}

//	}
}
