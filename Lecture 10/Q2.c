/*
Write a function to input a string and toggle its case.
*/
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void toggle_case(char* string)
{
    for (size_t i = 0; i < strlen(string); i++)
    {
        if (islower(string[i])) { string[i] = toupper(string[i]); }
        else if (isupper(string[i])) { string[i] = tolower(string[i]); }
    }
}

int main(void)
{
    char* string;
    
    printf("Enter a string: ");
    scanf("%s", string);
    
    toggle_case(string);
    
    printf("\nThe string after toggle case is: '%s'.\n", string);
    return 0;
}
