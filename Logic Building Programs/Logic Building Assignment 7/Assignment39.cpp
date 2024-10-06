/////////////////////////////////////////////////////////////////////////////////////
//
//	39. Accept string from user and print following pattern
//		string => PIYUSH
//		P
//		P	I
//		P	I	Y
//		P	I	Y	U
//		P	I	Y	U	S
//		P	I	Y	U	S	H
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

void PatternDisplay(char *sPtr)
{
	int iRow,iCol;
	
	int strlength=strlen(sPtr);

	char *temp=sPtr;

	for(iRow=0;iRow<strlength;iRow++)
	{
		for(iCol=0;iCol<=iRow;iCol++)
		{
			printf("%c\t",*temp);
			temp++;
		}
		printf("\n");
		temp=sPtr;
	}
}
int main()
{
	char cString[20]={'\0'};

	printf("\n Enter string to display pattern => ");
	scanf("%s",&cString);

	PatternDisplay(cString);

	return 0;

}
