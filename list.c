#include <stdio.h>
#include <stdlib.h>

#include "list.h"


typedef struct Node {
    int value;
    struct Node *next_node;
    struct Node *prev_node;
} node_t;


typedef struct List {
    int node_count;
    node_t *first_node;
    node_t *last_node;
} list_t;


extern  list_t   *new_list();
extern int print_list(list_t *list);
extern int append_item(list_t *list, int value);
extern int pop_item(list_t *list, int index);
extern int pop_last_item(list_t *list);
extern int get_item(list_t *list, int index);

static node_t *_search_from_the_begining(list_t *list, int index);
static node_t *_search_from_the_end(list_t *list, int index);


extern list_t *new_list() {
    list_t *list = (list_t *) malloc(sizeof(list_t));
    if(list == NULL) {
        printf("failed to allocate memory for list struct\n");
        return NULL;
    }

    list->first_node = NULL;
    list->last_node = NULL;
    list->node_count = 0;

    return list;
}


// return count of delete items
// if < -1 - error
extern int clear_list(list_t *list) {
    if(list == NULL) {
        printf("list is nil !!!\n");
        return -1; // bad data
    }

    int deleted = 0;
    node_t *current_node = list->first_node;
    node_t *next_node = NULL;

    while(current_node != NULL) {
        next_node = current_node->next_node;
        free(current_node);
        current_node = NULL;

        current_node = next_node;
        
        list->node_count--;
        deleted++;
    }

    current_node = NULL;
    next_node = NULL;

    list->first_node = NULL;
    list->last_node = NULL;
    list->node_count = 0;

    return deleted;
}


// return count of printing items
extern int print_list(list_t *list) {
    if(list == NULL) {
        printf("list is nil !!!\n");
        return -1; // bad data
    }

    if(list->node_count == 0 && list->first_node == NULL && list->last_node == NULL) {
        // list is empty
        printf("NULL\n");
        return 0;
    }

    int printed_items = 0;
    node_t *current_node = list->first_node;
    while(current_node != NULL) {
        printed_items++;
        // for pretty printing
        if(printed_items < list->node_count) {
            printf("%d <-> ", current_node->value);
        } else {
            printf("%d", current_node->value);
        }
        current_node = current_node->next_node;
    }
    printf("\n");

    return printed_items;
}


// push_item returns current count of items in list
// if < 0 - error
extern int append_item(list_t *list, int value) {
    if(list == NULL) {
        printf("list is null !!!\n");
        return -1; // bad data
    }

    // if first item in list
    if(list->first_node == NULL && list->last_node == NULL && list->node_count == 0) {
        node_t *new_node = (node_t *) malloc(sizeof(node_t));
        if(new_node == NULL) {
            printf("failed to allocate memory for first node\n");
            return -1;
        }

        new_node->value = value;
        new_node->next_node = NULL;
        new_node->prev_node = NULL;

        list->first_node = new_node;
        list->last_node = new_node;
        list->node_count++;

        return list->node_count;
    }

    // if not first item in list
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    if(new_node == NULL) {
        printf("failed to allocate memory for %d node\n", list->node_count++);
        return -1;
    }

    list->last_node->next_node = new_node;

    new_node->prev_node = list->last_node;
    new_node->next_node = NULL;
    new_node->value = value;

    list->last_node = new_node;
    list->node_count++;

    return list->node_count;
}


// return item and remove it from list
// if < 0 - error
extern int pop_item(list_t *list, int index) {
    if(list == NULL) {
        printf("list is null !!!\n");
        return -1; // bad data
    }

    if(index > list->node_count) {
        printf("Get out of range. List length = %d\n", list->node_count);
        return -1;
    }

    
}


// return item and remove it from list
// if < 0 - error
extern int pop_last_item(list_t *list) {
    if(list == NULL) {
        printf("list is null !!!\n");
        return -1; // bad data
    }

    int value = list->last_node->value;
    

    node_t *current_node = list->first_node;
    node_t *next_node = list->first_node->next_node;
    
}


// return item
// if error - return -1
extern int get_item(list_t *list, int index) {
    if(list == NULL) {
        printf("list is null !!!");
        return -1;
    }

    if(list->node_count == 0 && list->first_node == NULL && list->last_node == NULL) {
        // list is empty
        printf("NULL\n");
        return -1;
    }

    if(index > list->node_count) {
        printf("Get out of range. List length = %d\n", list->node_count);
        return -1;
    }

    node_t *required_node = NULL;
    if(index <= list->node_count) {
        required_node = _search_from_the_begining(list, index);
        return required_node->value;
    } else {
        required_node = _search_from_the_end(list, index);
        return required_node->value;
    }
}


static node_t *_search_from_the_begining(list_t *list, int index) {
    
    return NULL;
}


static node_t *_search_from_the_end(list_t *list, int index) {

    return NULL;
}
