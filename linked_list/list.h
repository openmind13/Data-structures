#ifndef LIST_H
#define LIST_H


typedef struct Node node_t;
typedef struct List list_t;

extern list_t   *new_list();
extern int      clear_list(list_t *list);
extern int      print_list(list_t *list);
extern int      add_item(list_t *list, int value);
extern int      pop_item(list_t *list, int index);
extern int      pop_last_item(list_t *list);
extern int      get_item(list_t *list, int index);
extern int      insert_item(list_t *list, int index, int value);

static node_t *_search_from_the_begining(list_t *list, int index);
static node_t *_search_from_the_end(list_t *list, int index);


#endif