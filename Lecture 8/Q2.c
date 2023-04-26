/*
Arrange the given elements in a 1D array in ascending and descending order using
bubble sort method.
*/
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

bool is_ascending(uint8_t character)
{
    uint8_t lowercase = tolower(character);
    
    if (lowercase == 'a') { return true; }
    return false;
}

void bubble_sort(int32_t *numbers, uint16_t length, bool ascending)
{
    for (uint16_t i = 0; i < length - 1; i++)
    {
        for (uint16_t j = 0; j < length - (i + 1); j++)
        {
            bool requires_swap = false;
            
            if (ascending) { requires_swap = numbers[j] > numbers[j + 1]; }
            else { requires_swap = numbers[j] < numbers[j + 1]; }
            
            if (requires_swap)
            {
                int32_t temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

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
    
    uint8_t character;
    printf("\nHow should the array be sorted? (A)scending or (D)escending: ");
    scanf("%c", &character);
    
    bubble_sort(numbers, effective_length, is_ascending(character));
    
    for (uint16_t i = 0; i < effective_length; i++) { printf("%d\n", numbers[i]); }
    
    return 0;
}
