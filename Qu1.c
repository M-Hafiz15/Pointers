#include <stdio.h>

int main() {
    int x = 20; 
    int *ptr; 
    ptr = &x;   
    
    printf("Pointer value (points to x): %d\n", *ptr);
    printf("Address of pointer variable: %p\n", &ptr);

    *ptr = 25; 

    printf("Pointer value after change: %d\n", *ptr);
    printf("Address of pointer variable: %p", &ptr);

    return 0;
}
