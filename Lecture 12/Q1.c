/*
Write a program to find the length of a string using pointers.
*/
#include <stdint.h>
#include <stdio.h>

size_t get_length(char* string)
{
    size_t length = 0;
    char* ptr = string;
    
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    
    return length;
}

int main(void)
{
    char* string;
    
    printf("Enter a string: ");
    scanf("%s", string);
    
    size_t length = get_length(string);
    printf("Length: %zu.\n", length);
    
    return 0;
}
