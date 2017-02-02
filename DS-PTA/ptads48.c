//���ݽṹ���㷨��Ŀ�������ģ� 4-8 ��������߶�
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
	int Data;
	BinTree Left;
	BinTree Right;
};

int GetHeight(BinTree BT){
	int hl, hr, maxh;
	if (BT){
		hl = GetHeight(BT->Left);
		hr = GetHeight(BT->Right);
		maxh = (hl>hr) ? hl : hr;
		return maxh + 1;
	}
	else{
		return 0;
	}
}