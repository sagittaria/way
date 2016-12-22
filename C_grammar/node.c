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
void print(List* list);

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

    print(&list);

    int isFound = 0;//search for a number ( if it's in linked-list)
    scanf("%d",&number);
    Node *p;
    for(p=list.head; p; p=p->next){
        if(p->value == number){
            printf("found!\n");
            isFound=1;
            break;
        }
    }
    if(!isFound){
        printf("not found.\n");
    }


    scanf("%d",&number);
    Node *q;//delete from linked-list
    for(q=NULL, p=list.head; p; q=p, p=p->next){
        if(p->value == number){
            if(q){//如果要删的是第一个元素，此时q=NULL
                q->next = p->next;
            }else{
                list.head = p->next;
            }
            free(p);
            break;
        }
    }
    printf("after deletion: ");
    print(&list);


    for(p = list.head; p; p=q){//clear linked-list
        q = p->next;
        free(p);
    }

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

void print(List* pList){
    Node *p;//traverse linked-list
    for(p=pList->head; p; p=p->next){
        printf("%d\t", p->value);
    }
    printf("\n");
}