#include<stdio.h>
#include "binTree.h"
#include "stack.h"

void inOrderTraversal(BinTree BT){
	if (BT){
		inOrderTraversal(BT->Left);
		printf("%d", BT->Data);
		inOrderTraversal(BT->Right);
	}
}

void preOrderTraversal(BinTree BT){
	if (BT){
		printf("%d", BT->Data);
		preOrderTraversal(BT->Left);
		preOrderTraversal(BT->Right);
	}
}

void postOrderTraversal(BinTree BT){
	if (BT){
		postOrderTraversal(BT->Left);		
		postOrderTraversal(BT->Right);
		printf("%d", BT->Data);
	}
}

void inOrderTraversalStack(BinTree BT){
	/* 不用递归，自己用堆栈实现中序遍历 */
	BinTree T = BT;
	Stack s = CreateStack();
	while (T || !isEmpty(s)){
		while (T){
			push(s, T);
			T = T->Left;
		}
		if (!isEmpty(s)){
			T = pop(s);
			printf("%d",T->Data);
			T = T->Right;
		}
	}
}

void preOrderTraversalStack(BinTree BT){
	BinTree T = BT;
	Stack s = CreateStack();
	while (T || !isEmpty(s)){
		while (T){
			printf("%d", T->Data);
			push(s, T);
			T = T->Left;
		}
		if (!isEmpty(s)){
			T = pop(s);			
			T = T->Right;
		}
	}
}
