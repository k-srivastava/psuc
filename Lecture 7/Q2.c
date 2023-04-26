/*
Calculate 'n' tables up to 'k' terms using two for-loops.
*/
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t rows, columns;
    
    printf("Enter the number of rows: ");
    scanf("%u", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%u", &columns);
    
    for (uint32_t i = 1; i <= rows; i++)
    {
        for (uint32_t j = 1; j <= columns; j++) { printf("%u * %u = %u\t", i, j, i * j); }
        printf("\n");
    }
    
    return 0;
}
