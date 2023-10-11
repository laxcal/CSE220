#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
    float rad, vol;
    printf("Please enter the radius of a sphere: ");
    scanf("%f", &rad);
    vol = (4 / 3.0) * PI * pow(rad, 3);
    printf("The volume of the sphere is: %.6f\n",vol);
    return 0;
}
