//write a program which display ASCII table. Table contains symbol, Desimal, Hexadesimal and octal representation of every mumber from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
	int i;
	
	for(i = 0; i <= 255;  i++)
	{
		printf("The ASCII value of %c = %d\n",i,i);
	}
}

int main()
{
	DisplayASCII();
	
	return 0;
}