#include <stdio.h>
int main( ){
    int big = -1 ;
    int nums ;
    printf("Input:\n") ;
    while (1) {
        scanf("%d" , &nums) ;
        if (nums >= 0 && nums > big){
            big = nums ;}
        if (nums <= 0) {
            break ;}}
    if (big >= 0) {
        printf("Output: %d\n" , big) ;} 
    return 0 ;}
