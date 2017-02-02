#include<stdio.h>
#include<stdlib.h>
#include "binTree.h"
#include "queue.h"

Queue CreateQueue(){
	Queue q = (Queue)malloc(sizeof(struct QEndNode));
	q->Front = NULL;
	q->Rear = NULL;
	return q;
}

int isQueueEmpty(Queue q){
	return q->Front == NULL;
}

QNodeType deleteQ(Queue q){
	if (isQueueEmpty(q)){
		printf("队列空！");
		return NULL;
	}
	else{
		Position frontNode = q->Front;
		QNodeType frontNodeData;
		if (q->Front == q->Rear){
			//如果队列中只有一个元素：首尾置NULL
			q->Front = q->Rear = NULL;
		}
		else{
			//如果有至少两个元素，修改队首指向后一个结点
			q->Front = q->Front->Next;
		}
		frontNodeData = frontNode->Data;//只要非空，取走
		free(frontNode);
		return frontNodeData;
	}
}

int addQ(Queue q, QNodeType n){
	struct QNode* newNode = (struct QNode*)malloc(sizeof(struct QNode));
	newNode->Data = n;
	newNode->Next = NULL;
	if (isQueueEmpty(q)){
		q->Front = q->Rear = newNode;
	}
	else{
		//这里有两件事：1.把新结点连到旧尾巴 2.把新节点设为尾巴
		q->Rear->Next = newNode;
		q->Rear = newNode;
	}
	return 1;
}

/*调试用
void printQueue(Queue q){
	//配合queue.h里 typedef int* QNodeType; 时用
	Position tmp = q->Front;
	printf("当前队列 ");
	while (tmp){
		printf("%d ", *(tmp->Data));
		tmp = tmp->Next;
	}
	printf("\n");
}

void testQueue(){
	//配合queue.h里 typedef int* QNodeType; 时用
	Queue q = CreateQueue();
	int* node1 = (int*)malloc(sizeof(int));
	*node1 = 55;
	int* node2 = (int*)malloc(sizeof(int));
	*node2 = 56;
	int* node3 = (int*)malloc(sizeof(int));
	*node3 = 57;
	int* node4 = (int*)malloc(sizeof(int));
	*node4 = 58;
	addQ(q, node1);
	printf("%d入队 ", *node1);
	printQueue(q);
	addQ(q, node2);
	printf("%d入队 ", *node2);
	printQueue(q);
	addQ(q, node3);
	printf("%d入队 ", *node3);
	printQueue(q);
	addQ(q, node4);
	printf("%d入队 ", *node4);
	printQueue(q);
	QNodeType tmpDat;
	int i;
	for (i = 0; i < 6; i++){
		tmpDat = deleteQ(q);
		if (tmpDat){			
			printf("%d出队 ", *tmpDat);
			printQueue(q);
		}
		else{
			printf("已经没东西了---%d\n",i);
		}
	}
}
*/