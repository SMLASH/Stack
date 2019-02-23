#include "node.h"
#include <malloc.h>

typedef struct node{
    int value;
    struct node *next;
}node;

typedef struct queue{
    node *head;
    node *tail;
} myqueue;


myqueue *create_queue(int value){
    myqueue *queue = malloc(sizeof(myqueue));
    node *head = malloc(sizeof(node));
    head->value = value;
    head->next = NULL;
    queue->head = head;
    queue->tail = head;
    return queue;
}

void push(myqueue *queue1, int value){
    node *tail = malloc(sizeof(node));
    tail->value = value;
    queue1->tail->next = tail;
    queue1->tail = tail;
}

int pop(myqueue *queue){
    int temp_value = queue->head->value;
    node *temp_next = queue->head->next;
    free(queue->head);
    queue->head = temp_next;
    return temp_value;
}