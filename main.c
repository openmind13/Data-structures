#include <stdio.h>
#include <stdlib.h>

#include "linked_list/list.h"
#include "binary_tree/tree.h"
#include "vector/vector.h"
#include "stack/stack.h"
#include "queue/queue.h"


void test_linked_list();
void test_binary_tree();
void test_stack();
void test_vector();
void test_queue();


int main() {
    
    // test_linked_list();
    test_binary_tree();

    //test_stack();
    
    return 0;
}


void test_linked_list() {
    printf("testing linked list\n");
    printf("-------------------------------------------------\n\n");

    list_t *mylist = new_list();

    add_item(mylist, 1);
    add_item(mylist, 2);
    add_item(mylist, 3);
    add_item(mylist, 4);
    add_item(mylist, 5);
    add_item(mylist, 6);
    add_item(mylist, 7);

    print_list(mylist);

    insert_item(mylist, 2, 20);
    print_list(mylist);

    clear_list(mylist);
}


void test_binary_tree() {
    printf("\n\ntesting binary tree\n");
    printf("------------------------------------------------\n\n");

    tree_t *tree = new_tree();

    add_node(tree, 50);
    add_node(tree, 100);
    add_node(tree, 10);

    tree_prefix_print(tree);

    clear_tree(tree);
    printf("---------------\n\n");

    tree_prefix_print(tree);

    printf("-------------\n\n");
    add_node(tree, 1000);
    tree_prefix_print(tree);

    clear_tree(tree);
}


void test_stack() {
    printf("\n\ntesting stack\n");
    printf("------------------------------\n\n");

    stack_t *stack = new_stack(10);
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 500);

    print_stack(stack);

    clear_stack(stack);
}


void test_vector() {

}


void test_queue() {

}