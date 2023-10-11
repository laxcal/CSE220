#include <stdio.h>

int main(){
    int first , second , third ;
    printf("Input: ") ;
    scanf("%d %d %d" , &first , &second , &third) ;
    if (first < second){
        int nums = first ;
        first = second ;
        second = nums ;}
    if (second < third){
        int nums = second ;
        second = third ;
        third = nums ;}
    if (first < second){
        int nums = first ;
        first = second ;
        second = nums ;}
    printf("Output: %d %d %d\n" , first , second , third) ;
    return 0 ;}
