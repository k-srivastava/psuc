/*
Insert the element at a position.
*/
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const uint16_t max_length = 100;
    int32_t numbers[max_length];
    
    uint16_t effective_length;
    
    while (true)
    {
        printf("Enter the length of the array: ");
        scanf("%hu", &effective_length);
        
        if (effective_length <= 100) { break; }
        else { printf("Invalid length of %hu. Try again.\n\n", effective_length); }
    }
    
    printf("\n");  // Clean up the terminal output.
    for (uint16_t i = 0; i < effective_length; i++)
    {
        printf("Enter the %u-th number: ", i);
        scanf("%u", &numbers[i]);
    }
    
    uint16_t position;
    int32_t number;
    
    while (true)
    {
        printf("\nEnter the index of the number: ");
        scanf("%hu", &position);
        
        if (position < effective_length) { break; }
        else { printf("Invalid index of %hu. Try again.\n", position); }
    }
    
    printf("\n");  // Clean up the terminal output.
    printf("Enter the number: ");
    scanf("%d", &number);
    
    for (uint16_t i = effective_length; i > position; i--) { numbers[i] = numbers[i - 1]; }
    numbers[position] = number;
    effective_length++;
    
    printf("\n");  // Clean up the terminal output.
    for (uint16_t i = 0; i < effective_length; i++) { printf("%d\n", numbers[i]); }
    
    return 0;
}
