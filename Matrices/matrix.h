#ifndef MATRIX_H
#define MATRIX_H

#include <assert.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

void pretty_print(const size_t rows, const size_t columns, const int32_t matrix[rows][columns])
{
    printf("{\n");
    
    for (size_t i = 0; i < rows; i++)
    {
        printf("    { ");
        for (size_t j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("}\n");
    }
    
    printf("}\n");
}

double calculate_norm(const size_t rows, const size_t columns, const int32_t matrix[rows][columns])
{
    int32_t sum = 0;
    
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++) { sum += pow(matrix[i][j], 2); }
    }
    
    return sqrt(sum);
}

int32_t calculate_trace(const size_t rows, const size_t columns, const int32_t matrix[rows][columns])
{
    int32_t trace = 0;
    
    assert(rows == columns);
    
    for (size_t i = 0; i < rows; i++) { trace += matrix[i][i]; }
    return trace;
}

bool is_symmetric(const size_t rows, const size_t columns, const int32_t matrix[rows][columns])
{
    if (rows != columns) { return false; }
  
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            if (matrix[i][j] != matrix[j][i]) { return false; }
        }
    }
    
    return true;
}

void transpose(const size_t rows, const size_t columns, const int32_t input_matrix[rows][columns], int32_t output_matrix[columns][rows])
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++) { output_matrix[j][i] = input_matrix[i][j]; }
    }
}

bool can_multiply(const size_t rows_1, const size_t columns_1, const size_t rows_2, const size_t columns_2)
{
    return columns_1 == rows_2;
}

void mutliply(const size_t rows_1, const size_t columns_1, const int32_t matrix_1[rows_1][columns_1],
              const size_t rows_2, const size_t columns_2, const int32_t matrix_2[rows_2][columns_2],
              int32_t output_matrix[rows_1][columns_2])
{
    assert(can_multiply(rows_1, columns_1, rows_2, columns_2));
    
    for (size_t i = 0; i < rows_1; i++)
    {
        for (size_t j = 0; j < columns_2; j++)
        {
            output_matrix[i][j] = 0;
            for (size_t k = 0; k < rows_2; k++) { output_matrix[i][j] += matrix_1[i][k] + matrix_2[k][j]; }
        }
    }
}

void interchange_diagonals(const size_t rows, const size_t columns, int32_t matrix[rows][columns])
{
    assert(rows == columns);
  
    for (size_t i = 0, j = 0, k = rows - 1; i < rows; i++, j++, k--)
    {
        int32_t temp = matrix[i][j];
        matrix[i][j] = matrix[i][k];
        matrix[i][k] = temp;
    }
}

#endif
