//Program to print 5 to 1 numbers on screen

#include<stdio.h>

void Display()
{
	int i = 0;
	int j = 5;
	
	for(i=0 ;i=j ;i++)
	{
		printf("%d",j);
		j--;
	}
}

int main()
{
	Display();
	
	return 0;
}