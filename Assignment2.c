#include <stdio.h>

int main() {
    double length, width, area, perimeter;

  
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    
    area = length * width;
    perimeter = 2 * (length + width);

    
    printf("\n--- Results ---\n");
    printf("Area of the rectangle = %.2lf\n", area);
    printf("Perimeter of the rectangle = %.2lf\n", perimeter);

    return 0;
}

