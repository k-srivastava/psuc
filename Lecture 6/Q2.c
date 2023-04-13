/*
Check whether the number is a strong number or not.
*/
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

uint64_t factorial(uint32_t number)
{
    uint64_t factorial_ = 1;
    for (uint32_t i = 2; i <= number; i++) { factorial_ *= i; }
    return factorial_;
}

bool is_strong(uint32_t number)
{
    uint32_t number_copy = number;
    uint32_t total = 0;
    
    while (number_copy != 0)
    {
        uint8_t last_digit = number_copy % 10;
        total += factorial(last_digit);
        number_copy /= 10;
    }
    
    return number == total;
}

int main(void)
{
    uint32_t number;
    
    printf("Enter a number: ");
    scanf("%u", &number);
    
    if (is_strong(number)) { printf("The number %u is a strong number.\n", number); }
    else { printf("The number %u is not a strong number.\n", number); }
    
    return 0;
}
