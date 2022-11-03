/*
	5. Write a program which return smallest element from singly linear linked

list.

Function Prototype :

int Minimum( PNODE Head);

Input linked list: [110]->12301->1201->12401-1640]

Output: 20
*/

#include<stdio.h>
#include<stdlib.h>
	
	
	struct node
	{
		int data;
		struct node *next;
	};
	typedef struct node NODE;
	typedef struct node *PNODE;
	typedef struct node **PPNODE;
	
	void InsertFirst(PPNODE head,int no)
	{
		PNODE newn = NULL;
		
		newn = (PNODE)malloc(sizeof(NODE));
		newn -> data = no;
		newn -> next = NULL;
		
		if(*head == NULL)
		{
			*head = newn;
		}
		else
		{
			newn -> next = *head;
			*head = newn;
		}
	}
	void Display(PNODE head)
	{
		printf("elements of array linkedlist\n");
		while(head != NULL)
		{
			printf("|%d|->",head->data);
			head = head -> next;
		}
		printf("NULL\n");
		
	}
	int Maximum(PNODE head)
	{
		int iMax = head -> data;
		while(head != NULL)
		{
			
		}
		return iMax;	
	}
	int main()
	{
		PNODE first = NULL;
		int iRet = 0;
		
		InsertFirst(&first,40);
		InsertFirst(&first,30);
		InsertFirst(&first,20);
		InsertFirst(&first,10);
		
		Display(first);
			
		iRet = Maximum(first);
		printf("Number of position %d",iRet);
		
		return 0;
	}