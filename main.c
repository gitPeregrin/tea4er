//
//  main.c
//  tea4er
//
//  Created by Mike An on 13.06.2023.
//

#include <stdio.h>

int roundUp(double d){
    int intd = (int)d;
    d -= intd;
    return d < 0.5 ? intd : ++intd ;
}

int main(void) {
    float something = 6.53;
    printf("%f -> %d\n",something, roundUp(something));
}
