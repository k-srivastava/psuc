/*
Find out prime number using while loop.
*/
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

bool is_prime(int32_t number)
{
    if (number <= 1) { return false; }
    
    uint32_t i = 2;
    while (i < number)
    {
        if (number % i == 0) { return false; }
        i++;
    }
    
    return true;
}

int main(void)
{
    int32_t number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (is_prime(number)) { printf("%d is prime.\n", number); }
    else { printf("%d is composite.\n", number); }
    
    return 0;
}
