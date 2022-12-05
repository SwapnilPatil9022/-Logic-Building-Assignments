#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
			
void FileLength(char Fname[])
{
	char Data[10];		//Mug
	int fd = 0;		//File descriptor
	int iRet = 0;
	int iSum = 0;
	
	fd = open(Fname,O_RDWR);					
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;				//Fallure
	}
	printf("File is succesfully open with fd %d\n",fd);
	
	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
		iSum = iSum + iRet;
	}
	close(fd);
	return iSum;
}

int main()
{
	char Fname[20];
	int iRet = 0;
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	iRet = FileLength(Fname);
	printf("File length is : %d\n",iRet);
	
	return 0;
}
