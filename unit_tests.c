/*
 *
 *
 *
 * Example using assert.h libary
 *
 * To compile this, go into your project 1 folder on grace and type in the terminal: `gcc unit_tests.c functions.c -o test.x`
 * then run with test.x
 *
 *
 */


#include <stdio.h> 
#include <assert.h> 
#include "functions.h"

int main(void){
    /* Base Cases*/
    assert(gfn(0,1,0) == 0);
    assert(gfn(0, 1, 1) == 1);

    /* Recursive Case */
    assert(gfn(0,1,2) == 1);
    assert(gfn(0,1,3) == 2);
    assert(gfn(0,1,4) == 3);

    /* error */
    assert(gfn(0,1,-1) == -1);

    /* Other bases */
    assert(gfn(20, 30, 0) == 20);
    assert(gfn(20, 30, 1) == 30);
    assert(gfn(20, 30, 2) == 50);


    printf("All Assertions Succeeded\n");
    return 0;
}
