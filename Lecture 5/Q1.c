/*
Compute all the roots of a quadratic equation using switch case.
*/
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const char* message = "A quadratic equation is of the form ax^2 + bx + c = 0.\n";
    int32_t a, b, c;
    
    printf("%s", message);
    
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    printf("Enter the value of c: ");
    scanf("%d", &c);
    
    int32_t discriminant = (b * b) - (4 * a * c);
    
    switch (discriminant == 0)
    {
        case true:
            printf("Roots are real and equal.");
            
            double root = -b / ((double)(2 * a));
            
            printf("The root is: %.2lf.\n", root);
            break;
          
        case false:
            switch (discriminant > 0)
            {
                case true:
                    printf("Roots are real and distinct.\n");
                    
                    double root_1 = (-b + sqrt(discriminant)) / ((double)(2 * a));
                    double root_2 = (-b - sqrt(discriminant)) / ((double)(2 * a));
                    
                    printf("The roots are: %.2lf and %.2lf.\n", root_1, root_2);
                    break;
                    
                case false:
                    printf("Roots are complex and distinct.\n");
                    
                    double root_term_1 = -b / ((double)(2 * a));
                    double root_term_2 = sqrt(-discriminant) / ((double)(2 * a));
                    
                    printf("The roots are %lf + i%lf and %lf - i%lf.\n", root_term_1, root_term_2, root_term_1, root_term_2);
                    break;
            }
    }
  
    return 0;
}
