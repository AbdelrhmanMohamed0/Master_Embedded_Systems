#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdbool.h> // For bool type
#include <stdio.h>  // For input/output functions
#include <stdlib.h> // For exit function

#define MAXSIZE 100       // Maximum size of the stack

typedef unsigned int u32; // Alias for unsigned int
typedef unsigned char u8;
typedef double       f64;

// Define an element type union that can hold both u8 and f64
typedef union {
    f64 f64_element;
    u32 u32_element;
    u8 u8_element;
} ELEMENT_TYPE;

#endif
