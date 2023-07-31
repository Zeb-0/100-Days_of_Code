#include <stdio.h>

// calculate area of circle
int main() {
    float PI = 3.142;
    float radius, area, perimeter;

    printf("Enter the radius: \n");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of circle is: %.3f\n", area);

    // perimeter of circle
    perimeter = PI * 2 * radius;
    printf("Perimeter of circle is: %.3f\n", perimeter);

    return (0);
}