#include <stdio.h>
#include <stdlib.h>

#include "linked_list/list.h"
#include "binary_tree/tree.h"
#include "vector/vector.h"
#include "stack/stack.h"
#include "queue/queue.h"


void test_linked_list();
void test_binary_tree();


int main() {
    
    // test_linked_list();
    test_binary_tree();
    
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