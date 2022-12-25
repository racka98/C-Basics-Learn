#include <stdio.h>
#include <stdlib.h>

void printMemory(int size, int* memPtr) {
    printf("Allocated Memory;\n");
    for (int i = 0; i < size; ++i) {
        printf("%p\n", memPtr + i);
    }
}

extern int memoryFunc()
{

    printf("**********MEMORY********** \n");

    int age = 30;
    double gpa = 3.4;
    char grade = 'B';

    printf("Memory Addess of age: %p \n", &age);
    printf("Memory Addess of gpa: %p \n", &gpa);
    printf("Memory Addess of grade: %p \n", &grade);

    printf("**********DYNAMIC MEMORY ALLOCATION********** \n");

    int n = 4; // We are going to store 4 ints
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int)); // Allocate 16(4x4)bytes for int

    if (ptr == NULL) {
        printf("Memory can not be allocated");
        return 1;
    }

    printf("Enter input: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
    }
    printf("Input Values; ");
    for (int i = 0; i < n; ++i) {
        printf("%d, ", *(ptr + i));
    }
    printf("\n");
    printMemory(n, ptr);

    //  Reallocate memory
    printf("Reallocating Memory--------\n");
    n = 6;
    ptr = realloc(ptr, n * sizeof(int));

    printf("Enter Extra inputs: ");
    for (int i = 4; i < n; ++i) {
        scanf("%d", ptr + i);
    }
    printf("Values after realloc; ");
    for (int i = 0; i < n; ++i) {
        printf("%d, ", *(ptr + i));
    }
    printf("\n");
    printMemory(n, ptr);

    free(ptr); /// Free the memory

    return 0;
}
