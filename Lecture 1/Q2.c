#include <stdio.h>

int main(void)
{
    float radius;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    float area = 3.1416 * radius * radius;
    printf("The area of the circle is %.2f.\n", area);
    
    return 0;
}
