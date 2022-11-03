// Consider below code snippet to solve given problem statments.
/*1. Write a program which search first occurrence of particular element from

singly linear linked list. Function should return position at which element is found.

Function Prototype :

int SearchFirstOcc( PNODE Head, int no );

Input linked list: 1101->1201->1301->1401->1501-1301-170|

Input element: 30

Output: 3
*/

	#include<stdio.h>
	#include<stdlib.h>
	#define TRUE 1
	#define FALSE 0;
	
	typedef int BOOL;
	
	struct node
	{
		int data;
		struct node *Next;
	};
	typedef struct node NODE;
	typedef struct node *PNODE;
	typedef struct node **PPNODE;
	
	void InsertFirst(PPNODE Head,int no)
	{
		PNODE newn = NULL;
		
		newn = (PNODE)malloc(sizeof(NODE));
		newn -> data = no;
		newn -> Next = NULL;
		
		if(*Head == NULL)
		{
			*Head = newn;
		}
		else
		{
			newn -> Next = *Head;
			*Head = newn;
		}
	}
	void Display(PNODE Head)
	{
		printf("elements of array linkedlist\n");
		while(Head != NULL)
		{
			printf("|%d|->",Head->data);
			Head = Head -> Next;
		}
		printf("NULL\n");
		
	}
	int main()
	{
		PNODE first = NULL;
		int Ret = 0;
		InsertFirst(&first,101);
		InsertFirst(&first,51);
		InsertFirst(&first,21);
		InsertFirst(&first,11);
		
		InsertFirst(&first,1);
		Display(first);
		
		
		
		
		return 0;
	}