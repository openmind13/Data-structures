#include <stdio.h>
#include <stdlib.h>

#include "tree.h"


typedef struct Node {
    int value;
    struct Node *left_node;
    struct Node *right_node;
} node_t;

typedef struct Tree {
    struct Node *root_node;
} tree_t;


extern tree_t *new_tree();
extern int add_node(tree_t *tree, int value);

extern void tree_print(tree_t *tree);
extern void tree_prefix_print(tree_t *tree);
extern void tree_infix_print(tree_t *tree);
extern void tree_postfix_print(tree_t *tree);


static node_t *find_node(node_t *node, int value);
static int clear_recurse(node_t *node);

static void prefix_print(node_t *node);
static void infix_print(node_t *node);
static void postfix_print(node_t *node);


extern tree_t *new_tree() {
    tree_t *tree = (tree_t *) malloc(sizeof(tree_t));
    if(tree == NULL) {
        printf("failed to allocate memory for new tree\n");
        return NULL;
    }
    tree->root_node = NULL;
    return tree;
}

// < 0 - error
extern int add_node(tree_t *tree, int value) {
    if(tree == NULL) {
        printf("tree is NULL\n");
        return -1;
    }

    // node_t *node = tree->root_node;
    if(tree->root_node == NULL) {
        tree->root_node = (node_t *) malloc(sizeof(node_t));
        if(tree->root_node == NULL) {
            printf("failed to allocate memory for node_t\n");
            return -1;
        }

        tree->root_node->value = value;
        tree->root_node->left_node = NULL;
        tree->root_node->right_node = NULL;

        return 0;
    } else {
        // if not first
        find_node(tree->root_node, value);
    }
    return 0;
}


static node_t *find_node(node_t *node, int value) {
    if(value < node->value && node->left_node != NULL) {
        node = find_node(node->left_node, value);
    }
    else if(value > node->value && node->right_node != NULL) {
        node = find_node(node->right_node, value);
    }
    else if(value < node->value && node->left_node == NULL) {
        node_t *new_node = (node_t *) malloc(sizeof(node_t));
        if(new_node == NULL) {
            printf("failed to allocate memory for node_t\n");
            return NULL;
        }
        new_node->value = value;
        new_node->left_node = NULL;
        new_node->right_node = NULL;
        node->left_node = new_node;
    }
    else if(value > node->value && node->right_node == NULL) {
        node_t *new_node = (node_t *) malloc(sizeof(node_t));
        if(new_node == NULL) {
            printf("failed to allocate memory for node_t\n");
            return NULL;
        }
        new_node->value = value;
        new_node->left_node = NULL;
        new_node->right_node = NULL;
        node->right_node = new_node;  
    }
    else {
        printf("already in tree\n");
        return NULL;
    }
    return node;
}

// < 0 - error
extern int clear_tree(tree_t *tree) {
    if(tree == NULL) {
        printf("tree is NULL\n");
        return -1;
    }

    if(tree->root_node == NULL) {
        printf("tree is empty\n");
        return -1;
    }

    node_t *node = tree->root_node;
    clear_recurse(tree->root_node);
    // tree->root_node = NULL;
    return 0;
}


static int clear_recurse(node_t *node) {
    if(node != NULL) {
        if(node->left_node != NULL)
            clear_recurse(node->left_node);
            
        if(node->right_node != NULL)
            clear_recurse(node->right_node);
        
        free(node);
        node = NULL;
        return 0;
    }
    return 0;
}


extern void tree_print(tree_t *tree) {
    if(tree == NULL) {
        printf("tree is NULL\n");
        return;
    }
    infix_print(tree->root_node);
}


extern void tree_prefix_print(tree_t *tree) {
    if(tree == NULL) {
        printf("tree is NULL\n");
        return;
    }
    prefix_print(tree->root_node);
}


extern void tree_infix_print(tree_t *tree) {
    if(tree == NULL) {
        printf("tree is NULL\n");
        return;
    }
    infix_print(tree->root_node);
}


extern void tree_postfix_print(tree_t *tree) {
    if(tree == NULL) {
        printf("tree is NULL\n");
        return;
    }
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