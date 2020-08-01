#include <stdio.h>
#include <stdlib.h>

#include "stack.h"


typedef struct Stack {
    unsigned int cap; // capacity
    unsigned int len; // length
    int *buff;
} stack_t;


extern stack_t *new_stack(unsigned int cap);
extern int clear_stack(stack_t *stack);

int push(stack_t *stack, int value);
int print_stack(stack_t *stack);


stack_t *new_stack(unsigned int cap) {
    stack_t *stack = (stack_t *) malloc(sizeof(stack_t));
    if(stack == NULL) {
        printf("failed to allocate memory for stack_t\n");
        return NULL;
    }
    stack->cap = cap;
    stack->len = 0;
    stack->buff = (int *) malloc(sizeof(int) * cap);
    if(stack->buff == NULL) {
        printf("lack of memory for %d values\n", cap);
        return NULL;
    }
    return stack;
}


extern int clear_stack(stack_t *stack) {
    free(stack->buff);
    stack->buff = NULL;
    stack->len = 0;
    stack->cap = 0;
    free(stack);
    stack = NULL;
    return 0;
}

// if < 0 - error
int push(stack_t *stack, int value) {
    if(stack == NULL) {
        printf("stack is NULL\n");
        return -1;
    }
    
    if(stack->len >= stack->cap) {
        stack->buff = (int *) realloc(stack->buff, (stack->cap + 10));
        if(stack->buff == NULL) {
            printf("failed to allocate memory for values\n");
            return -1;
        }
        stack->cap += 10;
    }

    stack->buff[stack->len] = value;
    stack->len++;

    return 0;
}


int print_stack(stack_t *stack) {
    for(int i = 0; i < (sizeof(stack->buff) / sizeof(int)); i++) {
        printf("%d\n", stack->buff[i]);
    }
}


int pop(stack_t *stack) {

}
