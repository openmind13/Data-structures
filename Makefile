list:
	clear && gcc -o main main.c ./linked_list/list.c ./linked_list/list.h && ./main

.DEFAULT_GOAL := list