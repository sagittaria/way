#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
#include "binTree.h"

int main(){
	BinTree a = (BinTree)malloc(sizeof(struct TNode));//不要写成sizeof(BinTree)，概念性错误
	BinTree b = (BinTree)malloc(sizeof(struct TNode));
	BinTree c = (BinTree)malloc(sizeof(struct TNode));
	a->Data = 1;
	a->Left = b;
	a->Right = c;
	b->Data = 2;
	b->Left = NULL;//必须初始化成NULL，否则出错（不知道是不是VS特有的安全检查）
	b->Right = NULL;//必须
	c->Data = 3;
	c->Left = NULL;//必须
	c->Right = NULL;//必须
	inOrderTraversal(a);
	printf("  <---中序遍历\n");
	inOrderTraversalStack(a);
	printf("  <---借助堆栈实现中序遍历（不用递归）\n");
	preOrderTraversal(a);
	printf("  <---先序遍历\n");
	preOrderTraversalStack(a);
	printf("  <---借助堆栈实现先序遍历（不用递归）\n");
	postOrderTraversal(a);
	printf("  <---后序遍历\n");

	return 0;
}