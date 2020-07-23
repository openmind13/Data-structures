

LIST=./linked_list/list.c ./linked_list/list.h

list:
	clear && gcc -o main main.c $(LIST) && ./main




.DEFAULT_GOAL := list