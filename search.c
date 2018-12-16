#include"jitendra.h"
#include"prototype.h"
int search()
{
	printf("In %s\n",__func__);
	int i=1,j,k,a,b,c,choice;
//	while(i)
//	{
		printf("enter the choice what u want to do?\n");
		printf("1 . Implement recursive Binary\n");
		printf("2 . To Implememt Iterative Binary Search\n");
		printf("3 . Implement Linear search?\n");
		printf("5 . To Implement Merge Sort?\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				rbs();
				break;
			case 2:
				ibs();
				break;
			case 3:
				ls();
				break;
		}

//	}
}
