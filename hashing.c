#include<stdio.h>
int linear_probing();
int quad_prob();
int double_hash();
int main()
{
        int choice,i =1;;

        while(i)
        {
                printf("1.implement linear probing\n");
                printf("2.implement quadratic probing\n");
                printf("3.implement double hashing\n");
                printf("4. Exit press four");
                scanf("%d",&choice);
               
        	switch(choice)
        	{
        	        case 1:
        	                 linear_probing();
				 break;
        	        case 2:
        	                 quad_prob();
				 break;
        	        case 3:
        	                 double_hash();
				 break;
			case 4:
				 i = 0;
				 break;
			default:
				 printf("enter correct choice\n");
	
	        }
	}
}

