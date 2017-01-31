#include<stdio.h>
#include<stdlib.h>

typedef int ElementType;
typedef struct TNode* Position;
typedef Position BinTree;
struct TNode
{
	ElementType Data;
	BinTree Left;
	BinTree Right;
};

void inOrderTraversal(BinTree BT){
	if (BT){
		inOrderTraversal(BT->Left);
		printf("%d\n", BT->Data);
		inOrderTraversal(BT->Right);
	}
}

void preOrderTraversal(BinTree BT){
	if (BT){
		printf("%d\n", BT->Data);
		preOrderTraversal(BT->Left);
		preOrderTraversal(BT->Right);
	}
}

void postOrderTraversal(BinTree BT){
	if (BT){
		postOrderTraversal(BT->Left);		
		postOrderTraversal(BT->Right);
		printf("%d\n", BT->Data);
	}
}