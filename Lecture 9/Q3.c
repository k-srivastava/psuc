/*
Calculate the trace and the norm of a matrix.
*/
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const uint16_t max_length = 100;
    int32_t matrix[max_length][max_length];
    
    uint16_t rows, columns;
    
    while (true)
    {
        printf("Enter the rows of the matrix: ");
        scanf("%hu", &rows);
        
        if (rows <= 100) { break; }
        else { printf("Invalid length of %hu. Try again.\n\n", rows); }
    }
    
    while (true)
    {
        printf("Enter the columns of the matrix: ");
        scanf("%hu", &columns);
        
        if (columns <= 100) { break; }
        else { printf("Invalid length of %hu. Try again.\n\n", columns); }
    }
    
    if (rows != columns)
    {
        printf("Number of rows and columns must be equal in a square matrix.\n%hu != %hu.\n", rows, columns);
        return 1;
    }
    
    printf("\n");  // Clean up the terminal output.
    for (uint16_t i = 0; i < rows; i++)
    {
        for (uint16_t j = 0; j < columns; j++)
        {
            printf("Element [%hu][%hu]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int32_t trace = 0;
    double norm = 0;
    
    for (uint16_t i = 0; i < rows; i++)
    {
        for (uint16_t j = 0; j < columns; j++)
        {
            norm += pow(matrix[i][j], 2);
            
            if (i == j) { trace += matrix[i][j]; }
        }
    }
    
    norm = sqrt(norm);
    
    printf("Trace of the matrix: %d.\n", trace);
    printf("Norm of the matrix: %.2lf.\n", norm);
    
    return 0;
}
