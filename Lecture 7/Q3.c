/*
Floyd's triangle for the given number of rows.
*/
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t number;
    
    printf("Enter the number of elements: ");
    scanf("%u", &number);
    
    uint32_t i = 1;
    uint32_t num_current_elements = 0;
    uint32_t num_elements_this_row = 1;
    while (i <= number)
    {
        while (num_current_elements < num_elements_this_row)
        {
            if (i > number) { break; }
          
            printf("%d ", i);
            
            i++;
            num_current_elements++;
        }
        
        printf("\n");
        
        num_current_elements = 0;
        num_elements_this_row++;
    }
    
    return 0;
}
