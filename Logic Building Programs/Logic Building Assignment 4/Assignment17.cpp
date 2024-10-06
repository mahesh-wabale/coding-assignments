//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 17.Write a program which accept number from user and print its factorial in
//	recursive manner.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//Function Protptype
int PrintFactorial(int);

int main()
{
	int iNum=0;

	printf("\nEnter Number => ");
	scanf("%d",&iNum);

	// Function call
	iNum=PrintFactorial(iNum);
	
	printf("\nFactorial is => %d\n",iNum);
	
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	:	PrintFactorial
//
//		Input			:	Integer
//
//		Returns			:	Integer(fact)
//
//		Description		:	This fucntion accept number and return factorial of that number using recursion.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int PrintFactorial(int iNo)
{
	static int iFact=1;
	if(iNo > 0)
	{
		iFact*=iNo;
		iNo--;
		PrintFactorial(iNo);
	}
		return iFact;
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//			Input		:	Enter Number => 6
//			Output		:	Factorial is => 720
//
////////////////////////////////////////////////////////////////////////////////////////////