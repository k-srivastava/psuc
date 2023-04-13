/*
Evaluate the following expressions for the values a = 30, b = 10, c = 5 and d = 15.
(i) (a + b) * c / d
(ii) ((a + b) * c) / d
(iii) a + (b * c) / d
(iv) (a + b) * (c / d)
*/
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const int32_t a = 30, b = 10, c = 5, d = 15;
    
    printf("Expression 1: %d.\n", (a + b) * c / d);
    printf("Expression 2: %d.\n", ((a + b) * c) / d);
    printf("Expression 3: %d.\n", a + (b * c) / d);
    printf("Expression 4: %d.\n", (a + b) * (c / d));
    
    return 0;
}
