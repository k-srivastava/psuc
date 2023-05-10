/*
Count the number of words in a sentence.
*/
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

uint32_t get_num_words(char* sentence)
{
    uint32_t num_spaces = 0;
  
    for (size_t i = 0; i < strlen(sentence); i++)
    {
        if (isspace(sentence[i])) { num_spaces++; }
    }
    
    return num_spaces;
}

int main(void)
{
    size_t max_length = 100;
    char* sentence = malloc(max_length);
    
    printf("Enter a sentence: ");
    getline(&sentence, &max_length, stdin);
    
    uint32_t num_words = get_num_words(sentence);
    printf("There are %u words in the sentence.\n", num_words);
    
    free(sentence);
    return 0;
}
