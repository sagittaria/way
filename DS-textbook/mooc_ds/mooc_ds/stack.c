#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
#include "binTree.h"

Stack CreateStack(){
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL;
	//���ϣ��൱�ڴ���һ���յġ��ڵ㡱����Ϊ��ջͷ
	return S;
}

int isStackEmpty(Stack S){
	//c��֧��bool����
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
	/* �����£�1.����ջ��Ԫ�ص���ֵ��2.ɾ��ջ��Ԫ�� */
	PtrToSNode TopCell;
	SNodeType TopCellValue;
	if (isStackEmpty(S)){
		printf("ջ�ѿգ�");
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
