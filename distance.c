#include <stdio.h>
int main( ){
    int ins[10] ;
    double finals = 0.0 ;
    printf("Input-Please enter 10 intigers: ") ;
    for (int w = 0 ; w < 10 ; w++){
        scanf("%d" , &ins[w] ) ;
        finals += ins[w] ; }
    double dist = finals / 10.0 ;
    printf("Output-Reverse order distance:\n") ;
    for (int q = 9 ; q >= 0; q--){
        double howfar = ins[q] - dist ;
        printf("%.1f " , howfar ) ; }
    printf("\n") ;
    return 0 ; }
