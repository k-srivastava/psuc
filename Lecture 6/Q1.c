/*
Reverse a number and check if it is a palindrome.
*/
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

uint32_t reverse_number(uint32_t number)
{
    uint32_t reversed_number = 0;
  
    while (number != 0)
    {
        uint8_t last_digit = number % 10;
        reversed_number = (reversed_number * 10) + last_digit;
        number /= 10;
    }
    
    return reversed_number;
}

bool is_palindrome(uint32_t number) { return number == reverse_number(number); }

int main(void)
{
    uint32_t number;
    
    printf("Enter a number: ");
    scanf("%u", &number);
    
    printf("Reversed number: %u.\n", reverse_number(number));
    
    if (is_palindrome(number)) { printf("%u is a palindrome.\n", number); }
    else { printf("%u is not a palindrome.\n", number); }
    
    return 0;
}
