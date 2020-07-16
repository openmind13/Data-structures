#include <stdio.h>
#include <stdlib.h>

#include "list.h"


int main() {
    printf("list program\n");
    printf("-------------------------------------------------\n\n");

    list_t *mylist = new_list();
    // printf("printed items = %d\n", print_list(mylist));


    for(int i = 0; i < 3; i++) {
        append_item(mylist, 1);
        append_item(mylist, 2);
        append_item(mylist, 3);
        append_item(mylist, 4);
        append_item(mylist, 5);
        append_item(mylist, 6);
        append_item(mylist, 7);

        printf("items = %d\n", print_list(mylist));

        printf("deleted items = %d\n", clear_list(mylist));

        printf("after delete\n");
        //printf("%d\n", mylist->node_count);
        printf("items = %d\n", print_list(mylist));

        printf("\n\n");
    }

    // ud - unsigned int
    // printf("%ud\n", n);

    return 0;
}