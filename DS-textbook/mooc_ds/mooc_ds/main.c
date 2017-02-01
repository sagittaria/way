#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
#include "binTree.h"

int main(){
	BinTree a = (BinTree)malloc(sizeof(struct TNode));//��Ҫд��sizeof(BinTree)�������Դ���
	BinTree b = (BinTree)malloc(sizeof(struct TNode));
	BinTree c = (BinTree)malloc(sizeof(struct TNode));
	a->Data = 1;
	a->Left = b;
	a->Right = c;
	b->Data = 2;
	b->Left = NULL;//�����ʼ����NULL�����������֪���ǲ���VS���еİ�ȫ��飩
	b->Right = NULL;//����
	c->Data = 3;
	c->Left = NULL;//����
	c->Right = NULL;//����
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

	return 0;
}