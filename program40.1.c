//write appliction which accept file name from user and open that file in read mode.

//Input : Demo.txt

//Output : File opened succesfully.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	int  fd = 0;			//File Discrpter
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;		//Failuer
	}
	
	printf("File is succesfully opened with Fd %d\n",fd);
	
	close(fd);
	
	return 0;
}
