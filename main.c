#include"jitendra.h"
#include"prototype.h"
int main()
{
	printf("In %s\n",__func__);
	int i=1,j,k,a,b,c,choice;
	while(i)
	{
		printf("\nenter the choice what u want to do?\n");
		printf("1 for ECULIDIAN THEOREM find gcd\n");
		printf("2. To Check Corealative prime\n");
		printf("3. To Implement Cipher Algorithm\n");
		printf("4. To Implement congruent modulo random generator\n");
		printf("5. To Implement Sorting Technique\n");
		printf("6. To Implement Searching Technique\n");
		printf("7. To Implement Logic gates\n");
		printf("8. For EXIT Succesfully\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:  
				 printf("enter the two number to find gcd\n");
				 scanf("%d %d",&a,&b);

				 c = gcd(a,b);
				 printf("gcd =%d\n",c);
				 break;
			case 2:
				 printf("enter the two number to check relatively prime\n");
				 scanf("%d %d",&a,&b);
				 c =  gcd(a,b);
				 if(c==1)
					 printf("it is relatively prime\n");
				 else
					 printf("it is not relatively prime\n");
			      	 break;
			case 3:
				 cipher();
				 break;
			case 4:
				 randum();
				 break;
			case 5:
				 sorting();
				 break;
			case 6:
				 search();
				 break;
			case 7:
				 gate();				 
				 break;
			case 8:
				 i=0;
				 break;
			default:
				 printf("enter correct choice\n");

		}
	}

}

