#include <stdio.h>
#include <stdlib.h>

void writeText(const char* fileName, const char* text)
{
    FILE* pFile = fopen64(fileName, "w");
    fprintf(pFile, text);
    fclose(pFile);
}

void appendText(char* fileName, const char* text)
{
    FILE* pFile = fopen64(fileName, "a");
    fprintf(pFile, text);
    fclose(pFile);
}

void readFile(char* fileName)
{
    char line[255];
    FILE* pFile = fopen64(fileName, "r");
    //fprintf(pFile, text);
    fgets(line, 255, pFile);
    fclose(pFile);
    printf("Lines Read:\n");
    printf("%s", line);
}

void files()
{

    printf("**********WORKING WITH FILES********** \n");

    char* fileName = "employees.txt";

    writeText(fileName, "Jim: Salesman \nPam: Reception \nMichael: Manager \nOscar: Accountant");
    appendText(fileName, "\nDwight: Assistant to the Manager");
    readFile(fileName);
}
