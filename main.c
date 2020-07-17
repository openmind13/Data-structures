#include <stdio.h>
#include <stdlib.h>

#include "list.h"


int main() {
    printf("list program\n");
    printf("-------------------------------------------------\n\n");

    // size_t hello;
    // int hello2;

    // printf("size_t - %d\tint - %d\n\n", sizeof(hello), sizeof(hello2));

    list_t *mylist = new_list();

    add_item(mylist, 1);
    add_item(mylist, 2);
    add_item(mylist, 3);
    add_item(mylist, 4);
    add_item(mylist, 5);
    add_item(mylist, 6);
    add_item(mylist, 7);
    add_item(mylist, 8);
    add_item(mylist, 9);
    add_item(mylist, 10);

    //printf("items count = %d\n", print_list(mylist));
    print_list(mylist);
    //printf("\n");

    // printf("last_item = %d\n", pop_last_item(mylist));

    print_list(mylist);
    // add_item(mylist, 500);
    print_list(mylist);

    pop_item(mylist, 9);
    print_list(mylist);
    add_item(mylist, 333);
    print_list(mylist);

    clear_list(mylist);
    // add_item(mylist, 9);
    // print_list(mylist);

    // printf("value = %d\n", get_item(mylist, 8));

    // for(int i = 0; i < 3; i++) {
    //     add_item(mylist, 1);
    //     add_item(mylist, 2);
    //     add_item(mylist, 3);
    //     add_item(mylist, 4);
    //     add_item(mylist, 5);
    //     add_item(mylist, 6);
    //     add_item(mylist, 7);

    //     printf("items = %d\n", print_list(mylist));

    //     printf("deleted items = %d\n", clear_list(mylist));

    //     printf("after delete\n");
    //     //printf("%d\n", mylist->node_count);
    //     printf("items = %d\n", print_list(mylist));

    //     printf("\n\n");
    // }

    // ud - unsigned int
    // printf("%ud\n", n);

    return 0;
}