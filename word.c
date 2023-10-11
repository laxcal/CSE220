#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main( ){
    char input[101] ;
    printf("Please enter a sentence or phrase no more than 100 charachters and that ends with a punctuation mark: ") ;
    fgets(input , sizeof(input), stdin) ;
    int howmuch = strlen(input) ;
    if (howmuch > 0 && input[howmuch - 1] == '\n') {
        input[howmuch - 1] = '\0' ; }
    int massnum = 0 ;
    int words = 0 ;
    char * ins = strtok(input , " ") ;
    while (ins != NULL) {
        int howmuch2 = 0;
        for (int q = 0; ins[q] != '\0'; q++ ) {
            if (isalpha( ins[q] ) ) {
                howmuch2++ ; } }
        if (howmuch2 > 0) {
            words++ ;
            massnum += howmuch2 ; }
        ins = strtok(NULL , " ") ; }
    if (words > 0) {
        float finalword = (float)massnum/words ;
        printf("Average word length: %.1f\n" , finalword) ; } 
    else{
        printf("No words found in the sentence.\n") ; }
    return 0 ; }
