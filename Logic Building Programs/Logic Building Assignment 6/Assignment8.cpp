//////////////////////////////////////////////////////////////////////////////////////////////////
//
//	8. Write a program which creates a structure to specify data of customers in bank. 
//	The data to be stored is: Account number, name, and balance in account. Write a function 
//	withdrawal and deposited by using above structure. 
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#pragma pack(1)
//creating structor which stores info of bank customers
typedef struct 
{
	int Account_No;
	char name[30];
	double balance;
}Customer,*pCustomer;

#pragma pack(1)
typedef struct
{
	char Bank_Name[30];
	char Bank_Address[30];

	//this is pointer to customer structor
	pCustomer cptr[5];

}Bank,*pBank;

///////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	:	InitializeBankRecords
//
//		Input			:	Address of Bank structor
//
//		Returns			:	void
//
//		Description		:	This function accept address of bank structor and
//							initialize it with some hardquoted values.
//
////////////////////////////////////////////////////////////////////////////////////////

void InitializeBankRecords(pBank ptr)
{
	int i=0;
	
	if(ptr == NULL)
	{
		return;
	}

	//initialize bank structor with some hardquoted values.
	strcpy(ptr->Bank_Name,"SBI");
	strcpy(ptr->Bank_Address,"Shivajinagar");
	
	//initialize customer structor
	for(i=0;i<5;i++)
	{
		ptr->cptr[i]=(pCustomer)malloc(sizeof(Customer));

		if(ptr->cptr[i]==NULL)
		{
			printf("\n memory not allocted.\n");
			return;
		}

		//accept account number
		printf("\nEnter account number => ");
		scanf("%d",&(ptr->cptr[i]->Account_No));
		
		fflush(stdin);

		//accept name
		printf("\nEnter name of customer => ");
		scanf("%[^\n]",ptr->cptr[i]->name);

		//accept balance
		printf("\nEnter account balance => ");
		scanf("%lf",&(ptr->cptr[i]->balance));
	}
}
////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	:	DepositeAmount
//
//		Input			:	Address of bank structor , account number
//
//		Returns			:	void
//
//		Description		:	This function deposite the amount in a particular customer
//							account.
//
/////////////////////////////////////////////////////////////////////////////////////////////

void DepositeAmount(pBank ptr,int acc_no,double Amount)
{
	int i=0;

	if(ptr == NULL)
	{
		printf("\n Can not able to deposite amount.\n");
		exit(1);
	}

	for(i=0;i<5;i++)
	{
		if(ptr->cptr[i]->Account_No == acc_no)
		{
			ptr->cptr[i]->balance = ptr->cptr[i]->balance + Amount;
	
			printf("\nAmount deposited successfully.");
			printf("\nCustomer \"%s\" has \"%lf\" amount in his account.",ptr->cptr[i]->name,ptr->cptr[i]->balance);
		
			break;
		}
	}
}
void WithdrawAmount(pBank ptr,int acc_no,double Amount)
{
	int i=0;

	if(ptr == NULL)
	{
		printf("\n Can not able to deposite amount.\n");
		exit(1);
	}

	for(i=0;i<5;i++)
	{
		if(ptr->cptr[i]->Account_No == acc_no)
		{
			ptr->cptr[i]->balance = ptr->cptr[i]->balance - Amount;
	
			printf("\nAmount withdraw successfully.");
			printf("\nCustomer \"%s\" has \"%lf\" amount in his account.",ptr->cptr[i]->name,ptr->cptr[i]->balance);
			
			break;
		}
	}

}
int main()
{
	//create structor variable bank structor
	Bank b1;

	int Choice=0;
	int Account_No=0;
	double Amount=0.0;
	
	//zero out the structor
	memset(&b1,0,sizeof(b1));

	//call to function to initialize bank structor
	InitializeBankRecords(&b1);

	printf("\nSelect which operation do you want to perform.\n");
	//show menu to user 
	printf("\n 1.Deposite amount.");
	printf("\n 2.Withdraw amount.");
	printf("\n 3.Exit");

	//accepting choice from user to perform operation.
	printf("\n Enter your choice => ");
	scanf("%d",&Choice);

	//call to specific function depend upon choice entered by the user
	if(Choice == 1)
	{
		printf("\nEnter account number in which do you want to deposite amount => ");
		scanf("%d",&Account_No);
	
		printf("\nEnter amount do you want to deposite  => ");
		scanf("%lf",&Amount);
	
		DepositeAmount(&b1,Account_No,Amount);
	}
	else if(Choice == 2)
	{
		printf("\nEnter account number from which do you want to withdraw amount => ");
		scanf("%d",&Account_No);
	
		printf("\nEnter amount do you want to withdraw  => ");
		scanf("%lf",&Amount);
	
		WithdrawAmount(&b1,Account_No,Amount);
	}
	else if(Choice == 3)
	{
		exit(0);
	}
	else
	{
		printf("\nPlease enter valid choice.\n");
		exit(2);
	}

	printf("\n");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Input	:	Enter account number => 1000
//					Enter name of customer => prasad kamble
//					Enter account balance => 10000
//					
//					Enter account number => 1001
//					Enter name of customer => rohan kayangude
//					Enter account balance => 20000
//					
//					Enter account number => 1002
//					Enter name of customer => shrikant mundhe
//					Enter account balance => 30000
//					
//					Enter account number => 1003
//					Enter name of customer => dinesh shinde
//					Enter account balance => 40000
//					
//					Enter account number => 1004
//					Enter name of customer => ravindra dhere
//					Enter account balance => 50000
//
//		Output:		Select which operation do you want to perform.
//
//					1.Deposite amount.
//					2.Withdraw amount.
//					3.Exit
//
//					Enter your choice => 1
//
//					Enter account number in which do you want to deposite amount => 1000
//
//					Enter amount do you want to deposite  => 100000
//
//					Amount deposited successfully.
//
//					Customer "prasad kamble" has "110000.000000" amount in his account.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////