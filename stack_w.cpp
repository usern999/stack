#include <stdio.h>
#include <conio.h>

/**
	\file stack_w.cpp stack file
*/


/**
 push
 */

/**
	\param stack stack
	\param head first item
	
*/

void push(int* stack,int* head)
{
	int a;
	if(!(*head))
	{
		printf("error\n\n");
		return;
	}
	--*head;
	printf("Count of elem\n");
	scanf("%d",&a);
	printf("\n");
	stack[*head]=a;
}

/**
 pop
 */

/**
	\param head first item
	
*/

void pop(int *head)
{
	if(*head==10)
	{
		printf("error\n\n");
		return;
	}
	++*head;
	printf("\n");
}

/**
 count
 */

/**
	\param stack stack
	\param head first item
	
*/

void count(int* stack,int* head)
{
	if(*head==10)
	{
		printf("Empty stack\n\n");
		return;
	}
	printf("Count\n%d\n\n",stack[*head]);
}

void main()
{
	int stack[10];
	int head=10;
	int b;
	while(1)
	{
		printf("1-push,2-pop,3-count\n");
		scanf("%d",&b);
		switch(b)
		{
		case 1:
			push(stack,&head);
			break;
		case 2:
			pop(&head);
			break;
		case 3:
			count(stack,&head);
			break;
		}

	}
}