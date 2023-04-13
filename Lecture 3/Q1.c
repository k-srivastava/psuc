/*
Print ASCII values.
*/
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint8_t character;
    
    printf("Enter a character: ");
    scanf("%c", &character);
    
    printf("The ASCII of %c is %u.\n", character, character);
  
    return 0;
}
