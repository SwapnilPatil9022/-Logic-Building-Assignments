/*
	2. Write a program which search last occurrence of particular element from singly linear linked list. Function should return position at which element is found.

Function Prototype :

int SearchLastOcc( PNODE Head, int no );

Input linked list: 1101-1201-1301-1401->150]->|30|->1701

Input element: 30

Output: 6
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
	int FirstOcc(PNODE head,int iNo)
	{
		int iCnt = 0;
		
		while(head != NULL)
		{
			iCnt++;
		
			if((head) -> data == iNo)
			{
				return iCnt;
				break;
			}
			head = head -> next;
		}
		return 0;		
	}
	int main()
	{
		PNODE first = NULL;
		int iRet = 0;
		InsertFirst(&first,70);
		InsertFirst(&first,30);
		InsertFirst(&first,50);
		InsertFirst(&first,40);
		InsertFirst(&first,30);
		InsertFirst(&first,20);
		InsertFirst(&first,10);
		
		Display(first);
			
		iRet = FirstOcc(first,30);
		printf("Number of position %d",iRet);
		
		return 0;
	}