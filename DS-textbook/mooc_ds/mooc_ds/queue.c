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
		printf("���пգ�");
		return NULL;
	}
	else{
		Position frontNode = q->Front;
		QNodeType frontNodeData;
		if (q->Front == q->Rear){
			//���������ֻ��һ��Ԫ�أ���β��NULL
			q->Front = q->Rear = NULL;
		}
		else{
			//�������������Ԫ�أ��޸Ķ���ָ���һ�����
			q->Front = q->Front->Next;
		}
		frontNodeData = frontNode->Data;//ֻҪ�ǿգ�ȡ��
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
		//�����������£�1.���½��������β�� 2.���½ڵ���Ϊβ��
		q->Rear->Next = newNode;
		q->Rear = newNode;
	}
	return 1;
}

/*������
void printQueue(Queue q){
	//���queue.h�� typedef int* QNodeType; ʱ��
	Position tmp = q->Front;
	printf("��ǰ���� ");
	while (tmp){
		printf("%d ", *(tmp->Data));
		tmp = tmp->Next;
	}
	printf("\n");
}

void testQueue(){
	//���queue.h�� typedef int* QNodeType; ʱ��
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
	printf("%d��� ", *node1);
	printQueue(q);
	addQ(q, node2);
	printf("%d��� ", *node2);
	printQueue(q);
	addQ(q, node3);
	printf("%d��� ", *node3);
	printQueue(q);
	addQ(q, node4);
	printf("%d��� ", *node4);
	printQueue(q);
	QNodeType tmpDat;
	int i;
	for (i = 0; i < 6; i++){
		tmpDat = deleteQ(q);
		if (tmpDat){			
			printf("%d���� ", *tmpDat);
			printQueue(q);
		}
		else{
			printf("�Ѿ�û������---%d\n",i);
		}
	}
}
*/