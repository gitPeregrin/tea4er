//
//  main.c
//  tea4er
//
//  Created by Mike An on 13.06.2023.
//

#include <stdio.h>
#include "mathematics.h"


int main(void) {
    float something = 6.53;
    printf("%f -> %d\n",something, mathRound(something));
    printf("%f ^ %d -> %f\n", something, 2, mathPower(something, 2));
    printf("%d ^ %d -> %d\n", mathRound(something), 3 ,mathRound(mathPower((double)mathRound(something), 3)));
}
