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
              a7
             /  \
           b5   c19
          /    /   \
        d1    e12   f26
	*/
	a->Data = 7;	b->Data = 5;	c->Data = 19;
	d->Data = 1;	e->Data = 12;	f->Data = 26;

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

	insert(3, a);
	preOrderTraversal(a);	printf("  <---插入3之后，先序遍历\n");
	insert(14, a);
	preOrderTraversal(a);	printf("  <---插入14之后，先序遍历\n");
	insert(21, a);
	preOrderTraversal(a);	printf("  <---插入21之后，先序遍历\n");
	insert(31, a);
	preOrderTraversal(a);	printf("  <---插入31之后，先序遍历\n");
	/*插入节点后                  删除14                  删除d1                    删除19
          a7                         a7                     a7                       a7
        /    \                     /    \                  /   \                    /  \
      b5      c19                b5     c19              b5    c19                b5   c21
     /       /   \               /     /    \            /     /  \              /     /  \
   d1      e12    f26          d1    e12    f26         3   e12   f26           3    e12   f26
    \       \     /  \          \           /  \                  /  \                       \
     3      14   21   31         3         21   31               21   31                      31
	*/
	delete(14, a);
	preOrderTraversal(a);	printf("  <---删除14之后，先序遍历\n");
	delete(1, a);
	preOrderTraversal(a);	printf("  <---删除1之后，先序遍历\n");
	delete(19, a);
	preOrderTraversal(a);	printf("  <---删除19之后，先序遍历\n");
	delete(20, a);//“没找到要删除的元素20”

	return 0;
}