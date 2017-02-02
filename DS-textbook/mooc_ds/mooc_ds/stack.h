typedef struct TNode* SNodeType;
typedef struct SNode* PtrToSNode;
typedef PtrToSNode Stack;

struct SNode
{
	SNodeType Data;
	PtrToSNode Next;
};

Stack CreateStack();
int isStackEmpty(Stack S);
int push(Stack S, SNodeType X);
SNodeType pop(Stack S);