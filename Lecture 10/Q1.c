/*
Write a function to find the largest number in a given list of numbers.
*/
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int32_t get_largest_number(int32_t numbers[], size_t length)
{
    int32_t largest_number = numbers[0];
    
    for (size_t i = 0; i < length; i++)
    {
        if (numbers[i] > largest_number) { largest_number = numbers[i]; }
    }
    
    return largest_number;
}

int main(void)
{
    const size_t max_length = 100;
    int32_t numbers[max_length];
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
        printf("Enter the %zu-th number: ", i);
        scanf("%u", &numbers[i]);
    }
    printf("\n");  // Clean up the terminal output. 
    
    int32_t largest_number = get_largest_number(numbers, length);
    printf("The largest number is: %d.\n", largest_number);
    
    return 0;
}
