#include <stdio.h>
#include <stdlib.h>

#include "vector.h"


typedef struct Vector {
    unsigned int cap; // capacity
    unsigned int len; // length
    int *buff;
} vector_t;


vector_t *new_vector() {
    
}
