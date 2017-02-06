typedef int ElementType;
typedef struct TNode* TreePosition;
typedef TreePosition BinTree;

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
int getTreeHeight(BinTree BT);
void levelOrderTraversal(BinTree BT);
void levelOrderTraversalArray(BinTree BT);
TreePosition Find(ElementType x, BinTree bst);
TreePosition Find_v2(ElementType x, BinTree bst);
TreePosition FindMin(BinTree bst);
TreePosition FindMax(BinTree bst);
TreePosition insert(ElementType x, BinTree bst);