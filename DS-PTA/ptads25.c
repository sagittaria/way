//浙大版《数据结构（第2版）》题目集 2.5 两个有序链表序列的合并
#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
	ElementType Data;
	PtrToNode   Next;
};
typedef PtrToNode List;

List Read();
void Print(List L);

List Merge(List L1, List L2);

int main()
{
	List L1, L2, L;
	L1 = Read();
	L2 = Read();
	L = Merge(L1, L2);
	Print(L);
	Print(L1);
	Print(L2);
	return 0;
}

List Merge(List L1, List L2){
	List l = (List)malloc(sizeof(struct Node));//return later
	l->Next = NULL;
	List lt = l;//temporary used in building process
	List p = L1->Next;
	List q = L2->Next;
	while (p && q){
		if (p->Data <= q->Data){
			lt->Next = p;
			lt = p;
			p = p->Next;
		}
		else{
			lt->Next = q;
			lt = q;
			q = q->Next;
		}
	}
	if (p) lt->Next = p;
	if (q) lt->Next = q;
	L1->Next = NULL;
	L2->Next = NULL;
	return l;
}

List Read()
{
	int len = 0;
	int num = 0;
	PtrToNode h = NULL;
	PtrToNode last = NULL;

	scanf("%d", &len);
	if (len == 0)
		return NULL;

	h = (PtrToNode)malloc(sizeof(struct Node));//建立头结点
	h->Next = NULL;
	last = h;
	while (len){
		scanf("%d", &num);
		PtrToNode node = (PtrToNode)malloc(sizeof(struct Node));
		node->Data = num;
		node->Next = NULL;
		last->Next = node;
		last = node;
		len--;
	}
	return h;
}

void Print(List L)
{
	if (L->Next == NULL){
		printf("NULL\n");
		return;
	}
	L = L->Next;
	while (L != NULL){
		printf("%d ", L->Data);
		L = L->Next;
	}
	putchar('\n');
}