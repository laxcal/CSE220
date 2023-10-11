#include <stdio.h>

int main() {
    char numba [15] ; 
    printf ("Enter telephone number in the form (xxx) xxx-xxxx: ") ;
    scanf ("(%3s) %3s-%4s", numba, numba + 4, numba + 8) ;
    printf ("You entered %s.%s.%s\n", numba, numba + 4, numba + 8) ;
    return 0 ;
}
