#include <stdio.h>
#include <malloc.h>

#include "node.h"

typedef struct node{
    int value;
    struct node *next;
}node;

node *create_stk(int value){
    node *head = malloc(sizeof(node));
    head->value = value;
    head->next = NULL;
    return head;
}

node *push_stk(node *stack, int value) {
    node *head = malloc(sizeof(node));
    head->value = value;
    head->next = stack;
    return head;
}


node *pop_stk(node *stack, int *result){

    node *next = stack->next;
    *result = stack->value;
    free(stack);
    return next;
}

int main(){
    myqueue *queue = create_queue(5);
    push(queue, 10);
    printf("%d %d", pop(queue), pop(queue));
}