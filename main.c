#include <stdio.h>
#include <malloc.h>

#include "node.h"
#include "stack.h"


int main(){
    myqueue *queue = create_queue(5);
    push(queue, 10);
    printf("%d %d", pop(queue), pop(queue));
}