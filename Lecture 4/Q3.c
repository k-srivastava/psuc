/*
Swap two numbers without using a third variable.
*/
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int32_t number_1, number_2;
    
    printf("Enter the first number: ");
    scanf("%d", &number_1);
    
    printf("Enter the second number: ");
    scanf("%d", &number_2);
    
    number_1 = number_1 ^ number_2;
    number_2 = number_1 ^ number_2;
    number_1 = number_1 ^ number_2;
    
    printf("The first number is now: %d.\n", number_1);
    printf("The second number is now: %d.\n", number_2);
  
    return 0;
}
