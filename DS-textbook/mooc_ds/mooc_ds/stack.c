#include<stdio.h>
#include<stdlib.h>

#define bool int;//c没有bool类型
#define FALSE 0;
#define TRUE 1;
#define ERROR;

typedef int ElementType;
typedef struct SNode* PtrToSNode;
struct SNode
{
	ElementType Data;
	PtrToSNode Next;
};
typedef PtrToSNode Stack;

Stack CreateStack(){
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL;
	//以上，相当于创建一个空的“节点”，作为堆栈头
	return S;
}

bool isEmpty(Stack S){
	//c不支持bool类型
	return (S->Next == NULL);
}

bool push(Stack S, ElementType X){
	PtrToSNode tmpCell;
	tmpCell = (PtrToSNode)malloc(sizeof(struct SNode));
	tmpCell->Data = X;
	tmpCell->Next = S->Next;
	S->Next = tmpCell;
	return TRUE;
}

ElementType pop(Stack S){
	/* 两件事：1.返回栈顶元素的数值，2.删除栈顶元素 */
	PtrToSNode TopCell;
	ElementType TopCellValue;
	if (isEmpty(S)){
		printf("栈已空！");
		return ERROR;
	}
	else{
		TopCell = S->Next;
		TopCellValue = TopCell->Data;
		S->Next = TopCell->Next;
		free(TopCell);
		return TopCellValue;
	}
}
