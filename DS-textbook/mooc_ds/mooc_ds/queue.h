typedef struct TNode* QNodeType;//ÿ�����н��ָ��һ�������
//typedef int* QNodeType;//���queue.c���testQueue��������main.c���������

typedef struct QNode* PtrToQNode;
//�����еĽ��
struct QNode{
	QNodeType Data;
	PtrToQNode Next;
};
typedef PtrToQNode Position;

//���еĶ˽�㣨��ͷβ������,����ָʾһ������
struct QEndNode{
	Position Front;
	Position Rear;
};
typedef struct QEndNode* Queue;

Queue CreateQueue();
int isQueueEmpty(Queue q);
int addQ(Queue q, QNodeType n);
QNodeType deleteQ(Queue q);
//void printQueue(Queue q);//���queue.c���testQueue��������main.c���������
//void testQueue();//���queue.c���testQueue��������main.c���������