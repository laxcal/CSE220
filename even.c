#include<stdio.h>
int main( ){
    int p ;
    printf("Input: ") ;
    scanf("%d", &p) ;
    for (int j = 2 ; j * j <= p ; j += 2){
        int num = j * j ;
        printf("%d\n" , num) ;}
    return 0 ;}
