#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct _node
// {
//     int value;
//     struct _node *next;
// } Node;

int main()
{
    Node *head = NULL;
    int number;
    do{
        scanf("%d", &number);
        if(number != -1){
            // add to linked-list
            Node *p = (Node *)malloc(sizeof(Node));
            p->value = number;
            p->next = NULL;
            // find the last
            Node *last = head;
            if(last != NULL){//if p is NOT the first node
                while(last->next != NULL){
                    last = last->next;
                }
                // attach
                last->next = p;
            }else{//else if p is the first node
                head = p;
            }
        }
    } while (number != -1);

    return 0;
}