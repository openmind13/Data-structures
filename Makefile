build:
	clear && gcc -o main main.c list.c list.h && ./main

.DEFAULT_GOAL := build