#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct _node
// {
//     int value;
//     struct _node *next;
// } Node;

typedef struct _list{
    Node* head;
} List;

void add(List* pList, int number);

int main()
{
    List list;
    list.head = NULL;
    int number;
    do{
        scanf("%d", &number);
        if(number != -1){
            add(&list, number);
        }
    } while (number != -1);

    return 0;
}

void add(List* pList, int number){
    // add to linked-list
    Node *p = (Node *)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    // find the last
    Node *last = pList->head;
    if(last != NULL){//if p is NOT the first node
        while(last->next != NULL){
            last = last->next;
        }
    // attach
        last->next = p;
    }else{//else if p is the first node
        pList->head = p;
    }
}