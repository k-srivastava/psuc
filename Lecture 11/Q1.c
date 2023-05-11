/*
Write a program to create a structure containing student name and marks of three
subjects. Find out and print the total and average marks.
*/
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char* name;
    uint32_t marks[3];
} Student;

uint32_t get_total(Student* student)
{
    return student->marks[0] + student->marks[1] + student->marks[2];
}

double get_average(Student* student)
{
    const size_t length = 3;
    return (double) get_total(student) / length;
}

int main(void)
{
    const size_t max_length = 100;
    Student students[max_length];
    size_t length;

    while (true)
    {
        printf("Enter the length of the array: ");
        scanf("%zu", &length);
        
        if (length <= max_length) { break; }
        else { printf("Invalid length of %zu. Try again.\n\n", length); }
    }

    printf("\n");  // Clean up the terminal output.
    for (size_t i = 0; i < length; i++)
    {
        printf("%zu-th Student\n", i);
        
        students[i].name = (char*) malloc(max_length * sizeof(char));
        printf("\tEnter the name: ");
        scanf("%s", students[i].name);
        
        printf("\tEnter the marks in three subjects: ");
        scanf("%u %u %u", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);
        
        printf("\n");
    }
    
    for (size_t i = 0; i < length; i++)
    {
        printf("Student [%zu]: '%s'\n", i, students[i].name);
        printf("\tTotal: %u.\n", get_total(&students[i]));
        printf("\tAverage: %lf.\n", get_average(&students[i]));
        printf("\n");
    }
    
    return 0;
}
