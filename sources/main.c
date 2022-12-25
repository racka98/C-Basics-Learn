#include "Calculator.c"
#include "ExternalFunction.c"
#include "Files.c"
#include "Memory.c"
#include "Multiplication.c"
#include "Pointers.c"
#include "Structs.c"
#include <stdio.h>
#include <stdlib.h>

int variables(char* name);
void dataTypes();
void fun_with_numbers();
void user_inputs();
void arrays();
void printFirtNumber(int* array, int number);
void printNatualNumbersFor(int num);
void analyzeGrade(char grade);
int* array_diff(const int* arr1, size_t n1, const int* arr2, size_t n2, size_t* z);
long long findNb(long long m);
int removeElement(int* arr, int len, int indexToRemove);

int main()
{
    printf("Hello C \n");
    printf("Hey you there \n");

    // Print a triangle
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

    variables("Racka");

    dataTypes();

    fun_with_numbers();

    // user_inputs();

    // multiplication();

    arrays();

    externalFunction();

    int newArray[] = { 20, 4, 3, 5 };
    printFirtNumber(newArray, 4);

    // calculator();

    printNatualNumbersFor(10);

    analyzeGrade('C');

    studentTest();

    memoryFunc();

    pointers();

    // files();

    const int ARRAY_SIZE = 5;
    size_t zee = 1;
    size_t* z = &zee;
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 6 };

    int values[] = { 1, 2, 3, 4, 5 };

    removeElement(values, ARRAY_SIZE, 2);
    removeElement(values, ARRAY_SIZE, 4);

    printf("Array values \n");
    for (size_t k = 0; k < ARRAY_SIZE; k++) {
        printf("%d ", values[k]);
    }
    printf("\n");

    // for (size_t a = 0; a < *z; a++) {
    //     printf("%d \n", array[a]);
    // }

    // long long value = findNb(10000000000000);
    // printf("n is %lld", value);

    return 0;
}

int variables(char* name)
{

    int age = 70;
    // char name[] = "George";
    int variable1 = 2, variable2 = 25;
    printf("variable 1: %d, variable 2: %d\n", variable1, variable2);

    printf("**********VARIABLES********** \n");
    printf("There once was a man named George. %s\n", name);
    printf("He was %d years old. \n", age);
    printf("He really liked the name %s. \n", name);
    printf("But did not really like being %d. \n", age);

    const int constantDefault = 30; // Cant change and not inferred
    const constnant = 40; // Cant changes and is inferred
    printf("Contant: %d \n", constnant);

    return 0;
}

void dataTypes()
{
    int age = 30;
    double gpa = 3.4;
    float alpha = 1.4;
    char grade = 'A';
    char phrase[] = "Hello string in C"; // In C this cant be reassinged since it's an array of chars
    // phrase = "New"; - this fails
    char* reassigned = ""; // Assigning as a pointer allow you to change it if need
    reassigned = "Reassigned string"; // this works

    printf("**********DATA STYPES********** \n");
    printf("Integer: %d \n", age);
    printf("Double: %f \n", gpa);
    printf("Float %f \n", alpha);
    printf("Character: %c \n", grade);
    printf("String: %s \n", phrase);
    printf("String Pointer: %s \n", reassigned);
}

void fun_with_numbers()
{
    int age = 20;
    printf("Default: %d \n", age);

    /**
     * ++ operator at the end assigned it's current value to the variable then adds it
     * Having the operator at the beginning (++age) will first add the current value and assign the new
     * value to the variable
     * */

    int before = age++;
    printf("Before Add: %d \n", before);
    printf("After Add: %d \n", age);
}

void user_inputs()
{
    printf("**********INPUTS********** \n");
    char age[4];
    printf("Enter your age: ");
    fgets(age, 20, stdin);
    printf("You are %s years old \n", age);

    char name[20];
    printf("What is your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s \n", name);
}

void arrays()
{
    printf("**********ARRAYS********** \n");
    int numArray[] = { 1, 4, 5, 3 };
    numArray[2] = 20;

    int len = sizeof numArray / sizeof numArray[0]; // Length of the array
    long mySize = sizeof(numArray);
    printf_s("Mysize is : %d\n", mySize);

    for (size_t i = 0; i < len; i++) {
        printf("My num array: %d \n", numArray[i]);
    }
}

void printFirtNumber(int* array, int number)
{
    printf("**********SEARCH NUMBER IN ARRAY********** \n");
    int len = sizeof array / sizeof array[0];

    for (size_t i = 0; i < len; i++) {
        if (array[i] == number) {
            printf("The number %d has been found at index %d \n", number, i);
        }
    }
}

void printNatualNumbersFor(int num)
{
    printf("**********NATURAL NUMBERS********** \n");
    int age = 20;
    char* message = (age >= 18) ? "You are old enough" : "Too young";
    printf("Message: %s", message);

    int i = 1;
    while (i <= num) {
        if (num < 0) {
            break;
        }

        printf("Number is: %d \n", i);
        i++;
    }
}

void analyzeGrade(char grade)
{
    switch (grade) {
    case 'A': {
        printf("You are Excellent!");
        break;
    }
    case 'B':
        printf("You did great!");
        break;
    case 'C':
        printf("You did ok");
        break;
    case 'D':
        printf("You did poorly!");
        break;
    case 'F':
        printf("You failed!");
        break;
    default:
        printf("Not a valid grade!");
        break;
    }

    printf("\n");
}

//  return a dynamically allocated array
//  assign the length of this array to *z
//  memory will be freed by the test suite

int* array_diff(const int* arr1, size_t n1, const int* arr2, size_t n2, size_t* z)
{

    //  <----  hajime!
    int* array1 = arr1;
    size_t size = 0;

    for (size_t i = 0; i < n1 - 1; i++) {

        for (size_t j = 0; j < n2 - 1; j++) {
            if (arr1[i] == arr2[j]) {
                for (size_t b = i; b < n1 - 1; b++) {
                    array1[b] = arr1[b + 1];
                }
            } else {
                size++;
            }
        }
    }

    z = &size;
    return array1;
}

long long findNb(long long m)
{
    long long cubeSize = 0;
    int n = 0;
    long long result = -1;
    while (cubeSize < m) {
        cubeSize += (n * n * n);
        n++;
    }
    if (cubeSize == m) {
        result = n - 1;
    }
    return result;
}

int removeElement(int* arr, int len, int indexToRemove)
{
    if (indexToRemove < 0 || indexToRemove >= len) {
        return 0;
    }
    memmove(arr + 1, arr, sizeof(int) * indexToRemove);
    arr[0] = 0;
    return 1;
}
