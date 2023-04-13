#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int32_t number_1, number_2;
    int32_t largest;
    
    printf("Enter the first number: ");
    scanf("%d", &number_1);
    
    printf("Enter the second number: ");
    scanf("%d", &number_2);
    
    largest = number_1 > number_2 ? number_1 : number_2;
    printf("The largest number is %d.\n", largest);
    
    return 0;
}
