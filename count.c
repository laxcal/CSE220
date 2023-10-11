#include <stdio.h>

int main( ){
    int first , second , third , fourth , Anum , Bnum ;
    printf("Please enter four integer numbers then A and B numbers: ") ;
    scanf("%d %d %d %d %d %d" , &first , &second , &third , &fourth , &Anum , &Bnum ) ;
    int howmany = 0 ;
    if (first >= Anum && first <= Bnum){
        howmany++ ;
    }
    if (second >= Anum && second <= Bnum){
        howmany++ ;
    }
    if (third >= Anum && third <= Bnum){
        howmany++ ;
    }
    if (fourth >= Anum && fourth <= Bnum){
        howmany++ ;
    }
    printf("%d\n" , howmany) ;
    return 0 ;
}
