/*
Print all the prime numbers in a given 1D array.
*/
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

bool is_prime(int32_t number)
{
    if (number <= 1) { return false; }
    
    for (uint32_t i = 2; i < number; i++)
    {
        if (number % i == 0) { return false; }
    }
    
    return true;
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

    printf("\n");  // Clean up the terminal output.
    for (uint16_t i = 0; i < effective_length; i++)
    {
        if (is_prime((numbers[i]))) { printf("%d\n", numbers[i]); }
    }
    
    return 0;
}
