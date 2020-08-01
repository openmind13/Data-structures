#ifndef STACK_H
#define STACK_H


typedef struct Stack stack_t;

extern stack_t *new_stack(unsigned int cap);
extern int clear_stack(stack_t *stack);

extern int push(stack_t *stack, int value);
int print_stack(stack_t *stack);


#endif