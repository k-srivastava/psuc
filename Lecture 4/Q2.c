/*
Given number is even or odd.
*/
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int32_t number;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) { printf("The number %d is even.\n", number); }
    else { printf("The number %d is odd.\n", number); }
  
    return 0;
}
