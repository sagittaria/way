#include<stdio.h>
#include<stdlib.h>
#include "binTree.h"

int main(){
	/*测试用例二叉树的结构
                a1
               /  \
              b2   c3
             /    /  \
           d4    e5   f6
	*/
	BinTree a = (BinTree)malloc(sizeof(struct TNode));//不要写成sizeof(BinTree)，概念性错误
	BinTree b = (BinTree)malloc(sizeof(struct TNode));
	BinTree c = (BinTree)malloc(sizeof(struct TNode));
	BinTree d = (BinTree)malloc(sizeof(struct TNode));
	BinTree e = (BinTree)malloc(sizeof(struct TNode));
	BinTree f = (BinTree)malloc(sizeof(struct TNode));
	a->Data = 1;	a->Left = b;	a->Right = c;
	b->Data = 2;	b->Left = d;	b->Right = NULL;//必须初始化成NULL，否则出错（不知道是不是VS特有的安全检查）
	c->Data = 3;	c->Left = e;	c->Right = f;
	d->Data = 4;	d->Left = NULL;	d->Right = NULL;//必须
	e->Data = 5;	e->Left = NULL;	e->Right = NULL;//必须
	f->Data = 6;	f->Left = NULL;	f->Right = NULL;//必须
	inOrderTraversal(a);	printf("  <---中序遍历\n");
	inOrderTraversalStack(a);	printf("  <---借助堆栈实现中序遍历（不用递归）\n");
	preOrderTraversal(a);	printf("  <---先序遍历\n");
	preOrderTraversalStack(a);	printf("  <---借助堆栈实现先序遍历（不用递归）\n");
	postOrderTraversal(a);	printf("  <---后序遍历\n");
	//testQueue();//调试完成，结果符合预期
	printf("树的高度：%d\n", getTreeHeight(a));
	levelOrderTraversal(a);	printf("  <---借助队列实现层序遍历\n");
	levelOrderTraversalArray(a);	printf("  <---层序遍历-数组版\n");

	/*改成二叉搜索树，
              a3
             /  \
           b2   c5
          /    /  \
        d1    e4   f6
	*/
	a->Data = 3;	b->Data = 2;	c->Data = 5;
	d->Data = 1;	e->Data = 4;	f->Data = 6;

	int num = 7;
	TreePosition target = Find(num, a);	
	if (target){
		printf("找%d？有的！\n", target->Data);
	}
	else{
		printf("找%d？没有！\n", num);
	}

	int num_v2 = 4;
	TreePosition target_v2 = Find_v2(num_v2, a);
	if (target_v2){
		printf("找%d？有的！\n", target_v2->Data);
	}
	else{
		printf("找%d？没有！\n", num_v2);
	}
	printf("最大值%d，最小值%d\n", (FindMax(a))->Data, (FindMin(a))->Data);
	

	return 0;
}