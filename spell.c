#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main()
{
	int fd,buff,ret;
	fd = open("file",O_RDONLY||O_CREAT);
	if(fd ==-1)
	{
		printf("Somrthing Wrong");
	}
	while(buff!='\0')
	{
		ret = read(fd,&buff,1);
		printf("read %d bytes",ret);
		if(ret==32)
		printf("%d",buff);

	}
}
