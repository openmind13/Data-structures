#ifndef TREE_H
#define TREE_H


typedef struct Node node_t;
typedef struct Tree tree_t;

extern void tree_prefix_print(tree_t *tree);
extern void tree_infix_print(tree_t *tree);
extern void tree_postfix_print(tree_t *tree);

extern tree_t *new_tree();
extern int    clear_tree(tree_t *tree);
extern int add_node(tree_t *tree, int value);


#endif