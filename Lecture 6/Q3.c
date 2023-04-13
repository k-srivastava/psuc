/*
Check whether the number is an Armstrong number or not.
*/
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

uint8_t length(uint32_t number)
{
    uint8_t length_ = 0;
    
    while (number != 0)
    {
        number /= 10;
        length_++;
    }
    
    return length_;
}

bool is_armstrong(uint32_t number)
{
    uint8_t num_length = length(number);
    uint32_t number_copy = number;
    uint32_t total = 0;
    
    while (number_copy != 0)
    {
        uint8_t last_digit = number_copy % 10;
        total += pow(last_digit, num_length);
        number_copy /= 10;
    }
    
    return number == total;
}

int main(void)
{
    uint32_t number;
    
    printf("Enter a number: ");
    scanf("%u", &number);
    
    if (is_armstrong((number))) { printf("The number %u is an Armstrong number.\n", number); }
    else { printf("The number %u is not an Armstrong number.\n", number); }
    
    return 0;
}

