typedef int ElementType;
typedef struct TNode* Position;
typedef Position BinTree;

struct TNode
{
	ElementType Data;
	BinTree Left;
	BinTree Right;
};

void inOrderTraversal(BinTree BT);
void preOrderTraversal(BinTree BT);
void postOrderTraversal(BinTree BT);
void inOrderTraversalStack(BinTree BT);
void preOrderTraversalStack(BinTree BT);