//
// Created by makar on 23.02.19.
#pragma once

typedef struct node node;
typedef struct queue  myqueue;

myqueue *create_queue(int value);
myqueue *create_queue(int value);
void push(myqueue *queue1, int value);
int pop(myqueue *queue);