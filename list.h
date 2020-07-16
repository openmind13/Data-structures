#ifndef LIST_H_
#define LIST_H_


typedef struct Node node_t;
typedef struct List list_t;

extern list_t   *new_list();
extern int      clear_list(list_t *list);
extern int      print_list(list_t *list);
extern int      append_item(list_t *list, int value);
extern int      pop_item(list_t *list, int index);
extern int      pop_last_item(list_t *list);
extern int      get_item(list_t *list, int index);

static node_t *_search_from_the_begining(list_t *list, int index);
static node_t *_search_from_the_end(list_t *list, int index);


#endif