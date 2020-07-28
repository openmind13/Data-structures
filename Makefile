

LIST=./linked_list/list.c ./linked_list/list.h
TREE=./binary_tree/tree.c ./binary_tree/tree.h
VECTOR=./vector/vector.c ./vector/vector.h
STACK=./stack/stack.c ./stack/stack.h
QUEUE=./queue/queue.c ./queue/queue.h


build:
	clear && gcc -o main main.c $(LIST) $(TREE) $(VECTOR) $(STACK) $(QUEUE) && ./main


.DEFAULT_GOAL := build