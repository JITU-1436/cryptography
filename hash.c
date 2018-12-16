#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
struct my_file
{
        int data;
        struct my_file *next;
	struct my_file *link;
};
struct hash
{
	int data;
};
int main()
{
	struct my_file *node1,*node;
	struct hash file[200];
	int j;
	for(j = 0;j<200;j++)
	{
		file[j].data = 0;
		file[j].link = NULL;
	}
	int sum=0,loc;
	int fd,buff,count;
	int ekey,*hash;
	hash = (int*)malloc(sizeof(int)*200);
	fd = open("hello",O_RDONLY);
	if(fd ==-1)
	{
		printf("Something Wrong");
	}
	printf("fd =%d",fd);
	int i =1;
        ekey=open("new",O_WRONLY|O_CREAT);
        if(ekey==-1)
        {
        	printf("open in file error");
                return 0;
        }	
	while(i)
	{
		count =	read(fd,&buff,1);
		if(count == 0)
		{
			i =0;
		}
		else
		{
        		write(ekey,&buff,1);
		}
		if(buff != 'a'||'e'||'i'||'o'||'u')
		{
			sum  =sum + buff;
		}
		loc = sum%200;
		if(file[loc].data == 0)
		{
			node =(struct my_file*) malloc(sizeof(struct my_file));
			file[loc].link = node;
			node->next = NULL;
		}
		else
		{
			while(node->next!=NULL)
			{
				node = node->next;
			}
			node1 = (struct my_file*) malloc(sizeof(struct my_file));
                        node->next = node1;
                        node1->next = NULL;

		}

	}


}
