/*
Write a program to caculate the n-th number in the Fibonacci series recursively.
*/
#include <stdint.h>
#include <stdio.h>

uint32_t generate_fibonacci_series(uint32_t start, uint32_t next, uint32_t depth)
{
    if (depth == 0) { return start; }
    return generate_fibonacci_series(next, start + next, depth - 1);
}

int main(void)
{
    uint32_t depth;
    
    printf("Which number index should be generated: ");
    scanf("%u", &depth);
    
    printf("[%u]: %u.\n", depth, generate_fibonacci_series(0, 1, depth));
    return 0;
}
