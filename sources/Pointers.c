#include <stdio.h>
#include <stdlib.h>

extern int pointers()
{
    printf("**********POINTERS********** \n");

    int age = 30;
    int* pAge = &age;
    double gpa = 3.4;
    double* pGpa = &gpa;
    char grade = 'A';
    char* pGrade = &grade;

    printf("Pointer for age: %p \n", pAge);
    printf("Value of age from pointer pAge: %d \n", *pAge);

    return 0;
}
