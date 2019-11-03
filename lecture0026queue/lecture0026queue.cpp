#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct QueueNode
{
	element item;
	QueueNode* link;
}QueueNode;

typedef struct
{
	QueueNode* front, * rear;
}QueueType;

void Init(QueueType* q)
{
	q->front = q->rear = NULL;
}

int is_empty(QueueType* q)
{
	return (q->front == NULL);
}

int is_full(QueueType* q)
{
	return 0;
}

void Enqueue(QueueType* q, element item)
{
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));

	temp->item = item;
	temp->link = NULL;

	if (is_empty(q))
	{
		q->front = temp;
		q->rear = temp;
	}
	else
	{
		q->rear->link = temp;
		q->rear = temp;
	}
}

element Dequeue(QueueType* q)
{
	QueueNode* temp = q->front;
	element item;

	if (is_empty(q))
	{
		printf("큐가 비어있습니다\n");
		return -1;
	}

	item = temp->item;
	q->front = q->front->link;

	if (q->front == NULL)
		q->rear = NULL;

	free(temp);

	return item;
}

int main()
{
	QueueType q;
	int i;

	Init(&q);

	for (i = 0; i < 5; i++)
	{
		Enqueue(&q, i);
		printf("큐 삽입 :%d \n", i);
	}

	for (i = 0; i < 6; i++)
		printf("큐 삭제 :%d\n", Dequeue(&q));

	return 0;
}