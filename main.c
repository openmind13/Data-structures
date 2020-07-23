#include <stdio.h>
#include <stdlib.h>

#include "linked_list/list.h"


void linked_list_test();


int main() {
    
    linked_list_test();
    
    
    return 0;
}


void linked_list_test() {
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