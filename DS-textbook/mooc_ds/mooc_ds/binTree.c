#include<stdio.h>
#include<stdlib.h>
#include "binTree.h"
#include "stack.h"
#include "queue.h"

void inOrderTraversal(BinTree BT){
	if (BT){
		inOrderTraversal(BT->Left);
		printf("%d, ", BT->Data);
		inOrderTraversal(BT->Right);
	}
}

void preOrderTraversal(BinTree BT){
	if (BT){
		printf("%d, ", BT->Data);
		preOrderTraversal(BT->Left);
		preOrderTraversal(BT->Right);
	}
}

void postOrderTraversal(BinTree BT){
	if (BT){
		postOrderTraversal(BT->Left);		
		postOrderTraversal(BT->Right);
		printf("%d, ", BT->Data);
	}
}


void inOrderTraversalStack(BinTree BT){
	// 不用递归，自己用堆栈实现中序遍历
	BinTree T = BT;
	Stack s = CreateStack();
	while (T || !isStackEmpty(s)){
		while (T){
			push(s, T);
			T = T->Left;
		}
		if (!isStackEmpty(s)){
			T = pop(s);
			printf("%d, ",T->Data);
			T = T->Right;
		}
	}
}

void preOrderTraversalStack(BinTree BT){
	BinTree T = BT;
	Stack s = CreateStack();
	while (T || !isStackEmpty(s)){
		while (T){
			printf("%d, ", T->Data);
			push(s, T);
			T = T->Left;
		}
		if (!isStackEmpty(s)){
			T = pop(s);			
			T = T->Right;
		}
	}
}

int getTreeHeight(BinTree BT){
	int maxHeight, subLeftHeight, subRightHeight;
	if (BT){
		subLeftHeight = getTreeHeight(BT->Left);
		subRightHeight = getTreeHeight(BT->Right);
		maxHeight = (subLeftHeight > subRightHeight) ? subLeftHeight : subRightHeight;
		return maxHeight + 1;
	}
	else{
		return 0;
	}
}

void levelOrderTraversal(BinTree BT){
	Queue q;
	BinTree t;
	if (!BT) return;
	q = CreateQueue();
	addQ(q, BT);
	while (!isQueueEmpty(q)){
		t = deleteQ(q);
		printf("%d, ", t->Data);
		if (t->Left) addQ(q, t->Left);
		if (t->Right) addQ(q, t->Right);
	}
}

void levelOrderTraversalArray(BinTree BT){
	//用数组模拟队列
	BinTree q[100], p;
	if (!BT) return;
	int head = 0, tail = 0;
	q[tail++] = BT;
	while (tail != head){
		p = q[head++];
		printf("%d, ", p->Data);
		if (p->Left) q[tail++] = p->Left;
		if (p->Right) q[tail++] = p->Right;
	}
}

TreePosition Find(ElementType x, BinTree bst){
	//递归方式实现二叉搜索树的查找
	if (!bst) return NULL;
	if (x > bst->Data){
		return Find(x,bst->Right);
	}
	else if (x < bst->Data){
		return Find(x,bst->Left);
	}
	else{
		return bst;
	}
}

TreePosition Find_v2(ElementType x, BinTree bst){
	//改为用循环实现
	BinTree b = bst;
	while (b){
		if (x > b->Data){
			b = b->Right;
		}
		else if(x<b->Data){
			b = b->Left;
		}
		else{
			return b;
		}
	}
	return NULL;
}

TreePosition FindMin(BinTree bst){
	//一定是最左端那个节点（不一定是最左下）
	BinTree b = bst;
	if (b){
		while (b->Left){
			b = b->Left;
		}
	}
	return b;
}
TreePosition FindMax(BinTree bst){
	//一定是最右端那个节点（不一定是最右下）
	BinTree b = bst;
	if (b){
		while (b->Right){
			b = b->Right;
		}
	}
	return b;
}

TreePosition insert(ElementType x, BinTree bst){
	if (!bst){
		bst = (BinTree)malloc(sizeof(struct TNode));
		bst->Data = x;
		bst->Left = NULL;
		bst->Right = NULL;
	}
	else{
		if (x < bst->Data){
			bst->Left = insert(x, bst->Left);
		}
		else if (x > bst->Data){
			bst->Right = insert(x, bst->Right);
		}
	}
	return bst;
}