/*
Write a program to calculate the GCD of two numbers recursively.
*/
#include <stdint.h>
#include <stdio.h>

uint32_t gcd(uint32_t num_1, uint32_t num_2) { return num_2 == 0 ? num_1 : gcd(num_2, num_1 % num_2); }

int main(void)
{
    uint32_t num_1, num_2;
    
    printf("Enter the first number: ");
    scanf("%u", &num_1);
    
    printf("Enter the second number: ");
    scanf("%u", &num_2);
    
    printf("GCD(%u, %u) = %u\n", num_1, num_2, gcd(num_1, num_2));
    return 0;
}
