#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int32_t number_1, number_2;

    printf("Enter the first number: ");
    scanf("%d", &number_1);

    printf("Enter the second number: ");
    scanf("%d", &number_2);
    
    int64_t total = number_1 + number_2;
    
    printf("%d + %d = %ld\n", number_1, number_2, total);
    
    return 0;
}
