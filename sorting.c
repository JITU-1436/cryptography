#include"jitendra.h"
#include"prototype.h"
int sorting()
{
	printf("In %s\n",__func__);
	int i=1,j,k,a,b,c,choice;
//	while(i)
//	{
		printf("enter the choice what u want to do?\n");
		printf("1 . Implement Bubble Sort\n");
		printf("2 . To Implememt Seclection Sort\n");
		printf("3 . Implememnt Insertion Sort?\n");
		printf("4 . Quick Sort?\n");
		printf("5 . To Implement Merge Sort?\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				bsort();
				break;
			case 2:
				ssort();
				break;
			case 3:
				isort();
				break;
			case 4:
				q_sort();
				break;
			case 5:
				msort();
				break;
		}

//	}
}
