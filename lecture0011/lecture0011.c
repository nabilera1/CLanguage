//연결리스트의 삽입, 삭제

#include<stdio.h>
#include<stdlib.h>

typedef struct _NODE
{
	char str;
	struct _NODE* Next;
}NODE;

NODE* head = '\0', * end = '\0', * temp = '\0';
NODE* temp1= '\0', * temp2 = '\0', * temp3 = '\0', * temp4 = '\0';

void Initialize(void);
void InsertNode(NODE*);
void DeleteNode(NODE*);

int main()
{
	NODE* ptr;
	int i = 0;
	Initialize();

	//데이터 출력
	ptr = head->Next;
	for (i = 0; i < 4; i++)
	{
		printf("%2c", ptr->str);
		ptr = ptr->Next;
	}
	printf("\n");

	temp = (NODE*)malloc(sizeof(NODE));
	temp->str = 'C';

	InsertNode(temp);

	ptr = head->Next;
	for (i = 0; i < 5; i++)
	{
		printf("%2c", ptr->str);
		ptr = ptr->Next;
	}

	//DeleteNode(temp);
	ptr = head->Next;
	for (i = 0; i < 4; i++)
	{
		printf("%2c", ptr->str);
		ptr = ptr->Next;
	}
	return 0;
}

void Initialize(void)
{
	NODE* ptr;
	head = (NODE*)malloc(sizeof(NODE));
	end = (NODE*)malloc(sizeof(NODE));

	temp1 = (NODE*)malloc(sizeof(NODE));
	temp1->str = 'A';
	head->Next = temp1;
	temp1->Next = end;
	end->Next = end;
	ptr = temp1;

	temp2 = (NODE*)malloc(sizeof(NODE));
	temp2->str = 'B';
	ptr->Next = temp2; //temp1->Next=temp2;
	temp2->Next = end;
	ptr = temp2;

	temp3 = (NODE*)malloc(sizeof(NODE));
	temp3->str = 'D';
	ptr->Next = temp3;
	temp3->Next = end;
	ptr = temp3;

	temp4 = (NODE*)malloc(sizeof(NODE));
	temp4->str = 'E';
	ptr->Next = temp4;
	temp4->Next = end;
	ptr = temp4;
}

void InsertNode(NODE* newNode)
{
	NODE* indexptr;
	for (indexptr = head; indexptr != end; indexptr = indexptr->Next)
	{
		if ((indexptr->Next->str) > (newNode->str))
			break;
	}
	newNode->Next = indexptr->Next;
	indexptr->Next = newNode;
}

void DeleteNode(NODE* delptr)
{
	NODE* indexptr;
	NODE* deleteptr='\0';

	for (indexptr = head; indexptr != end; indexptr->Next)
	{
		if (indexptr->Next->str == delptr->str)
		{
			deleteptr = indexptr->Next;
			break;
		}
	}
	indexptr->Next = indexptr->Next->Next;
	free(deleteptr);
}