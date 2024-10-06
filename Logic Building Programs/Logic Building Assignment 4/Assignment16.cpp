//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 16.Write a program which accept string from user and count number of
// words in recursive manner.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//Function Protptype
int CountWords(char *);

int main()
{
	//declaring integer
	char cString[50]={'\0'};
	int iTemp=0;

	printf("\nEnter String => ");
	scanf("%[^\n]",cString);

	// Function call
	iTemp=CountWords(cString);
	
	printf("\nNumber of words in the string are => %d\n",iTemp);
	
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	:	CountWords
//
//		Input			:	Address of string
//
//		Returns			:	Integer
//
//		Description		:	This function accept string and count number of word of that string using recursion.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountWords(char *cPtr)
{
	static int iCount=0;

	if(*cPtr!='\0')
	{
		if(*cPtr == 32)
		{
			iCount++;
		}
		cPtr++;
		CountWords(cPtr);
	}
	return iCount+1;
}
	
		

/////////////////////////////////////////////////////////////////////////////////////////
//
//			Input		:	Enter String => Marvellous Infosystems Pune
//			Output		:	String length is => 3
//
////////////////////////////////////////////////////////////////////////////////////////////