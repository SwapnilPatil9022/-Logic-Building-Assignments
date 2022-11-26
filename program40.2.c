//write appliction which accept file name from user and open that file in read mode.

//Input : Demo.txt

//Output : File created succesfully.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20]; 
	char Data[100];
	
	int fd = 0;		//File descriptor
	
	printf("Enter file name to create\n");
	scanf("%s",Fname);
	
	printf("Enter the data that you want to write\n");
	scanf(" %[^'\n']s",Data);
	
	fd = creat(Fname,0777);
	if(fd == -1)
	{
		printf("Unable to creat file\n");
		return -1;				//Fallure
	}
	
	printf("File is succesfully creat with fd %d\n",fd);
	
	write(fd,Data,strlen(Data));
	
	close(fd);
	
	return 0;
}