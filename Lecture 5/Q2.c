/*
Find the smallest of three numbers using conditional operator.
*/
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int32_t number_1, number_2, number_3;
    
    printf("Enter the first number: ");
    scanf("%d", &number_1);
    
    printf("Enter the second number: ");
    scanf("%d", &number_2);
    
    printf("Enter the third number: ");
    scanf("%d", &number_3);
    
    int32_t greatest = number_1 > number_2 && number_1 > number_3 ? number_1 : number_2 > number_1 && number_2 > number_3 ? number_2 : number_3;
    
    printf("The greatest number is %d.\n.", greatest);
    return 0;
}
