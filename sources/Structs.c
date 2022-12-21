#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char* name; // Name as string pointer
    char major[50];
    int age;
    double gpa;
};

void studentTest()
{

    printf("**********STRUCTS********** \n");


    struct Student student1;
    
    student1.age = 22;
    student1.gpa = 3.2;
    student1.name = "John Peter";
    strcpy(student1.major, "Business");

    printf("Student GPA: %f \n", student1.gpa);
    printf("Student Name: %s \n", student1.name);

    printf("\n");
}
