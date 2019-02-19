#include <stdio.h>
#include <malloc.h>

typedef struct node{
    int value;
    struct node *next;
}node;

int *create_stk(int value){
    node *node;
    node = malloc(sizeof(node));
    node->value = value;
    node->next = NULL;
    return &node;
}

int *push(node *node,int value,int *past) {
    malloc(sizeof(node));
    node->value = value;
    node->next = &*past;
    return &node;
}

int *pop(node *node){
    int *next = node->next;
    printf("%d", node->value);
    free(node);
    return next;
}

int main(){
    int stk = create_stk(8);
    node node2;
    int *pointer2 = &node2;
    stk = push(pointer2, 2, stk);
    pop(stk);
}