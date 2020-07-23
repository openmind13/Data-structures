#include <stdio.h>
#include <stdlib.h>

#include "tree.h"


typedef struct Node {
    int value;
    struct Node *left_node;
    struct Node *right_node;
} node_t;


typedef struct Tree {
    node_t *root_node;
    unsigned int depth;
} tree_t;


extern void prefix_tree_print(tree_t *tree) {
    prefix_print(tree->root_node);
}


extern void infix_tree_print(tree_t *tree) {
    infix_print(tree->root_node);
}


extern void postfix_tree_print(tree_t *tree) {
    postfix_print(tree->root_node);
}


static void prefix_print(node_t *node) {
    if(node != NULL) {
        printf("%d\n", node->value);
        prefix_print(node->left_node);
        prefix_print(node->right_node);
    }
}


static void infix_print(node_t *node) {
    if(node != NULL) {
        infix_print(node->left_node);
        printf("%d\n", node->value);
        infix_print(node->right_node);
    }
}


static void postfix_print(node_t *node) {
    if(node != NULL) {
        postfix_print(node->left_node);
        postfix_print(node->right_node);
        printf("%d\n", node->value);
    }
}


int main() {
    return 0;
}
