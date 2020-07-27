

LIST=./linked_list/list.c ./linked_list/list.h
TREE=./binary_tree/tree.c ./binary_tree/tree.h

build:
	clear && gcc -o main main.c $(LIST) $(TREE) && ./main


.DEFAULT_GOAL := build