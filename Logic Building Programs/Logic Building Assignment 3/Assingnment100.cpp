#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
	int data;
	Node *next,*prev;
};

int InsertLast (
				struct Node **head,
				struct Node **tail,
				int no
			)
{
	struct Node *newnode = NULL;

	//	Allocate new node.
	
	newnode = (struct Node *)malloc(sizeof(struct Node));
	if (NULL == newnode)
	{
		return 0;
	}

	//
	//	Fill the node with data.
	//
	newnode->next =newnode->prev= NULL;
	newnode->data = no;

	//	Prepend
	if (NULL == *head && *tail == NULL)
	{
		*head=*tail=newnode;
		(*tail) -> next = *head;
		(*head)->prev=*tail;
	}
	else
	{
		(*tail)->next=newnode;
		newnode->prev=*tail;
		*tail=newnode;
		(*tail)->next=*head;
		(*head)->prev=*tail;
	}

	return 1;
}
/////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	:	ListSortAsc
//
//		Description		:	This function sort the elements of linked list.
//
//		Returns			:  1 on success otherwise return 0
//
//////////////////////////////////////////////////////////////////////////////////////////////

/*void ListSortAsc( 
					struct Node **head,
					struct Node **tail
				)
{
	struct Node *temp1= *Head;
	struct Node *temp2 = *Head;

	

	do{
		
		temp1=temp1->next;

		//temp3=temp1->next;
		if((*Head)->data > temp1->data)
		{
			temp2=temp1->prev;
			temp2->next=temp1->next;
			temp1->next->prev=temp2;
			temp1->next=(*Head);
			(*Head)->prev=temp1;
			*Head=temp1;
			temp1=temp2;
			(*Tail)->next=(*Head);
			(*Head)->prev=(*Tail);

		}
		else
		{
			temp2=(*Head);
			while(temp2 != temp1)
			{
				temp2=temp2->next;
				if(temp2->data > temp1->data)
				{
						temp2->next = temp1->next;
						temp1->next->prev=temp2;
					
						temp1->next=temp2;
						temp1->prev=temp2->prev;
						temp2->prev->next=temp1;					
						temp2->prev=temp1;

						temp1=temp2;
						break;
					

				}
				if((*Tail) == temp1)
					{
						(*Tail)=(*Tail)->prev;
						temp2=temp2->prev;
						temp1->next = temp2->next;
						temp2->next->prev=temp1;
						temp2->next = temp1;
						temp1->prev=temp2;
						
					}
					
			}
		}
	}while(temp1 != (*Tail));
}*/


int ListSortAsc(struct Node **head,struct Node **tail)
{
	struct Node *temp1=*head;
	struct Node *temp2=(*head)->next;
	struct Node *temp3=NULL;

	if(*head == NULL || (*head)->next == NULL)
	{
		return 0;
	}
	
	do
	{
		if(temp1->data > temp2->data)
		{
			if(temp1==*head && temp2==temp1->next)
			{
				temp1->next=temp2->next;
				temp2->next->prev=temp1;
				temp2->next=*head;
				(*head)->prev=temp2;
				*head=temp2;
				(*tail)->next=*head;
				(*head)->prev=*tail;
			}
			else 
			{
				temp3=*head;
				while(temp3->next!=temp1)
				{
					temp3=temp3->next;
				}
				temp3->next=temp2;
				temp2->prev=temp3;
				temp1->next=temp2->next;
				temp2->next->prev=temp1;
				temp2->next=temp1;
				temp1->prev=temp2;
				
				if(temp1->next==*head)
				{
					*tail=temp1;
				}
		
			}
			temp1=*head;
			temp2=temp1->next;
		}
		else
		{
			temp1=temp1->next;
			temp2=temp1->next;
		}
	
	}while(temp2!=*head);

//	printf("%d",temp1->data);
	*tail=temp1;
	(*tail)->next=*head;
	(*head)->prev=*tail;

	return 1;
}


void Display(
				struct Node *head,
				struct Node *tail
			)
{
	do
	{
		printf("|%d| -> ",head -> data);
		head = head -> next;
	}while(head != tail->next);
}


int main()
{
	struct Node *first1=NULL;
	struct Node *last1=NULL;

	struct Node *first2=NULL;
	struct Node *last2=NULL;
	
	int result=0;

	InsertLast(&first1,&last1,10);
	InsertLast(&first1,&last1,20);
	InsertLast(&first1,&last1,45);
	InsertLast(&first1,&last1,30);
	InsertLast(&first1,&last1,59);
	InsertLast(&first1,&last1,55);
	InsertLast(&first1,&last1,40);
	InsertLast(&first1,&last1,50);
	InsertLast(&first1,&last1,5);
	
	
	//InsertLast(&first1,&last1,45);
	/*
	InsertLast(&first2,&last2,10);
	InsertLast(&first2,&last2,20);
	InsertLast(&first2,&last2,30);
	InsertLast(&first2,&last2,40);
	InsertLast(&first2,&last2,20);
	InsertLast(&first2,&last2,10);
	*/
	
	
	printf("\n\n The Before swaping linked list is => ");
	Display(first1,last1);


	printf("\n");

	ListSortAsc( &first1,&last1);
	printf("\n\n The After swaping linked list is => ");
	Display(first1,last1);

	printf("\n\n ");

	getch();
	return 0;
}