#include<stdio.h>
#include<stdlib.h>

#define bool int;//cû��bool����
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
	//���ϣ��൱�ڴ���һ���յġ��ڵ㡱����Ϊ��ջͷ
	return S;
}

bool isEmpty(Stack S){
	//c��֧��bool����
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
	/* �����£�1.����ջ��Ԫ�ص���ֵ��2.ɾ��ջ��Ԫ�� */
	PtrToSNode TopCell;
	ElementType TopCellValue;
	if (isEmpty(S)){
		printf("ջ�ѿգ�");
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
