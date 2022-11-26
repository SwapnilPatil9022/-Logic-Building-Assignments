//write appliction which accept file name from user and read all the data from that file and display contents in screen.

//Input : Demo.txt

//Output : File size is 20 bytes.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
																		
// Read : 4
// Write : 2
// Execute : 1

//Permission 	0_Owner_Group_Other	

int main()
{
	char Fname[20]; 
	char Data[100];
	
	int fd = 0;		//File descriptor
	int iRet = 0;
	
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
	
	iRet = write(fd,Data,strlen(Data));
	printf("%d bytes succefully written in the file",iRet);
	
	close(fd);
	
	return 0;
}