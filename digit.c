#include <stdio.h>

int main() {
    int num, num1, num2 = 0 ;
    printf("Enter a two-digit number: ") ;
    scanf("%d", &num) ;
    if (num < 10 || num > 99) {
        printf("Enter only a two-digit number.\n") ;
        return 1 ;
    }
    num1 = num ;
    while (num != 0) {
        int digit = num % 10 ;
        num2 = digit + num2 * 10 ;
        num /= 10 ;
    }
    printf("The reversal is: %02d\n", num2) ;
    return 0;
}
