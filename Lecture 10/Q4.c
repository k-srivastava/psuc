/*
Arrange 'n' names in alphabetical order.
*/
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(char** strings, size_t length)
{
    for (size_t i = 0; i < length - 1; i++)
    {
        for (size_t j = 0; j < length - (i + 1); j++)
        {
            if (strcmp(strings[j], strings[j + 1]) > 0)
            {
                char* temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    const size_t max_length = 100;
    char* names[max_length];
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
        names[i] = (char*) malloc(max_length * sizeof(char));
      
        printf("Enter the %zu-th name: ", i);
        scanf("%s", names[i]);
    }
    printf("\n");  // Clean up the terminal output.
    
    bubble_sort(names, length);
    
    for (size_t i = 0; i < length; i++)
    {
        printf("%zu: '%s'\n", i, names[i]);
    }
    
    // Clean-up the allocated names array memory.
    for (size_t i = 0; i < length; i++)
    {
        free(names[i]);
    }

    return 0;
}
