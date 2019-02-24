//
// Created by makar on 24.02.19.
//
#pragma once

typedef struct node node;

node *create_stk(int value);
node *push_stk(node *stack, int value);
node *pop_stk(node *stack, int *result);