/*
Given number is a perfect number or not using a while loop.
*/
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

bool is_perfect(uint32_t number)
{
    uint32_t total = 0;
    uint32_t i = 1;
    
    while (true)
    {
        if (i == number) { break; } 
      
        if (number % i == 0) { total += i; }
        i++;
    }
    
    return total == number;
}

int main(void)
{
    uint32_t number;
    
    printf("Enter a number: ");
    scanf("%u", &number);
    
    if (is_perfect(number)) { printf("%u is a perfect number.\n", number); }
    else { printf("%u is not a perfect number,\n", number); }
    
    return 0;
}
