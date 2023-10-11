#include <stdio.h>
int main( ){
    int number , maximums , minnimums ;
    printf("Please enter five numbers: ") ;
    scanf("%d" , & number) ;
    maximums = number ;
    minnimums = number ;
    for (int l = 1 ; l < 5 ; l++){
        scanf("%d", &number);
        if (number > maximums){
            maximums = number;
        } else if (number < minnimums){
            minnimums = number ;
        }
    }
    printf("%d %d\n" , maximums , minnimums) ;
    return 0 ;
}
