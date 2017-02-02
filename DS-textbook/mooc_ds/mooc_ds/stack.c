#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
#include "binTree.h"

Stack CreateStack(){
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL;
	//以上，相当于创建一个空的“节点”，作为堆栈头
	return S;
}

int isStackEmpty(Stack S){
	//c不支持bool类型
	return (S->Next == NULL);
}

int push(Stack S, SNodeType X){
	PtrToSNode tmpCell;
	tmpCell = (PtrToSNode)malloc(sizeof(struct SNode));
	tmpCell->Data = X;
	tmpCell->Next = S->Next;
	S->Next = tmpCell;
	return 1;
}

SNodeType pop(Stack S){
	/* 两件事：1.返回栈顶元素的数值，2.删除栈顶元素 */
	PtrToSNode TopCell;
	SNodeType TopCellValue;
	if (isStackEmpty(S)){
		printf("栈已空！");
		return NULL;
	}
	else{
		TopCell = S->Next;
		TopCellValue = TopCell->Data;
		S->Next = TopCell->Next;
		free(TopCell);
		return TopCellValue;
	}
}
