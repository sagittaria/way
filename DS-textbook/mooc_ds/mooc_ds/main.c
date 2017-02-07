#include<stdio.h>
#include<stdlib.h>
#include "binTree.h"

int main(){
	/*���������������Ľṹ
                a1
               /  \
              b2   c3
             /    /  \
           d4    e5   f6
	*/
	BinTree a = (BinTree)malloc(sizeof(struct TNode));//��Ҫд��sizeof(BinTree)�������Դ���
	BinTree b = (BinTree)malloc(sizeof(struct TNode));
	BinTree c = (BinTree)malloc(sizeof(struct TNode));
	BinTree d = (BinTree)malloc(sizeof(struct TNode));
	BinTree e = (BinTree)malloc(sizeof(struct TNode));
	BinTree f = (BinTree)malloc(sizeof(struct TNode));
	a->Data = 1;	a->Left = b;	a->Right = c;
	b->Data = 2;	b->Left = d;	b->Right = NULL;//�����ʼ����NULL�����������֪���ǲ���VS���еİ�ȫ��飩
	c->Data = 3;	c->Left = e;	c->Right = f;
	d->Data = 4;	d->Left = NULL;	d->Right = NULL;//����
	e->Data = 5;	e->Left = NULL;	e->Right = NULL;//����
	f->Data = 6;	f->Left = NULL;	f->Right = NULL;//����
	inOrderTraversal(a);	printf("  <---�������\n");
	inOrderTraversalStack(a);	printf("  <---������ջʵ��������������õݹ飩\n");
	preOrderTraversal(a);	printf("  <---�������\n");
	preOrderTraversalStack(a);	printf("  <---������ջʵ��������������õݹ飩\n");
	postOrderTraversal(a);	printf("  <---�������\n");
	//testQueue();//������ɣ��������Ԥ��
	printf("���ĸ߶ȣ�%d\n", getTreeHeight(a));
	levelOrderTraversal(a);	printf("  <---��������ʵ�ֲ������\n");
	levelOrderTraversalArray(a);	printf("  <---�������-�����\n");

	/*�ĳɶ�����������
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
		printf("��%d���еģ�\n", target->Data);
	}
	else{
		printf("��%d��û�У�\n", num);
	}

	int num_v2 = 4;
	TreePosition target_v2 = Find_v2(num_v2, a);
	if (target_v2){
		printf("��%d���еģ�\n", target_v2->Data);
	}
	else{
		printf("��%d��û�У�\n", num_v2);
	}
	printf("���ֵ%d����Сֵ%d\n", (FindMax(a))->Data, (FindMin(a))->Data);

	insert(3, a);
	preOrderTraversal(a);	printf("  <---����3֮���������\n");
	insert(14, a);
	preOrderTraversal(a);	printf("  <---����14֮���������\n");
	insert(21, a);
	preOrderTraversal(a);	printf("  <---����21֮���������\n");
	insert(31, a);
	preOrderTraversal(a);	printf("  <---����31֮���������\n");
	/*����ڵ��                  ɾ��14                  ɾ��d1                    ɾ��19
          a7                         a7                     a7                       a7
        /    \                     /    \                  /   \                    /  \
      b5      c19                b5     c19              b5    c19                b5   c21
     /       /   \               /     /    \            /     /  \              /     /  \
   d1      e12    f26          d1    e12    f26         3   e12   f26           3    e12   f26
    \       \     /  \          \           /  \                  /  \                       \
     3      14   21   31         3         21   31               21   31                      31
	*/
	delete(14, a);
	preOrderTraversal(a);	printf("  <---ɾ��14֮���������\n");
	delete(1, a);
	preOrderTraversal(a);	printf("  <---ɾ��1֮���������\n");
	delete(19, a);
	preOrderTraversal(a);	printf("  <---ɾ��19֮���������\n");
	delete(20, a);//��û�ҵ�Ҫɾ����Ԫ��20��

	return 0;
}