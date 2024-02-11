#include <stdio.h>
#include <stdlib.h>
#include "List.h"  // Assuming List.h contains necessary function prototypes

// Function to display an element
void display(ELEMENT_TYPE element) {
    printf("%d \n", element);
}

int main(void) {
    List ls;
    ELEMENT_TYPE element, data, size,pos;

    list_init(&ls);  // Initialize the list

    // Test cases for insert_list
    printf("Testing insert_list:\n");
    if (insert_list(&ls, 8, 0)) {
        printf("Insertion at front succeeded.\n");
    }
    if (insert_list(&ls, 15, 1)) {
        printf("Insertion in the middle succeeded.\n");
    }
    if (insert_list(&ls, 22, ls.size)) {
        printf("Insertion at the end succeeded.\n");
    }
    if (!insert_list(&ls, 30, -1)) {
        printf("Insertion at invalid position (-1) failed.\n");
    }
    if (!insert_list(&ls, 35, ls.size + 1)) {
        printf("Insertion at invalid position (beyond size) failed.\n");
    }

// Valid retrieval from front
pos = 0;
if (retrieve_list(&ls, &data, pos)) {
    printf("Retrieved element from front: %d\n", data);
}

// Valid retrieval from middle
pos = ls.size / 2;
if (retrieve_list(&ls, &data, pos)) {
    printf("Retrieved element from middle: %d\n", data);
}

// Valid retrieval from end
pos = ls.size - 1;
if (retrieve_list(&ls, &data, pos)) {
    printf("Retrieved element from end: %d\n", data);
}

// Invalid retrieval (negative position)
pos = -1;
if (!retrieve_list(&ls, &data, pos)) {
    printf("Retrieval failed for invalid position (-1)\n");
}

// Invalid retrieval (position beyond list size)
pos = ls.size + 1;
if (!retrieve_list(&ls, &data, pos)) {
    printf("Retrieval failed for invalid position (beyond size)\n");
}

// Valid replacement at front
pos = 0;
if (replace_list(&ls, 99, pos)) {
    printf("Replacement at front succeeded.\n");
}

// Valid replacement in the middle
pos = ls.size / 2;
if (replace_list(&ls, 88, pos)) {
    printf("Replacement in the middle succeeded.\n");
}

// Valid replacement at the end
pos = ls.size - 1;
if (replace_list(&ls, 77, pos)) {
    printf("Replacement at the end succeeded.\n");
}

// Invalid replacement (negative position)
pos = -1;
if (!replace_list(&ls, 44, pos)) {
    printf("Replacement failed for invalid position (-1)\n");
}

// Invalid replacement (position beyond list size)
pos = ls.size + 1;
if (!replace_list(&ls, 55, pos)) {
    printf("Replacement failed for invalid position (beyond size)\n");
}


    // Test cases for delete_list
    printf("\nTesting delete_list:\n");
    if (delete_list(&ls, &data, 0)) {
        printf("Deletion from front succeeded. Deleted element: %d\n", data);
    }
    if (delete_list(&ls, &data, ls.size - 1)) {
        printf("Deletion from end succeeded. Deleted element: %d\n", data);
    }
    if (delete_list(&ls, &data, ls.size / 2)) {
        printf("Deletion from middle succeeded. Deleted element: %d\n", data);
    }
    if (!delete_list(&ls, &data, -1)) {
        printf("Deletion at invalid position (-1) failed.\n");
    }
    if (!delete_list(&ls, &data, ls.size)) {
        printf("Deletion at invalid position (beyond size) failed.\n");
    }
    if (!delete_list(&ls, &data, 0)) {
        printf("Deletion from empty list failed.\n");
    }


// Insert some elements
insert_list(&ls, 15, 0);
insert_list(&ls, 20, 1);
insert_list(&ls, 25, 2);

// Test as stack
printf("\nTraversing as stack:\n");
traverse_list_as_stack(&ls, &display);

// Test as queue
printf("\nTraversing as queue:\n");
traverse_list_as_queue(&ls, &display);

// Replacement in an empty list
clear_list(&ls);  // Ensure list is empty
if (!replace_list(&ls, 66, 0)) {
    printf("Replacement failed in empty list\n");
}


// Retrieval from empty list
clear_list(&ls);  // Ensure list is empty
if (!retrieve_list(&ls, &data, 0)) {
    printf("Retrieval failed from empty list\n");
}

    return 0;
}
