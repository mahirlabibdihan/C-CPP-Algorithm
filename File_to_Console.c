#include <stdio.h> 

#include<stdio.h>
int main()
{
	FILE* Ptr=fopen("Data.txt","r");

	while(1)
	{
		char C=fgetc(Ptr);
		if(C==EOF)break;
		putchar(C);
	};

	// for(char C=fgetc(Ptr);C!=EOF;C=fgetc(Ptr))
	// {
	// 	putchar(C);
	// }



	fclose(Ptr);
}