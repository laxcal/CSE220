#include <stdio.h>
int main() {
    float Vol = 120.5;  // Assuming a fixed pool volume
    float Hrs;
    float x, y;
    printf("Please enter the flow rate of the first pipe (m^3/hour): ");
    scanf("%f", &x);
    printf("Please enter the flow rate of the second pipe (m^3/hour): ");
    scanf("%f", &y);
    Hrs = Vol/(x + y);
    printf("It would take %.6f hours to fill the pool\n", Hrs);
    return 0;
}
