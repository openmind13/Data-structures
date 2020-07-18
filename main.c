#include <stdio.h>
#include <stdlib.h>

#include "linked_list/list.h"


int main() {
    printf("list program\n");
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

    //printf("insert item return = %d\n", insert_item(mylist, 4, 20));
    insert_item(mylist, 2, 20);
    //printf("get item = %d\n", get_item(mylist, 4));
    print_list(mylist);

    // add_item(mylist, 500);
    // print_list(mylist);

    clear_list(mylist);
    
    return 0;
}