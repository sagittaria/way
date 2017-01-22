//数据结构与算法题目集（中文） 4-1 单链表逆转
#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
	ElementType Data;
	PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print(List L); /* 细节在此不表 */

List Reverse(List L);

int main()
{
	List L1, L2;
	L1 = Read();
	L2 = Reverse(L1);
	Print(L1);//用来证明一下L1确实被逆转了？
	Print(L2);
	return 0;
}

/* 你的代码将被嵌在这里 */
List Read(){
	int len = 0;
	int num = 0;
	PtrToNode list = NULL;
	PtrToNode last = NULL;

	scanf("%d", &len);
	if (0 == len){
		return NULL;
	}

	scanf("%d", &num);
	list = (PtrToNode)malloc(sizeof(struct Node));
	list->Data = num;
	list->Next = NULL;
	last = list;
	len--;
	while (len > 0){
		scanf("%d", &num);
		PtrToNode node = (PtrToNode)malloc(sizeof(struct Node));
		node->Data = num;
		node->Next = NULL;
		last->Next = node;
		last = node;
		len--;
	}

	return list;
}


void Print(List L){
	if (NULL == L){
		return;
	}

	PtrToNode last = L;

	while (NULL != last){
		printf("%d ", last->Data);
		last = last->Next;
	}
	putchar('\n');
}

List Reverse(List L){
	//自己默写教材上的答案	
	List old_head, new_head, temp;
	old_head = L;
	new_head = NULL;
	while (old_head){
		temp = old_head->Next;
		old_head->Next = new_head;
		new_head = old_head;
		old_head = temp;
	}
	L = new_head;
	return L;
}

List ReverseKey(List L){
	//这是网上找来的答案
	if (NULL == L){
		return NULL;
	}

	PtrToNode listre = NULL;
	PtrToNode t = L->Next;
	if (NULL == t){
		listre = L;
		return listre;
	}
	L->Next = t->Next;
	listre = t;
	t->Next = L;

	while (NULL != L->Next){
		t = L->Next;
		L->Next = t->Next;
		t->Next = listre;
		listre = t;
	}

	return listre;
}