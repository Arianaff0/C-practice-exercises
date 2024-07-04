#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


//   head     tail
//     |       |
// 4   5-> 6-> 7-> null   8->null     7 would be the back of a queue (first in first out order) enqueue, dequeue, peek


typedef struct Node {
    int value;
    struct Node *next;
}Node;

typedef struct {
    Node *head;
    Node *tail;
    int size;
} Queue;

Queue *create_queue();
int size(Queue *queue);
bool is_empty(Queue *queue);
int peek(Queue *queue, bool *status);
void enqueue(Queue *queue, int value);
int dequeue(Queue *queue, bool *status);
void destroy_queue(Queue *queue);

int main() {
    Queue *queue = create_queue();
    if (is_empty(queue)) printf("Queue is empty\n");

    enqueue(queue, 4);
    if (!is_empty(queue)) printf("Queue is not empty\n");
    enqueue(queue, 5);
    enqueue(queue, 6);

    printf("Queue size: %d\n", size(queue));

    bool status = false;
    int value =0;
    value = peek(queue, &status);
    if (status) printf("peek success: %d\n",value );

    value = dequeue(queue, &status);
    if (status) printf("dequeue success: %d\n", value);

        value = peek(queue, &status);
    if (status) printf("peek success: %d\n",value );

    value = dequeue(queue, &status);
    if (status) printf("dequeue success: %d\n", value);

            value = peek(queue, &status);
    if (status) printf("peek success: %d\n",value );

    value = dequeue(queue, &status);
    if (status) printf("dequeue success: %d\n", value);

            value = peek(queue, &status);
    if (!status) printf("peek unsuccess\n");

    value = dequeue(queue, &status);
    if (!status) printf("dequeue unsuccess\n");
    destroy_queue(queue);
    return 0;
}

Queue *create_queue() {
    Queue *queue = malloc(sizeof(Queue));
    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;

    return queue;
}

int size(Queue *queue) {
    return queue->size;
}
bool is_empty(Queue *queue) {
    return (queue->size ==0);
}

int peek(Queue *queue, bool *status) {
    if (is_empty(queue)) {
        *status = false;
        return -1;
    }
    *status = true;
    return queue->head->value;
}
void enqueue(Queue *queue, int value) {
    Node *newNode = malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;

    if (is_empty(queue)) {
        queue->head = newNode;
        queue->tail = newNode;
    }
    else {
        queue->tail->next =  newNode;
        queue->tail = newNode;
    }
    queue->size++;
}

int dequeue(Queue *queue, bool *status) {
    if (is_empty(queue)) {
        *status = false;
        // queue->size = 0;
        return -1;
    }
    *status = true;
    int value = queue->head->value;
    //delete Node
    Node *oldHead = queue->head;

    if (queue->size ==1) {
        queue->head=NULL;
        queue->tail=NULL;
    }
    else {
        queue->head = queue->head-> next;
    }
    free(oldHead);
    queue->size--;
    return value;
}
void destroy_queue(Queue *queue) {
    Node *currentNode = queue->head;
    while (currentNode != NULL) {
        Node *temp = currentNode;
        currentNode = currentNode ->next;
        free(temp);
    }
    free(queue);
    queue= NULL;
}