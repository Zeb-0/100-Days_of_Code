#include <stdio.h>

// calculates perimeter of a rectangle
int main() {
    int height, width, perimeter, area;

    printf("Enter the width: \n");
    scanf("%d", &width);
    printf("Enter the heigth: \n");
    scanf("%d", &height);

    perimeter = width * height;
    return (perimeter);

    printf("Perimeter of rectangle is: %d\n", perimeter);

    // calculate area of perimeter
    area = width * height;
    return (area);

    printf("Area of rectangle is: \n", area);

    return (0);
}