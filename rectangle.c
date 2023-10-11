#include <stdio.h>

int main() {
    double height, width, perimeter, area;

    printf("Enter the height of the rectangle: ");
    scanf("%lf", &height);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    perimeter = (height + width) * 2;
    area = width * height;

    printf("Perimeter of the rectangle = %.6lf\n", perimeter);
    printf("Area of the rectangle = %.6lf\n", area);

    return 0;
}
