#include <stdio.h>
#include <stdlib.h>

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

    return 0;
}