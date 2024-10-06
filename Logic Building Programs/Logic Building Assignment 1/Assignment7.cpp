//////////////////////////////////////////////////////////////////////////////////////
//
//		7. Write a program which accept two numbers and print minimum number. 
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name :		PrintMinOfTwoNum
//
//		Parameters	  :		integer , integer
//
//		Returns		  :		void
//
//		Description	  :		This function accepts two numbers and print the minimum number.
//
//////////////////////////////////////////////////////////////////////////////////////////
void PrintMinOfTwoNum(int Num1 , int Num2)
{
	if( Num1 < Num2 )
	{
		printf("\n %d is minimum number.",Num1);
	}
	else
	{
		printf("\n %d is minimum number.",Num2);	
	}
}


int main()
{
	int iNo1,iNo2;

	printf("\n Enter two numbers => ");
	scanf("%d %d",&iNo1,&iNo2);

	PrintMinOfTwoNum(iNo1,iNo2);

	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////
//
//		Input		:		Enter two numbers => 7 4
//
//		Output		:		4 is minimum number.
//
////////////////////////////////////////////////////////////////////////////////////////////