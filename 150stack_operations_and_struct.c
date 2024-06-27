#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * Stack example:
 * 
 *  8
 *  7
 *  4
 *  9
 *  2   collection of size 5, top of the stack is 8, bottom of the stack is 2.
 * if you pop an item, it will be 7,4,9,2. with 7 at the top. Stack size will be 4.
 * After the pop, if you push 5, it will be 5,7,4,9,2 with 5 at the top. Stack size will be 5.
 * 
 * stack operations:
 * -Check if a stack is empty
 * -Check if a stack has reached max capacity
 * -Peek at the top item without removing it(popping it), and return the peeked item.
 * -create and destroy a stack
 * 
 * creating a data structure on the heap mimics the behaviour of the stack, providing LIFO access
 */

typedef struct {
    int *collection;
    int capacity;
    int size;
} Stack;

Stack *create_stack(int capacity);
void destroy_stack(Stack *stack);
bool is_full(Stack *stack);
bool is_empty(Stack *stack);
bool pop(Stack *stack, int *item);
bool push(Stack *stack, int item);
bool peek(Stack *stack, int *item);

int main() {
    Stack *stack = create_stack(5);
    if (stack== NULL) {
        printf("Error\n");
        return 1;
    }
    if (is_empty(stack)) {
        printf("stack is empty\n");
    }
    push(stack, 2);
    printf("Stack size: %d\n", stack->size);
    push(stack, 2);
    push(stack, 2);
    push(stack, 2);
    push(stack, 8);

    if (is_full(stack)) printf("Stack is full\n");
    printf("Stack size now: %d\n", stack->size);

    bool try_push= push(stack, 5);
    if (try_push== false) {
        printf("push failed\n");
    }
    int peek_val =0;
    peek(stack, &peek_val);
    printf("peek val: %d\n", peek_val);

    int pop_val=0;
    for (int i=0; i<5; i++) {
        pop(stack, &pop_val);
        printf("Popped value: %d\n", pop_val);
    }

    bool try_pop = pop(stack, &pop_val);
    if (try_pop==false) printf("oh no popped failed man");
    destroy_stack(stack);
    return 0;
}

Stack *create_stack(int capacity) {
    if (capacity <= 0) {
        return NULL;
    }
    Stack *stack = malloc(sizeof(Stack));
    if (stack==NULL) {
        return NULL;
    }
    //the Dot(.)operator is used to normally access members of a structure or union
    //the arrow(->)operator is used to access the members of a structure or union using pointers
    stack->collection = malloc(sizeof(int)*capacity);
    if (stack->collection == NULL) {
        free(stack);
        return NULL;
    }
    stack->capacity = capacity;
    stack->size =0;

    return stack;
}

void destroy_stack(Stack *stack) {
    free(stack->collection);
    free(stack);
}

bool is_full(Stack *stack) {
    return stack->capacity == stack-> size;
}

bool is_empty(Stack *stack) {
    return stack->size==0;
}

bool push(Stack *stack, int item) {
    if (is_full(stack)) {
        return false;
    }
    stack->collection[stack->size]=item;
    stack->size++;

    return true;
}

bool peek(Stack *stack, int *item) {
    if (is_empty(stack)) return false;
    //dereferencing the pointer
    *item= stack->collection[stack->size-1];
    return true;
}
bool pop(Stack *stack, int *item) {
    if (is_empty(stack)) return false;
    stack->size--;
    *item = stack->collection[stack->size];
    return true;
}
