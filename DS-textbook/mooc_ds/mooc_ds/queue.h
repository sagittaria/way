typedef struct TNode* QNodeType;//每个队列结点指向一个树结点
//typedef int* QNodeType;//配合queue.c里的testQueue方法（在main.c里调用它）

typedef struct QNode* PtrToQNode;
//队列中的结点
struct QNode{
	QNodeType Data;
	PtrToQNode Next;
};
typedef PtrToQNode Position;

//队列的端结点（含头尾两个）,用于指示一个队列
struct QEndNode{
	Position Front;
	Position Rear;
};
typedef struct QEndNode* Queue;

Queue CreateQueue();
int isQueueEmpty(Queue q);
int addQ(Queue q, QNodeType n);
QNodeType deleteQ(Queue q);
//void printQueue(Queue q);//配合queue.c里的testQueue方法（在main.c里调用它）
//void testQueue();//配合queue.c里的testQueue方法（在main.c里调用它）