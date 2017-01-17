/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>
#include <malloc.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head != NULL) {//不加有可能出 NullPointerException...
        ListNode* tmp = head;
        while (tmp->next != NULL) {
            if (tmp->val == tmp->next->val) {
                tmp->next = tmp->next->next;
            }
            else {
                tmp = tmp->next;
            }
        }
    }
    return head;
}

int main(){
    ListNode* n1 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* n2 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* n3 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* n4 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* n5 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* n6 = (ListNode*)malloc(sizeof(ListNode));
    n1->val = 1;    
    n2->val = 2;
    n3->val = 2;
    n4->val = 4;
    n5->val = 6;
    n6->val = 6;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = NULL;//...真的应该这样初始化吗？？？？？

    n1 = deleteDuplicates(n1);
    ListNode* n = n1;
    while (1){
        printf("%d",n->val);
        if (n->next){
            n = n->next;
            printf("->");
        }
        else{
            break;
        }
    }
    printf("\n");
}