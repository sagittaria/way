#include<stdio.h>
#include<stdlib.h>
#include "binTree.h"

int main(){
	/*测试用例二叉树的结构
				a1
			   /  \
			 b2   c3
			 /    / \
		   d4   e5   f6
	*/
	BinTree a = (BinTree)malloc(sizeof(struct TNode));//不要写成sizeof(BinTree)，概念性错误
	BinTree b = (BinTree)malloc(sizeof(struct TNode));
	BinTree c = (BinTree)malloc(sizeof(struct TNode));
	BinTree d = (BinTree)malloc(sizeof(struct TNode));
	BinTree e = (BinTree)malloc(sizeof(struct TNode));
	BinTree f = (BinTree)malloc(sizeof(struct TNode));
	a->Data = 1;
	a->Left = b;
	a->Right = c;
	b->Data = 2;
	b->Left = d;
	b->Right = NULL;//必须初始化成NULL，否则出错（不知道是不是VS特有的安全检查）
	c->Data = 3;
	c->Left = e;
	c->Right = f;
	d->Data = 4;
	d->Left = NULL;//必须
	d->Right = NULL;//必须
	e->Data = 5;
	e->Left = NULL;//必须
	e->Right = NULL;//必须
	f->Data = 6;
	f->Left = NULL;//必须
	f->Right = NULL;//必须
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
	//testQueue();//调试完成，结果符合预期
	printf("树的高度：%d\n", getTreeHeight(a));
	levelOrderTraversal(a);
	printf("  <---借助队列实现层序遍历\n");
	levelOrderTraversalArray(a);
	printf("  <---层序遍历-数组版\n");
	return 0;
}