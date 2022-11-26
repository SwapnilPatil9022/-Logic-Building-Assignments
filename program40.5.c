//write appliction which accept file name from user and ont string from user, write that string at the end of the file.

//Input : Demo.txt
		//	Hello World

//Output : Write Hello world at the end of Demo.txt file.

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
	int iRet = 0;
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR | O_APPEND);					//new
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;				//Fallure
	}
	
	printf("File is succesfully open with fd %d\n",fd);
	
	printf("Enter the data that you want to write : \n");
	scanf(" %[^'\n']s",Data);
	
	iRet = write(fd,Data,strlen(Data));
	printf("%d bytes get succesfully written in the file\n",iRet);
	
	close(fd);
	
	return 0;
}
