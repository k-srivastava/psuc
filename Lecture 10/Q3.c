/*
Write a function to find the factorial of a number recursively.
*/
#include <stdint.h>
#include <stdio.h>

uint32_t factorial(uint32_t number) { return number == 2 ? 2 : number * factorial(number - 1); }

int main(void)
{
    uint32_t number;
    
    printf("Enter a number: ");
    scanf("%u", &number);
    
    printf("%u! = %u\n", number, factorial(number));
    return 0;
}
