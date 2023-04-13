/*
Convert temperature from fahrenheit to celsius.
*/
#include <stdio.h>

int main(void)
{
    double fahrenheit;
    
    printf("Enter the temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);
    
    double celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("The temperature in celsius is %.2lf.\n", celsius);
  
    return 0;
}
