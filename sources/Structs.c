#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char* name; // Name as string pointer
    char major[50];
    int age;
    double gpa;
};

typedef struct Person {
    double salary;
    int age;
} Person;

void studentTest()
{

    printf("**********STRUCTS********** \n");

    printf("---- First Student ----\n");
    /// @brief  Using Pointer
    struct Student* student1;

    student1->age = 22;
    student1->gpa = 3.2;
    student1->name = "John Peter";
    strcpy(student1->major, "Business");

    printf("Student GPA: %f in %s \n", student1->gpa, student1->major);
    printf("Student Name: %s \n", student1->name);

    printf("---- Second Student ----\n");
    struct Student student2;

    student2.age = 21;
    student2.gpa = 4.0;
    student2.name = "Peter Thiel";
    strcpy(student2.major, "Science");

    printf("Student GPA: %f in %s\n", student2.gpa, student2.major);
    printf("Student Name: %s \n", student2.name);

    printf("---- Third Student ----\n");
    struct Student student3 = { .name = "Lucy Keith", .age = 23, .gpa = 3.6 };
    strcpy(student3.major, "Arts");

    printf("Student GPA: %f in %s \n", student3.gpa, student3.major);
    printf("Student Name: %s \n", student3.name);

    printf("---- Person Struct ----\n");
    Person person1 = { .age = 30, .salary = 300.50 };
    printf("Salary: %.2lf \nAge: %d", person1.salary, person1.age);

    printf("\n");
}
