//#pragma once
//
//  LinkedQueue.h
//  SortingAlgorithm

#include<stdio.h>
#include <stdlib.h>

#ifndef LinkedQueue_h


#define LinkedQueue_h

//큐 노드
typedef struct QueueNode {
	int item;
	struct QueueNode* link;
} QueueNode;

//큐 타입
typedef struct {
	QueueNode* front, * rear;
} QueueType;

//에러 처리 함수
void puts(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

//초기화 함수
void initQueue(QueueType* q)
{
	q->front = q->rear = 0;
}

//공백상태 검사
int isEmpty(QueueType* q)
{
	return (q->front == NULL);
}

//포화상태 검사
int isFull(QueueType* q)
{
	return 0;
}

//삽입함수
void enqueue(QueueType* q, int item)
{
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));

	if (temp == NULL)
	{
		puts("memory allocation is failed\n");
	}

	else
	{
		temp->item = item;
		temp->link = NULL;
		if (isEmpty(q))
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
}

//삭제함수
int dequeue(QueueType* q)
{
	QueueNode* temp = q->front;
	int item;

	if (isEmpty(q))
	{
		puts("queue is empty\n");
	}

	else
	{
		item = temp->item;
		q->front = q->front->link;

		if (q->front == NULL)
			q->rear = NULL;

		free(temp);
		return item;
	}
}

//peek 함수
int peek(QueueType* q)
{
	if (isEmpty(q))
		puts("queue is empty\n");
	else
	{
		int item = q->front->item;
		return item;
	}
}

#endif
