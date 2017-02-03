#include<stdio.h>
#include<stdlib.h>
#include "binTree.h"

int main(){
	/*���������������Ľṹ
				a1
			   /  \
			 b2   c3
			 /    / \
		   d4   e5   f6
	*/
	BinTree a = (BinTree)malloc(sizeof(struct TNode));//��Ҫд��sizeof(BinTree)�������Դ���
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
	b->Right = NULL;//�����ʼ����NULL�����������֪���ǲ���VS���еİ�ȫ��飩
	c->Data = 3;
	c->Left = e;
	c->Right = f;
	d->Data = 4;
	d->Left = NULL;//����
	d->Right = NULL;//����
	e->Data = 5;
	e->Left = NULL;//����
	e->Right = NULL;//����
	f->Data = 6;
	f->Left = NULL;//����
	f->Right = NULL;//����
	inOrderTraversal(a);
	printf("  <---�������\n");
	inOrderTraversalStack(a);
	printf("  <---������ջʵ��������������õݹ飩\n");
	preOrderTraversal(a);
	printf("  <---�������\n");
	preOrderTraversalStack(a);
	printf("  <---������ջʵ��������������õݹ飩\n");
	postOrderTraversal(a);
	printf("  <---�������\n");
	//testQueue();//������ɣ��������Ԥ��
	printf("���ĸ߶ȣ�%d\n", getTreeHeight(a));
	levelOrderTraversal(a);
	printf("  <---��������ʵ�ֲ������\n");
	levelOrderTraversalArray(a);
	printf("  <---�������-�����\n");
	return 0;
}