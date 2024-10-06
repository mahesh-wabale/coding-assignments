///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 26.Write a program which accept string from user and reverse words from that string.    
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

// Function prototype
char* MyStrRevWords(char *);


int main()
{
	//Declaring array for string
	char cSource[30]={'\0'};

	// Accept string prom user
	printf("\nEnter String => ");
	scanf("%[^\n]",cSource);
	
	printf("\nReverse string is => %s\n",MyStrRevWords(cSource));

	getch();
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	:	MyStrRevWords
//
//		Input			:	Address of String 
//
//		Return			:	Address of reverse string
//
//		Description		:	This function accept string and reverse each word of the string without using another string.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

char* MyStrRevWords(
						char *cPtr1
					)
{
	// Creating local pointer 
	char *cPtr2,*cPtr3,*cPtr4;

	//this variable is use to hold temporary character
	char temp;

	if(cPtr1 == NULL )
	{
		printf("\n Wrong input.");
		return NULL;
	}

	//Assign pointer
	cPtr3=cPtr4=cPtr1;
	
	while(*cPtr4 != '\0')
	{
		cPtr2=cPtr1;
		while(*cPtr2 != 32 && *cPtr2 != '\0' )
		{
			cPtr2++;
		}
		cPtr4=cPtr2;
		cPtr2--;
		
		while(cPtr1 <= cPtr2 )
		{
			temp = *cPtr2;
			*cPtr2 = *cPtr1;
			*cPtr1 = temp;

			cPtr1++;
			cPtr2--;
		}
		cPtr1=cPtr4+1;		
	}
	return cPtr3;
}




///////////////////////////////////////////////////////////
//
//		Input		:		Prasad Rohan 
// 
//		OutPut		:		dasarP nahoR
//
////////////////////////////////////////////////////////////